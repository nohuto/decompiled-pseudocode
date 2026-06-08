/*
 * XREFs of RegisterWmi @ 0x1C00243C8
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0020780 (EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // eax
  __int64 i; // rdi
  __int128 *v6; // rax
  __int128 v7; // xmm0
  int v8; // ebx
  unsigned int j; // edi
  __int128 v11; // xmm0
  __int64 v12; // rsi
  __int64 v13; // [rsp+28h] [rbp-A1h]
  _QWORD v14[2]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v16[40]; // [rsp+80h] [rbp-49h] BYREF
  void *v17; // [rsp+A8h] [rbp-21h]
  _QWORD v18[5]; // [rsp+B0h] [rbp-19h]
  __int128 v19; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+E8h] [rbp+1Fh]
  wchar_t v21; // [rsp+F0h] [rbp+27h]

  memset(v15, 0, sizeof(v15));
  v21 = aProcessorwmi[12];
  v14[1] = &v19;
  v17 = &ProcessorPerfStateEvent_GUID;
  v18[0] = a1 + 162;
  v18[1] = &ProcessorCStateEvent_GUID;
  v18[2] = a1 + 166;
  v18[3] = &ProcessorThrottleStateEvent_GUID;
  v18[4] = a1 + 170;
  memset(v16, 0, sizeof(v16));
  v14[0] = 1703960LL;
  v20 = *(_QWORD *)L"RWMI";
  v19 = *(_OWORD *)L"PROCESSORWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[168] = 0;
  v3 = v2;
  a1[164] = 4;
  a1[172] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v14);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xAu,
      (__int64)&WPP_50dc077cd9ae33833cdb55bc8a84a1fd_Traceguids,
      v4);
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    *(_DWORD *)&v16[20] = 0;
    v6 = (__int128 *)*(&off_1C000F000 + 3 * i);
    *(_QWORD *)&v16[28] = 0LL;
    *(_DWORD *)&v16[36] = 0;
    *(_DWORD *)v16 = 40;
    v7 = *v6;
    *(_DWORD *)&v16[24] = *((_DWORD *)&off_1C000F000 + 6 * i + 4);
    *(_OWORD *)&v16[4] = v7;
    memset(v15, 0, sizeof(v15));
    v15[2] = v16;
    LODWORD(v15[0]) = 64;
    v15[4] = *(&off_1C000F000 + 3 * i + 1);
    BYTE1(v15[3]) = 1;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v15,
           0LL,
           0LL);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0xBu,
          (__int64)&WPP_50dc077cd9ae33833cdb55bc8a84a1fd_Traceguids,
          v13);
      }
      return (unsigned int)v8;
    }
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= 3 )
      return 0LL;
    memset(v16, 0, sizeof(v16));
    *(_DWORD *)v16 = 40;
    v11 = *(_OWORD *)v18[2 * j - 1];
    *(_DWORD *)&v16[20] = 2;
    *(_OWORD *)&v16[4] = v11;
    memset(v15, 0, sizeof(v15));
    v15[2] = v16;
    LODWORD(v15[0]) = 64;
    v12 = v18[2 * j];
    BYTE1(v15[3]) = 1;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v15,
           0LL,
           v12);
    if ( v8 < 0 )
      break;
    *(_BYTE *)(v12 + 12) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v8;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xCu,
      (__int64)&WPP_50dc077cd9ae33833cdb55bc8a84a1fd_Traceguids,
      v13);
  }
  return (unsigned int)v8;
}
