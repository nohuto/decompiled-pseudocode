__int64 PpmInfoRegisterCallbacks()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  GUID SettingGuid; // [rsp+30h] [rbp-38h] BYREF
  GUID i; // [rsp+40h] [rbp-28h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  v1 = 0;
  SettingGuid = GUID_PROC_CAP_BASE;
  for ( i = GUID_PROC_FLOOR_BASE; v1 < (unsigned int)KeNumberProcessors_0; ++v1 )
  {
    SettingGuid.Data4[7] = v1;
    i.Data4[7] = v1;
    PoRegisterPowerSettingCallback(
      0LL,
      &SettingGuid,
      (PPOWER_SETTING_CALLBACK)PpmPerfProcCapFloorSettingCallback,
      0LL,
      0LL);
    PoRegisterPowerSettingCallback(0LL, &i, (PPOWER_SETTING_CALLBACK)PpmPerfProcCapFloorSettingCallback, 0LL, 0LL);
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
