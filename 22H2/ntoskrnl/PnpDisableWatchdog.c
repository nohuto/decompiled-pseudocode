/*
 * XREFs of PnpDisableWatchdog @ 0x1406F02D0
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14037D970 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDeviceEventWorker @ 0x140634FF0 (PnpDeviceEventWorker.c)
 *     PnpCallAddDevice @ 0x14073ADCC (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14074CB70 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x1408A2500 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x1403488D4 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x140348920 (ExDeleteTimer.c)
 *     PnpRecordBlackbox @ 0x1406F03A0 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408AB8E4 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableWatchdog(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  ExDeleteTimer(*(_QWORD *)(v1 + 56), 1, 1, 0LL);
  *(_QWORD *)(v1 + 56) = 0LL;
  if ( *(int *)(v1 + 96) > 0 )
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
  ExFreePoolWithTag((PVOID)v1, 0x54645750u);
  v3 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  PnpRecordBlackbox(0LL, v3);
  if ( *(_BYTE *)(a1 + 32) )
    PnpWatchdogEtwWrite(a1, 0LL);
  PnpFreeWatchdog((void *)a1);
}
