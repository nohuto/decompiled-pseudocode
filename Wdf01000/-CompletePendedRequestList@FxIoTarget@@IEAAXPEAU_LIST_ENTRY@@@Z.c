/*
 * XREFs of ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00528E8
 * Callers:
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C00537F0 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Remove@FxIoTarget@@UEAAXXZ @ 0x1C00538E0 (-Remove@FxIoTarget@@UEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0054BC8 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C005DA70 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006AA0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::CompletePendedRequestList(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v6; // rax
  FxRequestBase *p_Blink; // rdx

  while ( 1 )
  {
    Flink = RequestListHead->Flink;
    if ( RequestListHead->Flink == RequestListHead )
      break;
    if ( Flink->Blink != RequestListHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    RequestListHead->Flink = v6;
    v6->Blink = RequestListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    p_Blink = (FxRequestBase *)&Flink[-8].Blink;
    p_Blink->m_Irp.m_Irp->IoStatus.Status = -1071644154;
    p_Blink->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::RequestCompletionRoutine(this, p_Blink, a3);
  }
}
