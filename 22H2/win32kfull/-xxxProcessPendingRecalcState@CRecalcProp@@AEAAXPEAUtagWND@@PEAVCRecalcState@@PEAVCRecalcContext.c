/*
 * XREFs of ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00C1F1C
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00C2890 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C00C0E4C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00C0FA8 (-HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C00C1260 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00C1394 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00C259C (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C0226160 (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0226760 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0226B68 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0226E7C (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
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
  __int64 v13; // r8
  bool IsWindowEligibleForRecalc; // r13
  __int64 v15; // rdx
  int v16; // edx
  CRecalcState *v17; // rcx
  __int64 v18; // r9
  int v19; // r8d
  const char *v20; // rax

  v8 = 1;
  if ( *((_DWORD *)this + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2534LL);
  v9 = *((_QWORD *)this + 4);
  *(_QWORD *)(v9 + 8) = *((_QWORD *)this + 5);
  v10 = (volatile signed __int32 *)qword_1C035E338;
  *((_QWORD *)this + 5) = v9;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 2;
  _InterlockedAdd(v10, 1u);
  v11 = qword_1C035E338;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
      7u,
      0x4Cu,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      **((_QWORD **)this + 2),
      *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4LL),
      *((_DWORD *)qword_1C035E338 + 1));
  *((_DWORD *)a4 + 8) = *((_DWORD *)v11 + 1);
  *((_DWORD *)a4 + 9) = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4LL);
  IsWindowEligibleForRecalc = CRecalcProp::IsWindowEligibleForRecalc(a2);
  if ( !IsWindowEligibleForRecalc || CRecalcState::HasWindowMovedUnexpectedly((CRecalcState *)v9, a2) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v8 = 0;
    }
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = "moved unexpectedly";
      if ( !IsWindowEligibleForRecalc )
        v20 = "no longer eligible";
      WPP_RECORDER_AND_TRACE_SF_qs(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v13,
        (__int64)gFullLog,
        3u,
        7u,
        0x4Du,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a2,
        v20);
    }
    *((_DWORD *)a4 + 1) = 2;
  }
  else if ( (unsigned int)IsNonImmersiveBand(a2, v15, v13) )
  {
    if ( a3 )
    {
      if ( *((_BYTE *)a3 + 61) == (_BYTE)v18 )
        CRecalcState::xxxRestore(a3, a2, a4);
      else
        CRecalcState::xxxFullscreenRestore(a3, a2, *(const struct CMonitorTopology **)(v9 + 16), a4);
      v18 = 0LL;
    }
    if ( *((_DWORD *)a4 + 1) != 5 )
    {
      if ( *(_QWORD *)(v9 + 72) == v18 )
      {
        *((_DWORD *)a4 + 1) = 2;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v16) = v18;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v18 )
        {
          v8 = v18;
        }
        if ( (_BYTE)v16 || v8 )
        {
          v19 = 78;
          LOBYTE(v19) = v8;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v19,
            v18,
            5,
            7,
            78,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            *(_QWORD *)a2);
        }
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
    CRecalcState::xxxImmersiveZBandDpiChange(v17, a2);
    *((_DWORD *)a4 + 1) = 6;
  }
  CRecalcProp::SetStateAfterProcessing(this, v11, v13);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
    Win32FreePool(v11);
}
