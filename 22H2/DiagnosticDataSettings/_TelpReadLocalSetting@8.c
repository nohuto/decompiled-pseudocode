/*
 * XREFs of _TelpReadLocalSetting@8 @ 0x100029D4
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x10002EA6 (TelpEvaluateWithoutLicenseCheck.c)
 *     _TelEvaluateActiveSettingAuthority@8 @ 0x10002F70 (_TelEvaluateActiveSettingAuthority@8.c)
 * Callees:
 *     TelpReadRegistryDword @ 0x10002211 (TelpReadRegistryDword.c)
 *     _TelGetLocalAllowTelemetryRegPath@0 @ 0x100023B0 (_TelGetLocalAllowTelemetryRegPath@0.c)
 */

LSTATUS __fastcall TelpReadLocalSetting(_BYTE *a1, void *a2)
{
  const WCHAR *LocalAllowTelemetryRegPath; // eax
  LSTATUS result; // eax

  LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
  result = TelpReadRegistryDword(a2, HKEY_LOCAL_MACHINE, LocalAllowTelemetryRegPath, L"AllowTelemetry");
  if ( result == -2147024894 )
  {
    *a1 = 0;
    return 0;
  }
  else
  {
    *a1 = 1;
  }
  return result;
}
