__int64 __fastcall PdcPoLowPower(__int64 a1, __int64 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned __int8)a1;
  PopAcquirePolicyLock(a1, a2);
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH, 4LL, &v3);
  PopReleasePolicyLock();
  return 0LL;
}
