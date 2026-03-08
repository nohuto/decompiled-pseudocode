/*
 * XREFs of ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0054420
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006AA0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::_RequestCancelled(
        FxIrpQueue *Queue,
        _IRP *Irp,
        _IRP *CsqContext,
        unsigned __int8 CallerIrql)
{
  FxIoTarget *p_m_RequestCount; // rbp
  _IO_CSQ_IRP_CONTEXT *p_Overlay; // rsi
  unsigned __int64 ObjectHandleUnchecked; // rax
  _IO_CSQ_IRP_CONTEXT *_a1; // rcx
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  p_m_RequestCount = (FxIoTarget *)&Queue[-7].m_RequestCount;
  irql = 0;
  FxNonPagedObject::Unlock((FxNonPagedObject *)&Queue[-7].m_RequestCount, CallerIrql, (unsigned __int8)CsqContext);
  p_Overlay = (_IO_CSQ_IRP_CONTEXT *)&CsqContext[-1].Overlay;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)&CsqContext[-1].Overlay);
  _a1 = (_IO_CSQ_IRP_CONTEXT *)&CsqContext[-1].Overlay;
  if ( ObjectHandleUnchecked )
    _a1 = (_IO_CSQ_IRP_CONTEXT *)ObjectHandleUnchecked;
  WPP_IFR_SF_q(
    (_FX_DRIVER_GLOBALS *)p_Overlay->Csq,
    4u,
    0xEu,
    0x37u,
    (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
    _a1);
  CsqContext->MdlAddress = (_MDL *)CsqContext;
  *(_QWORD *)&CsqContext->Type = CsqContext;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  FxNonPagedObject::Lock(p_m_RequestCount, &irql, v10);
  v11 = irql;
  BYTE4(p_Overlay[8].Csq) &= ~2u;
  FxNonPagedObject::Unlock(p_m_RequestCount, v11, v12);
  p_Overlay[6].Irp->IoStatus.Status = -1073741536;
  p_Overlay[6].Irp->IoStatus.Information = 0LL;
  FxIoTarget::RequestCompletionRoutine(p_m_RequestCount, (FxRequestBase *)&CsqContext[-1].Overlay, v13);
}
