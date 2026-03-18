/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0196C38
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C0148360 (NtUserInjectMouseInput.c)
 * Callees:
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00055C0 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C019376C (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C0193824 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C0196F20 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0197794 (RIMIDEValidateMouseInputStruct.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  char *v7; // rsi
  __int16 *v8; // r14
  __int64 v9; // xmm1_8
  unsigned int v10; // edi
  int v11; // ebx
  __int16 v12; // dx
  __int16 v13; // cx
  int v14; // eax
  __int16 v15; // ax
  int v16; // eax
  int v17; // ebx
  char v18; // dl
  PDEVICE_OBJECT *v20; // rdx
  void *v21; // r8
  __int64 v22; // [rsp+50h] [rbp-1D8h]
  _OWORD v24[24]; // [rsp+60h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v24, 0, sizeof(v24));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1531);
  InputTraceLogging::RIM::InjectInput((a1 + 72) & -(__int64)(a1 != 0));
  v6 = 0;
  if ( a3 )
  {
    v7 = (char *)v24 + 2;
    v8 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v6 )
      {
        v9 = *((_QWORD *)v24 + 3 * v6 - 1);
        *(_OWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x354) = *(_OWORD *)((char *)&v24[-1] + 24 * v6 - 8);
        *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x364) = v9;
      }
      v22 = v4 + 32LL * v6;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v22) )
        break;
      v10 = *((_DWORD *)v8 + 1);
      v11 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x35C);
      *((_WORD *)v7 - 1) = -2;
      v12 = (v10 >> 15) & 1 | 8;
      if ( (v10 & 0x2000) == 0 )
        v12 = (v10 >> 15) & 1;
      v13 = v12 | 2;
      if ( (v10 & 0x4000) == 0 )
        v13 = v12;
      *(_WORD *)v7 = v13;
      v14 = RIMIDEBuildRawButtonsFromMouseInputStruct(v11, v22);
      *(_DWORD *)(v7 + 6) = v14;
      *((_WORD *)v7 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v11, v14, v22);
      v15 = 0;
      if ( (v10 & 0x1800) != 0 )
        v15 = *v8;
      v4 = a2;
      ++v6;
      *((_WORD *)v7 + 2) = v15;
      *(_DWORD *)(v7 + 10) = *((_DWORD *)v8 - 2);
      *(_DWORD *)(v7 + 14) = *((_DWORD *)v8 - 1);
      v16 = *((_DWORD *)v8 + 2);
      v8 += 16;
      *(_DWORD *)(v7 + 18) = v16;
      v7 += 24;
      if ( v6 >= a3 )
        goto LABEL_15;
    }
    v20 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v20) = 0;
    }
    if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = &WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids;
      LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v20,
        (_DWORD)v21,
        (_DWORD)gRimLog,
        2,
        1,
        34,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_15:
    v17 = RIMIDEInjectMouseInput(a1, v24, a3);
    if ( v17 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v18 = 0;
      }
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v18,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          2u,
          1u,
          0x23u,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v17);
    }
  }
  return (unsigned int)v17;
}
