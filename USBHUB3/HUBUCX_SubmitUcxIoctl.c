__int64 __fastcall HUBUCX_SubmitUcxIoctl(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v15; // [rsp+28h] [rbp-60h]
  _DWORD v16[3]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+6Ch] [rbp-1Ch]
  int v18; // [rsp+74h] [rbp-14h]

  v17 = 0LL;
  v2 = *a1;
  v4 = a1[52];
  v18 = 0;
  v16[1] = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v16[2] = 0;
  v16[0] = 24;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         v16);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    v15 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v15);
  }
  v9 = a1[54];
  v10 = a1[52];
  *((_DWORD *)a1 + 110) = a2;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v10,
          a2,
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    *((_DWORD *)a1 + 390) = v11;
    *((_DWORD *)a1 + 391) = HUBPDO_GetUSBDErrorFromNTStatus(v11);
LABEL_8:
    HUBSM_AddEvent((__int64)(a1 + 63), 4020);
    return (unsigned int)v12;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int (__fastcall *)(__int64, __int64, __int64, __int64), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[52],
    HUBUCX_UCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          a1[52],
          v6,
          0LL) )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
            WdfDriverGlobals,
            a1[52]);
    *((_DWORD *)a1 + 390) = v13;
    v12 = v13;
    *((_DWORD *)a1 + 391) = HUBPDO_GetUSBDErrorFromNTStatus(v13);
    if ( v12 < 0 )
      goto LABEL_8;
  }
  return (unsigned int)v12;
}
