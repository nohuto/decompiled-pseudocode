/*
 * XREFs of ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA954
 * Callers:
 *     imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x1C00358F0 (imp_WdfRequestRetrieveUnsafeUserInputBuffer.c)
 *     imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C0035B50 (imp_WdfRequestRetrieveUnsafeUserOutputBuffer.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00BB0F8 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsInCallerContext(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  const void *_a1; // rax

  if ( (this->m_VerifierFlags & 0x20) != 0 )
  {
    return 0;
  }
  else
  {
    v3 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x37u, WPP_FxRequest_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v3;
}
