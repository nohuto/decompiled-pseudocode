__int64 __fastcall HUBPARENT_ResetInterruptPipe(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD v7[9]; // [rsp+30h] [rbp-58h] BYREF

  v1 = a1 + 824;
  *(_OWORD *)(a1 + 824) = 0LL;
  *(_OWORD *)(a1 + 840) = 0LL;
  *(_QWORD *)(a1 + 856) = 0LL;
  *(_QWORD *)(a1 + 832) = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 824) = 1966120;
  *(_QWORD *)(a1 + 848) = *(_QWORD *)(a1 + 1104);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 800);
  v5 = v3;
  memset(v7, 0, sizeof(v7));
  LOBYTE(v7[0]) = 15;
  LODWORD(v7[3]) = 2228227;
  v7[1] = v1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(WdfDriverGlobals, v4, v7);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v4,
    HUBPARENT_ResetInterruptPipeComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v4,
             v5,
             0LL);
  if ( !(_BYTE)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x11u, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v4);
    if ( (int)result < 0 )
      return HUBSM_AddEvent(a1 + 1264, 2012LL);
  }
  return result;
}
