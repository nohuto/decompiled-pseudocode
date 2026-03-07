__int64 __fastcall HUBPARENT_GetInfoFromParentUsingParentIoctl(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  __int64 result; // rax
  int v7; // edi
  int v8; // [rsp+28h] [rbp-41h]
  int v9; // [rsp+28h] [rbp-41h]
  __int64 v10; // [rsp+30h] [rbp-39h] BYREF
  __int128 v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h]
  __int64 v13; // [rsp+50h] [rbp-19h]
  __int128 v14; // [rsp+58h] [rbp-11h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  _QWORD v16[9]; // [rsp+70h] [rbp+7h] BYREF

  v10 = 0LL;
  DWORD1(v11) = 0;
  memset(v16, 0, sizeof(v16));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  v12 = 0LL;
  v15 = 0LL;
  v14 = v3;
  v11 = 0LL;
  LODWORD(v11) = 56;
  v13 = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v11,
         v2,
         &v10);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x16u,
        (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
        v8);
    }
LABEL_8:
    if ( v10 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return HUBSM_AddEvent(a1 + 1264, 2038LL);
  }
  v16[1] = a1 + 2448;
  LOBYTE(v16[0]) = 15;
  LODWORD(v16[3]) = 4788291;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v10,
    v16);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v10,
    HUBPARENT_GetInfoFromParentUsingParentIoctlComplete,
    0LL);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v10,
             v4,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v10);
    v7 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 0x17u,
                 (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                 v9);
    }
    if ( v7 < 0 )
      goto LABEL_8;
  }
  return result;
}
