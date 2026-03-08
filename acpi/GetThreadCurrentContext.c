/*
 * XREFs of GetThreadCurrentContext @ 0x1C00537E0
 * Callers:
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 *     SyncEvalObject @ 0x1C0054E8C (SyncEvalObject.c)
 *     SyncLoadDDB @ 0x1C00AB82C (SyncLoadDDB.c)
 * Callees:
 *     <none>
 */

__int64 GetThreadCurrentContext()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 *i; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = RunningContextListHead - 392;
  for ( i = (__int64 *)RunningContextListHead; &RunningContextListHead != i; v2 = (__int64)(i - 49) )
  {
    if ( *(struct _KTHREAD **)(v2 + 408) == CurrentThread )
      return v2;
    i = *(__int64 **)(v2 + 392);
  }
  return v1;
}
