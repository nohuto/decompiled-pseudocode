__int64 __fastcall PdcPoVerifyPowerState(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  PopAcquirePolicyLock(a1);
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock(v5, v4, v6);
}
