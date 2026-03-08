/*
 * XREFs of PdcPoPpmResetProfile @ 0x1409949D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x140825808 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x14099A1A4 (PpmDisableProfile.c)
 */

void __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmEnableProfile(a1);
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      PpmDisableProfile();
    }
  }
}
