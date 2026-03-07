__int64 HUBPSM30_CheckingIfDebounceIsNeeded()
{
  __int64 v0; // rax
  bool v1; // zf
  bool v2; // sf
  __int64 result; // rax

  v0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  if ( (*(_DWORD *)(v0 + 4) & 0x10000) != 0 )
    return 3005LL;
  v1 = *(_DWORD *)(v0 + 88) == 0;
  v2 = *(int *)(v0 + 88) < 0;
  result = 3089LL;
  if ( v2 || v1 )
    return 3005LL;
  return result;
}
