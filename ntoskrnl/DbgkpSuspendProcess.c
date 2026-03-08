/*
 * XREFs of DbgkpSuspendProcess @ 0x1409365B4
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x1409370E0 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1409371D8 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x1407DD068 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0;
}
