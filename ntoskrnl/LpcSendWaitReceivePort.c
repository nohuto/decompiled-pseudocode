/*
 * XREFs of LpcSendWaitReceivePort @ 0x140796F40
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x1409371D8 (DbgkpSendApiMessageLpc.c)
 *     IopSendMessageToTrackService @ 0x140942874 (IopSendMessageToTrackService.c)
 *     ExpRaiseHardError @ 0x1409FE27C (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  int v9; // [rsp+40h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  LOBYTE(v9) = 0;
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpProcessSynchronousRequest(a1, a2 | 2u, a3, 0, a4, a5, 0LL, a6, v9);
  if ( v7 == -1073740029 )
  {
    v7 = -1073741769;
  }
  else if ( v7 == -1073740031 )
  {
    v7 = -1073741229;
  }
  KeLeaveCriticalRegion();
  return v7;
}
