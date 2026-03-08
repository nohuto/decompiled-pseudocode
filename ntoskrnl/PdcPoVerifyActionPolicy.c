/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x140994BD0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x14082A608 (PopVerifyPowerActionPolicy.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquirePolicyLock((_DWORD)a1);
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock(v3, v2, v4);
}
