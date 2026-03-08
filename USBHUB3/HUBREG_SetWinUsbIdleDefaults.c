/*
 * XREFs of HUBREG_SetWinUsbIdleDefaults @ 0x1C0088C14
 * Callers:
 *     FWUPDATE_EvtDeviceResourceRequirementsQuery @ 0x1C008C6B0 (FWUPDATE_EvtDeviceResourceRequirementsQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_SetWinUsbIdleDefaults(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // [rsp+28h] [rbp-18h]
  int v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  v9 = 0;
  v11 = 0LL;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A170);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             a1,
             1LL,
             131103LL,
             0LL,
             &v10);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
               WdfDriverGlobals,
               0LL,
               0LL,
               &v11);
    if ( (int)result >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64))(WdfFunctions_01015 + 1912))(
             WdfDriverGlobals,
             v10,
             L"&(",
             v11);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                 WdfDriverGlobals,
                 v11);
      if ( v6 == -1073741772 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const wchar_t *, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
                   WdfDriverGlobals,
                   L"LN",
                   0LL,
                   &v11);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_33;
          v4 = 149;
          goto LABEL_4;
        }
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64))(WdfFunctions_01015
                                                                                               + 1960))(
               WdfDriverGlobals,
               v10,
               L"&(",
               v11);
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                   WdfDriverGlobals,
                   v11);
        if ( v7 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_33;
          v4 = 150;
          LODWORD(v8) = v7;
          v5 = 3;
          goto LABEL_32;
        }
      }
      else if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v4 = 151;
        LODWORD(v8) = v6;
        v5 = 5;
        goto LABEL_32;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                 WdfDriverGlobals,
                 v10,
                 L"\"$",
                 4LL,
                 &v9,
                 0LL,
                 0LL);
      if ( (int)result >= 0 )
        goto LABEL_33;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                 WdfDriverGlobals,
                 v10,
                 L" \"",
                 4LL,
                 &v9,
                 0LL,
                 0LL);
      if ( (int)result >= 0 )
        goto LABEL_33;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                 WdfDriverGlobals,
                 v10,
                 L"46",
                 4LL,
                 &v9,
                 0LL,
                 0LL);
      if ( (int)result >= 0 )
        goto LABEL_33;
      v9 = 1;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, int *))(WdfFunctions_01015 + 1928))(
                 WdfDriverGlobals,
                 v10,
                 L"\"$",
                 4LL,
                 4,
                 &v9);
      if ( (int)result >= 0 )
      {
        v9 = 1;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, int *))(WdfFunctions_01015 + 1928))(
                   WdfDriverGlobals,
                   v10,
                   L" \"",
                   4LL,
                   4,
                   &v9);
        if ( (int)result >= 0 )
        {
          v9 = 1;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, int *))(WdfFunctions_01015 + 1928))(
                     WdfDriverGlobals,
                     v10,
                     L"46",
                     4LL,
                     4,
                     &v9);
          if ( (int)result >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_33;
          v4 = 154;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_33;
          v4 = 153;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v4 = 152;
      }
      v5 = 5;
      goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v4 = 148;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v4 = 147;
  }
LABEL_4:
  v5 = 3;
LABEL_31:
  LODWORD(v8) = result;
LABEL_32:
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)v2 + 2520LL),
             2u,
             v5,
             v4,
             (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
             v8);
LABEL_33:
  if ( v10 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
