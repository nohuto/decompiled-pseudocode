/*
 * XREFs of _TelGetLocalAllowTelemetryRegPath@0 @ 0x100023B0
 * Callers:
 *     _TelSetLocalTelemetrySetting@12 @ 0x100024D0 (_TelSetLocalTelemetrySetting@12.c)
 *     _TelpReadLocalSetting@8 @ 0x100029D4 (_TelpReadLocalSetting@8.c)
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

const wchar_t *__stdcall TelGetLocalAllowTelemetryRegPath()
{
  HMODULE Library; // eax
  FARPROC RtlIsStateSeparationEnabled; // eax
  bool v2; // zf
  const wchar_t *result; // eax

  Library = LoadLibraryExW(L"ntdll.dll", 0, 0x800u);
  if ( !Library )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  RtlIsStateSeparationEnabled = GetProcAddress(Library, "RtlIsStateSeparationEnabled");
  if ( !RtlIsStateSeparationEnabled )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  v2 = ((unsigned __int8 (__thiscall *)(FARPROC))RtlIsStateSeparationEnabled)(RtlIsStateSeparationEnabled) == 0;
  result = L"OSDATA\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  if ( v2 )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  return result;
}
