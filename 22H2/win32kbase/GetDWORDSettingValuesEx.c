/*
 * XREFs of GetDWORDSettingValuesEx @ 0x1C0095EE0
 * Callers:
 *     TryUpdatePTPConfigFromRegistry @ 0x1C0095A38 (TryUpdatePTPConfigFromRegistry.c)
 *     GetDWORDSettingValues @ 0x1C0095EC0 (GetDWORDSettingValues.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C0095F84 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1C0095FF0 (ReadPointerDeviceCfgDWORDSetting.c)
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
