void __fastcall __noreturn FxVerifierNullBugCheck(_FX_DRIVER_GLOBALS *FxDriverGlobals, ULONG_PTR ReturnAddress)
{
  WPP_IFR_SF_q(FxDriverGlobals, 1u, 2u, 0xAu, WPP_FxVerifierBugcheck_cpp_Traceguids, FxDriverGlobals);
  FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUIRED_PARAMETER_IS_NULL, 0LL, ReturnAddress);
}
