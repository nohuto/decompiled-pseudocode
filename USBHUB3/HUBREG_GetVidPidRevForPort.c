__int64 __fastcall HUBREG_GetVidPidRevForPort(__int64 a1, _WORD *a2, _WORD *a3, _WORD *a4)
{
  int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  _WORD v12[4]; // [rsp+48h] [rbp-40h] BYREF

  v11 = 0LL;
  v8 = HUBREG_OpenPortSubkey(*(_QWORD *)a1, *(_WORD *)(a1 + 200), 0x2001Fu, &v11);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _WORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v11,
           &g_VidPidRev,
           6LL,
           v12,
           0LL,
           0LL);
    if ( v8 >= 0 )
    {
      *a2 = v12[0];
      *a3 = v12[1];
      *a4 = v12[2];
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        5u,
        0xA6u,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v10);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v11);
  return (unsigned int)v8;
}
