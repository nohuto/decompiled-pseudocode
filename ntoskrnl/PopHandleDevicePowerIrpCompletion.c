/*
 * XREFs of PopHandleDevicePowerIrpCompletion @ 0x1402BB4F0
 * Callers:
 *     PopRequestCompletion @ 0x1402BB410 (PopRequestCompletion.c)
 * Callees:
 *     PopFxQueueWorkItem @ 0x1402B8D54 (PopFxQueueWorkItem.c)
 *     PopPepDeviceDState @ 0x1402B9C4C (PopPepDeviceDState.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1402B9DB4 (PopDiagTraceFxDevicePowerState.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x1402BA4B8 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFreeIrp @ 0x1402BB5E8 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x1402BB70C (PopDequeueQuerySetIrp.c)
 */

__int64 __fastcall PopHandleDevicePowerIrpCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rsi
  __int64 *v5; // rdi

  v3 = *(IRP **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 200);
  if ( *(_BYTE *)(a1 + 184) != 2 || *(_DWORD *)(a1 + 188) != 1 || !v5 )
  {
LABEL_4:
    PopDequeueQuerySetIrp(v3);
    return PopFreeIrp(v3);
  }
  if ( !KeGetCurrentIrql()
    || !*(_BYTE *)(a1 + 209)
    || *(_DWORD *)(a1 + 192) == 1
    && (_m_prefetchw(v5 + 4), (_InterlockedOr((volatile signed __int32 *)v5 + 8, 0) & 2) == 0) )
  {
    if ( *(_BYTE *)(a1 + 209) )
    {
      if ( *(_DWORD *)(a1 + 192) != 1
        || (_m_prefetchw(v5 + 4), (_InterlockedAnd((volatile signed __int32 *)v5 + 8, 0xFFFFFFFD) & 2) != 0) )
      {
        LOBYTE(a3) = 1;
        PopPepDeviceDState(v5[7], *(_DWORD *)(a1 + 192), a3, *(unsigned int *)(a1 + 280));
        PopDiagTraceFxDevicePowerState(v5[6], *(_DWORD *)(a1 + 192));
      }
    }
    PopFxNotifyPostDIrpCompletion((__int64)v5, *(_DWORD *)(a1 + 192));
    goto LABEL_4;
  }
  return PopFxQueueWorkItem((__int64)&PopFxSystemWorkPool, (struct _LIST_ENTRY *)(a1 + 248));
}
