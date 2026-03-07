__int64 __fastcall PopBatteryAlarmPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // ebx
  unsigned int updated; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = (unsigned int)Context;
  PopAcquirePolicyLock((_DWORD)SettingGuid);
  updated = PopBatteryUpdateAlarms(0LL, v4);
  PopReleasePolicyLock(v7, v6, v8);
  return updated;
}
