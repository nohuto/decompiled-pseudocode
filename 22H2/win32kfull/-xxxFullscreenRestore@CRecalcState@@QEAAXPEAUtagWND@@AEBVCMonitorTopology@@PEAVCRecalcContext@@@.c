/*
 * XREFs of ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0226760
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00C1F1C (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00C115C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00C1800 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023D0DC (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 */

void __fastcall CRecalcState::xxxFullscreenRestore(
        CRecalcState *this,
        struct tagWND *a2,
        const struct CMonitorTopology *a3,
        struct CRecalcContext *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  bool v11; // bl
  int v12; // edx
  int v13; // r8d
  struct tagMONITOR *MonitorFromId; // r12
  char v15; // bl
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  struct CRecalcContext *v19; // r13
  __int64 Prop; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // r12d
  int v25; // ecx
  __int128 v26; // xmm1
  __int64 v27; // rdx
  __int128 v28; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v29[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( !*((_BYTE *)this + 61) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 858);
  if ( *((_QWORD *)a2 + 2) != gptiCurrent )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 859);
  if ( !IsNonImmersiveBand((__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 860);
  if ( !*((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 861);
  v10 = *((_QWORD *)a2 + 5);
  if ( (*(_BYTE *)(v10 + 20) & 0x40) != 0 )
  {
    if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
    {
      v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = v11;
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          v9,
          2,
          7,
          27,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
      }
      return;
    }
    MonitorFromId = CMonitorTopology::GetMonitorFromId(
                      (const struct CMonitorTopology::MonitorId *)(*((_QWORD *)this + 9) + 44LL),
                      v7,
                      v8,
                      v9);
    v15 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        (_DWORD)WPP_GLOBAL_Control,
        4,
        7,
        28,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
    AdvancedWindowPos::xxxMigrateWindow(a2, (__int64)MonitorFromId, (__int64)a3, 2, (int *)a4 + 2);
    v19 = a4;
  }
  else
  {
    v15 = 1;
    Prop = GetProp((__int64)a2, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, v9);
    v24 = 0;
    if ( Prop && (*(_DWORD *)(Prop + 48) & 2) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v21) = 0;
      }
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          v23,
          4,
          7,
          29,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
      }
      v24 = 1;
      v25 = 343;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v21) = 0;
      }
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          v23,
          4,
          7,
          30,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
      }
      v25 = 347;
    }
    v19 = a4;
    v26 = *(_OWORD *)((char *)this + 28);
    v27 = *((_QWORD *)this + 9);
    v28 = *(_OWORD *)((char *)this + 44);
    v29[0] = v26;
    AdvancedWindowPos::xxxRestoreToPosAndState(a2, v27, v24, v29, &v28, v25, (char *)a4 + 8);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x40) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v15 = 0;
    }
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = v15;
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        v18,
        2,
        7,
        31,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
  }
  *((_DWORD *)v19 + 1) = 5;
  *((_DWORD *)v19 + 9) = *(_DWORD *)(*((_QWORD *)this + 2) + 4LL);
}
