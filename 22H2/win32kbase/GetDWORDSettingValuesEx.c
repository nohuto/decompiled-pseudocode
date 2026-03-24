/*
 * XREFs of GetDWORDSettingValuesEx @ 0x1C000C4A0
 * Callers:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C000C3FC (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValues @ 0x1C000C480 (GetDWORDSettingValues.c)
 *     TryUpdatePTPConfigFromRegistry @ 0x1C000CC04 (TryUpdatePTPConfigFromRegistry.c)
 *     ReadPointerDeviceSettings @ 0x1C000D080 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C000C540 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1C000C600 (ReadPointerDeviceCfgDWORDSetting.c)
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
