/*
 * XREFs of PopIntSteerSetMode @ 0x14038D810
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 */

__int64 __fastcall PopIntSteerSetMode(__int64 a1, int *a2, int a3)
{
  int v3; // eax

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
  PpmCheckReInit();
  PpmCheckCustomRun(4u);
  return 0LL;
}
