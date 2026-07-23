/*
 * XREFs of PopIntSteerSetMode @ 0x1403C1650
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037CC28 (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 */

__int64 __fastcall PopIntSteerSetMode(__int64 a1, int *a2, int a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( a3 != 4 )
    return 3221225485LL;
  if ( *a2 == 4 )
  {
    v3 = 1;
  }
  else
  {
    PpmIntSteerMode = *a2;
    v3 = 0;
  }
  PpmIntSteerDisabled = v3;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckReInit(v5, v4);
  PpmCheckCustomRun(4);
  return 0LL;
}
