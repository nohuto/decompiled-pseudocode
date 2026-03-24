/*
 * XREFs of LpcSendWaitReceivePort @ 0x140692F90
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140887290 (DbgkpSendApiMessageLpc.c)
 *     IopSendMessageToTrackService @ 0x140892110 (IopSendMessageToTrackService.c)
 *     ExpRaiseHardError @ 0x140956478 (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E6EE0 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        LARGE_INTEGER *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpProcessSynchronousRequest(a1, a2 | 2u, a3, 0LL, a4, a5, 0LL, a6, 0);
  if ( v7 == -1073740029 )
    v7 = -1073741769;
  if ( v7 == -1073740031 )
    v7 = -1073741229;
  KeLeaveCriticalRegion();
  return v7;
}
