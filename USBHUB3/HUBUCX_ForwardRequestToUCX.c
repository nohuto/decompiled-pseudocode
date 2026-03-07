__int64 __fastcall HUBUCX_ForwardRequestToUCX(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v5; // eax

  v2 = a1[57];
  v3 = *(_QWORD *)(*a1 + 32LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2008))(WdfDriverGlobals, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v2,
    HUBUCX_ClientRequestCompleteFromUCX,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v2,
             v3,
             0LL);
  if ( !(_BYTE)result )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v2, v5);
    return HUBSM_AddEvent((__int64)(a1 + 63), 4016);
  }
  return result;
}
