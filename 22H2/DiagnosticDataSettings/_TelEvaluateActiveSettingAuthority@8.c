/*
 * XREFs of _TelEvaluateActiveSettingAuthority@8 @ 0x10002F70
 * Callers:
 *     _TelGetAllAllowedTelemetryTypes@4 @ 0x10002360 (_TelGetAllAllowedTelemetryTypes@4.c)
 *     _TelSetLocalTelemetrySetting@12 @ 0x100024D0 (_TelSetLocalTelemetrySetting@12.c)
 * Callees:
 *     _TelIsRestrictivePolicySet@4 @ 0x10002850 (_TelIsRestrictivePolicySet@4.c)
 *     _TelpReadLocalSetting@8 @ 0x100029D4 (_TelpReadLocalSetting@8.c)
 *     TelpEvaluateWithoutLicenseCheck @ 0x10002EA6 (TelpEvaluateWithoutLicenseCheck.c)
 */

signed int __stdcall TelEvaluateActiveSettingAuthority(signed int *a1, _DWORD *a2)
{
  signed int v2; // edi
  signed int v3; // eax
  int v5; // [esp+Ch] [ebp-10h] BYREF
  signed int v6; // [esp+10h] [ebp-Ch] BYREF
  signed int v7; // [esp+14h] [ebp-8h] BYREF
  char v8; // [esp+1Bh] [ebp-1h] BYREF

  v2 = TelpEvaluateWithoutLicenseCheck((unsigned int *)&v7, a2);
  if ( v2 < 0 )
  {
    *a1 = 0;
  }
  else
  {
    *a1 = v7;
    if ( *a2 <= 1u && !TelIsRestrictivePolicySet((int)L"ConfigureTelemetryOptInSettingsUx") )
    {
      v6 = 3;
      v8 = 1;
      v2 = TelpReadLocalSetting(&v8, &v6);
      if ( v2 < 0 )
        return v2;
      if ( v8 )
      {
        v3 = v6;
        if ( v6 >= v7 )
          v3 = v7;
        *a1 = v3;
      }
    }
  }
  if ( v2 >= 0 && !*a1 )
  {
    v6 = 0;
    v5 = 4;
    NtQueryLicenseValue(&unk_10005018, 0, &v6, 4, &v5);
    if ( v6 != 1 )
      *a1 = 1;
  }
  return v2;
}
