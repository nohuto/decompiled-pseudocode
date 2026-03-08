/*
 * XREFs of PdcPoVerifyPowerState @ 0x140828F60
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifySystemPowerState @ 0x14082A73C (PopVerifySystemPowerState.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  PopAcquirePolicyLock(a1);
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock(v5, v4, v6);
}
