/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

#ifndef VWGPDF
#define VWGPDF

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"

class CB2Pdf : public RooAbsPdf {
public:
  CB2Pdf() {} ;
  CB2Pdf(const char *name, const char *title,
	      RooAbsReal& _x,
        RooAbsReal& _mean,
	      RooAbsReal& _width,
        RooAbsReal& _alpha1,
        RooAbsReal& _n1,
        RooAbsReal& _alpha2,
	      RooAbsReal& _n2);
  CB2Pdf(const CB2Pdf& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new CB2Pdf(*this,newname); }
  inline virtual ~CB2Pdf() { }

  Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const ;
  Double_t analyticalIntegral(Int_t code, const char* rangeName=0) const ;

protected:

  RooRealProxy x ;
  RooRealProxy mean ;
  RooRealProxy width ;
  RooRealProxy alpha1 ;
  RooRealProxy n1 ;
  RooRealProxy alpha2 ;
  RooRealProxy n2 ;

  Double_t evaluate() const ;

private:

  ClassDef(CB2Pdf,1) // Your description goes here...
};

#endif
