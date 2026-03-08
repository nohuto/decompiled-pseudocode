/*
 * XREFs of GetDWORDSettingValuesEx @ 0x1C009D450
 * Callers:
 *     TryUpdatePTPConfigFromRegistry @ 0x1C009C6C8 (TryUpdatePTPConfigFromRegistry.c)
 *     ReadPointerDeviceSettings @ 0x1C009CC40 (ReadPointerDeviceSettings.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C009D22C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValues @ 0x1C009D430 (GetDWORDSettingValues.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C009D4F4 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1C009D610 (ReadPointerDeviceCfgDWORDSetting.c)
 */

__int64 __fastcall GetDWORDSettingValuesEx(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  void *PointerDeviceConfigurationKey; // r14
  unsigned int v8; // edi
  _DWORD *v10; // rbx

  v5 = a3;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(a1, 131097LL);
  if ( PointerDeviceConfigurationKey )
  {
    v8 = 1;
    if ( (_DWORD)v5 )
    {
      v10 = (_DWORD *)(a2 + 12);
      do
      {
        if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
        {
          if ( a4 )
            *v10 = *(v10 - 1);
          else
            *v10 = -1;
        }
        a2 += 16LL;
        v10 += 4;
        --v5;
      }
      while ( v5 );
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    return 0;
  }
  return v8;
}
