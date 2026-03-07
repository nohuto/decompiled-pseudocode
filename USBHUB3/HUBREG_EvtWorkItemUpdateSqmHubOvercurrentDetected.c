__int64 __fastcall HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C006A198);
  HUBREG_WriteValueToHubHardwareKey(v3, (__int64)L"&(", (*(_DWORD *)(v3 + 40) >> 29) & 1);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
