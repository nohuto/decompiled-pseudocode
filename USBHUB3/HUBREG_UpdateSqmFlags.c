/*
 * XREFs of HUBREG_UpdateSqmFlags @ 0x1C0088158
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C001CA80 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

int __fastcall HUBREG_UpdateSqmFlags(__int64 a1)
{
  __int64 v2; // rax
  int result; // eax
  unsigned __int16 v4; // r9
  int v5; // edi
  __int64 v6; // rax
  int v7; // r9d
  __int64 v8; // [rsp+28h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF

  v9 = 0;
  v11 = 0LL;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v2,
             1LL,
             131103LL,
             0LL,
             &v11);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 119;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
             WdfDriverGlobals,
             v11,
             L"\b\n",
             131103LL,
             0,
             0LL,
             0LL,
             &v10);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 120;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, int *))(WdfFunctions_01015 + 1920))(
             WdfDriverGlobals,
             v10,
             L"\"$",
             &v9);
  v5 = result;
  if ( result >= 0 )
  {
    v7 = v9;
  }
  else
  {
    if ( result != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               WdfDriverGlobals->Driver,
               off_1C006A1E8);
        LODWORD(v8) = v5;
        result = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v6 + 64),
                   2u,
                   2u,
                   0x79u,
                   (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
                   v8);
      }
      goto LABEL_42;
    }
    v7 = 0;
  }
  v9 = *(_DWORD *)(a1 + 1640) | 8 | v7;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *))(WdfFunctions_01015 + 1968))(
             WdfDriverGlobals,
             v10,
             L"\"$");
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 122;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD))(WdfFunctions_01015 + 1968))(
             WdfDriverGlobals,
             v10,
             L"(*",
             *(unsigned int *)(*(_QWORD *)(a1 + 8) + 216LL));
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 123;
    goto LABEL_41;
  }
  result = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 2592));
  if ( !result )
    goto LABEL_42;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
             WdfDriverGlobals,
             v10,
             L"24",
             4LL,
             4,
             a1 + 2608);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 124;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
             WdfDriverGlobals,
             v10,
             L"24",
             4LL,
             4,
             a1 + 2612);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 125;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
             WdfDriverGlobals,
             v10,
             L"24",
             4LL,
             4,
             a1 + 2616);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 126;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
             WdfDriverGlobals,
             v10,
             L"24",
             4LL,
             4,
             a1 + 2620);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 127;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
             WdfDriverGlobals,
             v10,
             L"24",
             4LL,
             4,
             a1 + 2624);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 128;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
             WdfDriverGlobals,
             v10,
             L"24",
             4LL,
             4,
             a1 + 2628);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v4 = 129;
    goto LABEL_41;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
             WdfDriverGlobals,
             v10,
             L"24",
             4LL,
             4,
             a1 + 2632);
  if ( result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 130;
LABEL_41:
    LODWORD(v8) = result;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               v4,
               (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
               v8);
  }
LABEL_42:
  if ( v10 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v11 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
