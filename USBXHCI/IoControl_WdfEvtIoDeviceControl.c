PDEVICE_OBJECT __fastcall IoControl_WdfEvtIoDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // rax
  PDEVICE_OBJECT result; // rax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r8
  _DWORD *v23; // rdx
  signed __int32 v24; // eax
  __int32 v25; // ecx
  __int64 v26; // rax
  int v27; // edx
  char v28; // al
  int v29; // edx
  __int64 v30; // [rsp+28h] [rbp-60h]
  int v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  _DWORD *v33; // [rsp+50h] [rbp-38h] BYREF

  v33 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063130);
  v13 = v9;
  if ( a5 == 2229304 )
  {
    if ( a4 == a3 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD **))(WdfFunctions_01023 + 2152))(
              WdfDriverGlobals,
              a2,
              16LL,
              &v33);
      if ( v17 >= 0 )
      {
        v21 = (unsigned int)v33[2];
        if ( v21 == a4 )
        {
          if ( *v33 != -2147483647 )
          {
            if ( *v33 != -2147483646 )
              goto LABEL_5;
            if ( !*(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v18) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                  v18,
                  5,
                  15,
                  (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
                  34);
              }
              v22 = 3221225506LL;
              return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                                       WdfDriverGlobals,
                                       a2,
                                       v22);
            }
          }
          v33[3] = 20;
          v23 = v33;
          if ( v33[3] <= v33[2] )
          {
            if ( *v33 == -2147483647 )
            {
              v24 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v13 + 8) + 856LL), 0, 0);
              v23[4] = v24;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                  (_DWORD)v23,
                  5,
                  17,
                  (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
                  v24);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2200))(
                WdfDriverGlobals,
                a2,
                20LL);
            }
            else
            {
              v25 = v33[4];
              v26 = *(_QWORD *)(v13 + 8);
              if ( v25 == -1 )
              {
                _InterlockedExchange((volatile __int32 *)(v26 + 860), 1);
                Controller_ReportFatalErrorEx(*(_QWORD *)(v13 + 8), 2u, 4159, 0LL, 0LL, 0LL, 0LL, 0LL);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v27) = 4;
                  WPP_RECORDER_SF_(
                    *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                    v27,
                    5,
                    18,
                    (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids);
                }
              }
              else
              {
                _InterlockedExchange((volatile __int32 *)(v26 + 856), v25);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v31 = v23[4];
                  LOBYTE(v23) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                    (_DWORD)v23,
                    5,
                    19,
                    (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
                    v31);
                }
              }
            }
            v22 = 0LL;
            v33[1] = 0;
          }
          else
          {
            v33[1] = 7;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dddd(
                *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                (_DWORD)v33,
                -2147483647,
                v20,
                0,
                *v33,
                v33[3],
                v33[2]);
            v22 = 3221225507LL;
          }
          return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023
                                                                                                  + 2104))(
                                   WdfDriverGlobals,
                                   a2,
                                   v22);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dL(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL), v18, v19, v20, 0, v21, a4);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v32) = v17;
        WPP_RECORDER_SF_Pd(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL), v18, v19, v20, 0);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = a3;
      HIDWORD(v30) = HIDWORD(a4);
      WPP_RECORDER_SF_PP(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL), v10, v11, v12);
    }
  }
LABEL_5:
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1256))(WdfDriverGlobals, a1);
  LODWORD(v30) = a5;
  result = (PDEVICE_OBJECT)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64))UcxFunctions)(
                             UcxDriverGlobals,
                             v14,
                             a2,
                             a3,
                             a4,
                             v30,
                             v32);
  if ( !(_BYTE)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
        v16,
        5,
        21,
        (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
        a2,
        a5);
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2240))(WdfDriverGlobals, a2);
    if ( v28 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 2;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
          v29,
          5,
          23,
          (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
          a5);
      }
      v22 = 3221225488LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 3;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
          v29,
          5,
          22,
          (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
          v28);
      }
      v22 = 3221225485LL;
    }
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                             WdfDriverGlobals,
                             a2,
                             v22);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v16) = 5;
      return (PDEVICE_OBJECT)WPP_RECORDER_SF_D(
                               *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                               v16,
                               5,
                               20,
                               (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
                               a5);
    }
  }
  return result;
}
