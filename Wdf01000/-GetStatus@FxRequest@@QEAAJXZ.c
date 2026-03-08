/*
 * XREFs of ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C003AAF0
 * Callers:
 *     imp_WdfRequestGetStatus @ 0x1C0035210 (imp_WdfRequestGetStatus.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C005A2D8 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

__int64 __fastcall FxRequest::GetStatus(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int Status; // ebx
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->m_Globals->FxVerifierIO )
    return (unsigned int)this->m_Irp.m_Irp->IoStatus.Status;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  Status = this->m_Irp.m_Irp->IoStatus.Status;
  FxNonPagedObject::Unlock(this, irql, v5);
  return Status;
}
