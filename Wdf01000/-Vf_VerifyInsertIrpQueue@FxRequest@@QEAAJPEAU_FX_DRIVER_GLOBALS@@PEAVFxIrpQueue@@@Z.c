/*
 * XREFs of ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00BA490
 * Callers:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0004AC0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C003AB50 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C003ABF4 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyInsertIrpQueue(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIrpQueue *IrpQueue)
{
  unsigned int v3; // ebx
  unsigned __int64 _a2; // rax
  const void *_a1; // r8

  v3 = 0;
  if ( this->m_IrpQueue )
  {
    v3 = -1073741595;
    _a2 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x28u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, -1073741595);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else if ( FxDriverGlobals->FxVerifierOn )
  {
    return (unsigned int)FxRequest::Vf_VerifyRequestIsNotCompleted(this, FxDriverGlobals);
  }
  return v3;
}
