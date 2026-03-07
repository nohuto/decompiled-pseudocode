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
  PDEVICE_OBJECT *v18; // rdx
  void *v19; // r8
  PDEVICE_OBJECT *v21; // rdx
  void *v22; // r8
  __int64 v23; // [rsp+50h] [rbp-1D8h]
  _OWORD v25[24]; // [rsp+60h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v25, 0, sizeof(v25));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1531);
  InputTraceLogging::RIM::InjectInput((a1 + 72) & -(__int64)(a1 != 0));
  v6 = 0;
  if ( a3 )
  {
    v7 = (char *)v25 + 2;
    v8 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v6 )
      {
        v9 = *((_QWORD *)v25 + 3 * v6 - 1);
        *(_OWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x354) = *(_OWORD *)((char *)&v25[-1] + 24 * v6 - 8);
        *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x364) = v9;
      }
      v23 = v4 + 32LL * v6;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v23) )
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
      v14 = RIMIDEBuildRawButtonsFromMouseInputStruct(v11, v23);
      *(_DWORD *)(v7 + 6) = v14;
      *((_WORD *)v7 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v11, v14, v23);
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
    v21 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = &WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids;
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v21,
        (_DWORD)v22,
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
    v17 = RIMIDEInjectMouseInput(a1, v25, a3);
    if ( v17 < 0 )
    {
      v18 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v18) = 0;
      }
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = &WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v18,
          (_DWORD)v19,
          (_DWORD)gRimLog,
          2,
          1,
          35,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v17);
      }
    }
  }
  return (unsigned int)v17;
}
