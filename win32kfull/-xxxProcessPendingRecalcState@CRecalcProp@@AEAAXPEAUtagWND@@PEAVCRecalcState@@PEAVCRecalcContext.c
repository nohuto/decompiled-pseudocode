/*
 * XREFs of ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00FBF50
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C009EB2C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C00FAEF8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00FB054 (-HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB37C (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00FC7DC (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C0101F0C (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C0228E58 (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0229464 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0229878 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0229B90 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 */

void __fastcall CRecalcProp::xxxProcessPendingRecalcState(
        CRecalcProp *this,
        struct tagWND *a2,
        struct CRecalcState *a3,
        struct CRecalcContext *a4)
{
  char v8; // di
  __int64 v9; // rbp
  volatile signed __int32 *v10; // rax
  CMonitorTopology *v11; // r15
  char v12; // dl
  bool IsWindowEligibleForRecalc; // r13
  CRecalcState *v14; // rcx
  __int64 v15; // r9
  char v16; // dl
  const char *v17; // rax

  v8 = 1;
  if ( *((_DWORD *)this + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2538LL);
  v9 = *((_QWORD *)this + 4);
  *(_QWORD *)(v9 + 8) = *((_QWORD *)this + 5);
  v10 = (volatile signed __int32 *)qword_1C0361320;
  *((_QWORD *)this + 5) = v9;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 2;
  _InterlockedAdd(v10, 1u);
  v11 = qword_1C0361320;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v12 = 0;
  }
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x17u,
      0x4Cu,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      **((_QWORD **)this + 2),
      *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4LL),
      *((_DWORD *)qword_1C0361320 + 1));
  *((_DWORD *)a4 + 8) = *((_DWORD *)v11 + 1);
  *((_DWORD *)a4 + 9) = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4LL);
  IsWindowEligibleForRecalc = CRecalcProp::IsWindowEligibleForRecalc(a2);
  if ( !IsWindowEligibleForRecalc || CRecalcState::HasWindowMovedUnexpectedly((CRecalcState *)v9, a2) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = "moved unexpectedly";
      if ( !IsWindowEligibleForRecalc )
        v17 = "no longer eligible";
      WPP_RECORDER_AND_TRACE_SF_qs(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        3u,
        0x17u,
        0x4Du,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *(_QWORD *)a2,
        v17);
    }
    *((_DWORD *)a4 + 1) = 2;
  }
  else if ( IsNonImmersiveBand((__int64)a2) )
  {
    if ( a3 )
    {
      if ( *((_BYTE *)a3 + 61) == (_BYTE)v15 )
        CRecalcState::xxxRestore(a3, a2, a4);
      else
        CRecalcState::xxxFullscreenRestore(a3, a2, *(const struct CMonitorTopology **)(v9 + 16), a4);
      v15 = 0LL;
    }
    if ( *((_DWORD *)a4 + 1) != 5 )
    {
      if ( *(_QWORD *)(v9 + 72) == v15 )
      {
        *((_DWORD *)a4 + 1) = 2;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v16 = v15;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v15 )
        {
          v8 = v15;
        }
        if ( v16 || v8 )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v8,
            v15,
            5u,
            0x17u,
            0x4Eu,
            (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
            *(_QWORD *)a2);
      }
      else
      {
        CRecalcState::xxxMigrate((CRecalcState *)v9, a2, a4);
      }
    }
    if ( *((_DWORD *)a4 + 1) == 3 )
      CRecalcProp::ReattachRecalcState(this, (struct CRecalcState *)v9);
  }
  else
  {
    CRecalcState::xxxImmersiveZBandDpiChange(v14, a2);
    *((_DWORD *)a4 + 1) = 6;
  }
  CRecalcProp::SetStateAfterProcessing(this, v11);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
    Win32FreePool(v11);
}
