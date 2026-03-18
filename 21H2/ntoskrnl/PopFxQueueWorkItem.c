/*
 * XREFs of PopFxQueueWorkItem @ 0x1403B19D4
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A4CC0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1403B1020 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxQueueWorkOrder @ 0x1403B1998 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     ExTryQueueWorkItem @ 0x1402EEE50 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall PopFxQueueWorkItem(__int64 a1, struct _LIST_ENTRY *a2)
{
  __int64 result; // rax
  _DWORD *v4; // r9

  result = ExTryQueueWorkItem((__int64)a2, 0x30u);
  if ( !(_BYTE)result )
  {
    ExInterlockedInsertTailList(&stru_140C23DB0, a2, &Lock);
    return KeReleaseSemaphoreEx(dword_140C23DC0, 0LL, 1LL, v4, 0);
  }
  return result;
}
