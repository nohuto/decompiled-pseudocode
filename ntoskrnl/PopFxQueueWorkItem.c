/*
 * XREFs of PopFxQueueWorkItem @ 0x1402B8D54
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1402B8CF4 (PopFxQueueWorkOrder.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1402B90C0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1402BB4F0 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x1402B8DC0 (ExInterlockedInsertTailList.c)
 *     ExTryQueueWorkItem @ 0x140308A80 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall PopFxQueueWorkItem(__int64 a1, struct _LIST_ENTRY *a2)
{
  __int64 result; // rax
  int v5; // r9d
  char v6; // [rsp+50h] [rbp+18h] BYREF

  result = ExTryQueueWorkItem(a2, 48LL);
  if ( !(_BYTE)result )
  {
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 16), a2, (PKSPIN_LOCK)(a1 + 8));
    return KeReleaseSemaphoreEx((int)a1 + 32, 0, 1, v5, 8, (__int64)&v6);
  }
  return result;
}
