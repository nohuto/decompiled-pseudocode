/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C019DE20
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 * Callees:
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00043A4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C019AED4 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C019AF90 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C019E0E8 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C019E830 (RIMIDEValidateMouseInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebp
  char *v9; // rsi
  __int16 *v10; // r14
  __int64 v11; // xmm1_8
  unsigned int v12; // edi
  int v13; // ebx
  __int16 v14; // dx
  __int16 v15; // cx
  int v16; // eax
  __int16 v17; // ax
  int v18; // eax
  int v19; // ebx
  PDEVICE_OBJECT *v20; // rdx
  void *v21; // r8
  PDEVICE_OBJECT *v23; // rdx
  void *v24; // r8
  __int64 v25; // [rsp+50h] [rbp-1D8h]
  _OWORD v27[24]; // [rsp+60h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v27, 0, sizeof(v27));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1 + 88, v6, v7);
  InputTraceLogging::RIM::InjectInput((a1 + 88) & -(__int64)(a1 != 0));
  v8 = 0;
  if ( a3 )
  {
    v9 = (char *)v27 + 2;
    v10 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v8 )
      {
        v11 = *((_QWORD *)v27 + 3 * v8 - 1);
        *(_OWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x354) = *(_OWORD *)((char *)&v27[-1] + 24 * v8 - 8);
        *(_QWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x364) = v11;
      }
      v25 = v4 + 32LL * v8;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v25) )
        break;
      v12 = *((_DWORD *)v10 + 1);
      v13 = *(_DWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x35C);
      *((_WORD *)v9 - 1) = -2;
      v14 = (v12 >> 15) & 1 | 8;
      if ( (v12 & 0x2000) == 0 )
        v14 = (v12 >> 15) & 1;
      v15 = v14 | 2;
      if ( (v12 & 0x4000) == 0 )
        v15 = v14;
      *(_WORD *)v9 = v15;
      v16 = RIMIDEBuildRawButtonsFromMouseInputStruct(v13, v25);
      *(_DWORD *)(v9 + 6) = v16;
      *((_WORD *)v9 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v13, v16, v25);
      v17 = 0;
      if ( (v12 & 0x1800) != 0 )
        v17 = *v10;
      v4 = a2;
      ++v8;
      *((_WORD *)v9 + 2) = v17;
      *(_DWORD *)(v9 + 10) = *((_DWORD *)v10 - 2);
      *(_DWORD *)(v9 + 14) = *((_DWORD *)v10 - 1);
      v18 = *((_DWORD *)v10 + 2);
      v10 += 16;
      *(_DWORD *)(v9 + 18) = v18;
      v9 += 24;
      if ( v8 >= a3 )
        goto LABEL_15;
    }
    v23 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v23) = 0;
    }
    if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = &WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids;
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v23,
        (_DWORD)v24,
        (_DWORD)gRimLog,
        2,
        1,
        34,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_15:
    v19 = RIMIDEInjectMouseInput(a1, v27, a3);
    if ( v19 < 0 )
    {
      v20 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = &WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v20,
          (_DWORD)v21,
          (_DWORD)gRimLog,
          2,
          1,
          35,
          (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
          v19);
      }
    }
  }
  return (unsigned int)v19;
}
