/*
 * XREFs of PdcPoVerifyPowerState @ 0x1407D53D0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifySystemPowerState @ 0x14078B828 (PopVerifySystemPowerState.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(int *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  PopAcquirePolicyLock((_DWORD)a1);
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock(v5, v4);
}
