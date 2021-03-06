/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef GAUSPLBACKGROUND
#define GAUSPLBACKGROUND

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class GausPLShape : public RooAbsPdf {
public:
  GausPLShape() {} ; 
  GausPLShape(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _x0,
	      RooAbsReal& _sigma,
	      RooAbsReal& _alpha,
	      RooAbsReal& _n);
  GausPLShape(const GausPLShape& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new GausPLShape(*this,newname); }
  inline virtual ~GausPLShape() { }

  Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const ;
  Double_t analyticalIntegral(Int_t code, const char* rangeName=0) const ;

protected:

  RooRealProxy x ;
  RooRealProxy x0 ;
  RooRealProxy sigma ;
  RooRealProxy alpha ;
  RooRealProxy n ;
  
  Double_t evaluate() const ;

private:

  ClassDef(GausPLShape,1) // Generic background shape with a gaussian turn on and a power law tail
};
 
#endif
