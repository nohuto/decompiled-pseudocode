/*
 * XREFs of _TelSetLocalTelemetrySetting@12 @ 0x100024D0
 * Callers:
 *     <none>
 * Callees:
 *     _TelGetLocalAllowTelemetryRegPath@0 @ 0x100023B0 (_TelGetLocalAllowTelemetryRegPath@0.c)
 *     _TelEvaluateActiveSettingAuthority@8 @ 0x10002F70 (_TelEvaluateActiveSettingAuthority@8.c)
 *     _McGenEventUnregister_EventUnregister@4 @ 0x10003396 (_McGenEventUnregister_EventUnregister@4.c)
 *     _McTemplateU0zzzzztzzzzdz_EventWriteTransfer@56 @ 0x1000340F (_McTemplateU0zzzzztzzzzdz_EventWriteTransfer@56.c)
 *     _McGenEventRegister_EventRegister@16 @ 0x1000373E (_McGenEventRegister_EventRegister@16.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 */

int __stdcall TelSetLocalTelemetrySetting(int a1, int a2, int a3)
{
  const WCHAR *LocalAllowTelemetryRegPath; // eax
  int v4; // esi
  int v5; // ecx
  bool v6; // cc
  int v7; // ecx
  const wchar_t *v8; // edx
  int v10; // [esp-14h] [ebp-48h]
  int v11; // [esp-10h] [ebp-44h]
  int v12; // [esp-Ch] [ebp-40h]
  int v13; // [esp+Ch] [ebp-28h] BYREF
  int active; // [esp+10h] [ebp-24h]
  int v15; // [esp+14h] [ebp-20h] BYREF
  BYTE Data[4]; // [esp+18h] [ebp-1Ch] BYREF
  HKEY phkResult; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD v18[4]; // [esp+20h] [ebp-14h]

  *(_DWORD *)Data = a1;
  phkResult = 0;
  LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
  v4 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, LocalAllowTelemetryRegPath, 0, 0, 0, 0x20106u, 0, &phkResult, 0);
  active = TelEvaluateActiveSettingAuthority(&v13, &v15);
  v18[0] = L"Disabled";
  v18[1] = L"Core";
  v18[2] = L"General";
  v18[3] = L"Diagnostic";
  v6 = v4 <= 0;
  if ( !v4 )
  {
    v4 = RegSetValueExW(phkResult, L"AllowTelemetry", 0, 4u, Data, 4u);
    v6 = v4 <= 0;
  }
  if ( !v6 )
    v4 = (unsigned __int16)v4 | 0x80070000;
  McGenEventRegister_EventRegister(v5, v5);
  if ( active < 0 )
    v8 = L"N/A";
  else
    v8 = (const wchar_t *)v18[v13];
  if ( v4 < 0 )
  {
    if ( (Microsoft_Windows_Privacy_Auditing_DiagnosticDataEnableBits & 2) != 0 )
      McTemplateU0zzzzztzzzzdz_EventWriteTransfer(
        a2,
        a3,
        v7,
        v8,
        v18[*(_DWORD *)Data],
        v15 != 2,
        v8,
        v10,
        v11,
        v12,
        v4,
        v7);
  }
  else if ( (Microsoft_Windows_Privacy_Auditing_DiagnosticDataEnableBits & 1) != 0 )
  {
    McTemplateU0zzzzztzzzzdz_EventWriteTransfer(
      a2,
      a3,
      v18[*(_DWORD *)Data],
      v8,
      v18[*(_DWORD *)Data],
      v15 != 2,
      v18[*(_DWORD *)Data],
      v10,
      v11,
      v12,
      v4,
      v18[*(_DWORD *)Data]);
  }
  McGenEventUnregister_EventUnregister();
  if ( phkResult )
    RegCloseKey(phkResult);
  return v4;
}
