/*
 * XREFs of PdcPoPpmResetProfile @ 0x1408EF9A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x1407C63D4 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x1408F5CB8 (PpmDisableProfile.c)
 */

LONG __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  LONG result; // eax
  __int64 v4; // rdx

  result = PpmProfileStatus;
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmEnableProfile(a1, v4);
      return PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      return PpmDisableProfile();
    }
  }
  return result;
}
