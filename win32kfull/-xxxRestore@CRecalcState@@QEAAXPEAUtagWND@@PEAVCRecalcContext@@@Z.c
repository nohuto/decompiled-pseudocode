/*
 * XREFs of ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0229B90
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00FBF50 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002574C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C00FD258 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C00FD290 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023FD9C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 */

void __fastcall CRecalcState::xxxRestore(CRecalcState *this, struct tagWND *a2, struct CRecalcContext *a3)
{
  char v6; // si
  char v7; // dl
  int WindowState; // eax
  char v9; // dl
  const char *StateString; // rax
  __int64 v11; // r10
  char v12; // dl
  __int64 v13; // r11
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  __int128 v18; // [rsp+60h] [rbp-38h] BYREF

  if ( *((_BYTE *)this + 61) || (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x40) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 967);
  if ( *((_QWORD *)a2 + 2) != gptiCurrent )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 968);
  if ( !IsNonImmersiveBand((__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 969);
  if ( !*((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 970);
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x17u,
      0x20u,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL));
  WindowState = AdvancedWindowPos::GetWindowState(a2);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v9 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( v9 || v6 )
  {
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    WPP_RECORDER_AND_TRACE_SF_s(*(_QWORD *)(v11 + 24), v12, v6, (__int64)gFullLog, 5u, 0x17u, 0x21u, v13, StateString);
  }
  v14 = *((unsigned int *)this + 6);
  v15 = *(_OWORD *)((char *)this + 28);
  v16 = *((_QWORD *)this + 9);
  v17 = *(_OWORD *)((char *)this + 44);
  v18 = v15;
  if ( (unsigned __int8)AdvancedWindowPos::xxxRestoreToPosAndState(a2, v16, v14, &v18, &v17, 331, (char *)a3 + 8) )
  {
    *((_DWORD *)a3 + 1) = 5;
    *((_DWORD *)a3 + 9) = *(_DWORD *)(*((_QWORD *)this + 2) + 4LL);
  }
}
