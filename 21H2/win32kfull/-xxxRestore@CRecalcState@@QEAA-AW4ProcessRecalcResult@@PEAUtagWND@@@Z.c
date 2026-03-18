/*
 * XREFs of ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C010DEDC (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?GetStateString@CRecalcState@@CAPEBDW4State@AdvancedWindowPos@@@Z @ 0x1C02370B8 (-GetStateString@CRecalcState@@CAPEBDW4State@AdvancedWindowPos@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsd @ 0x1C023C2E4 (WPP_RECORDER_AND_TRACE_SF_qsd.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C023C454 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddddddddd @ 0x1C023C64C (WPP_RECORDER_AND_TRACE_SF_sdddddddddddd.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

__int64 __fastcall CRecalcState::xxxRestore(__int64 a1, const struct tagWND *a2)
{
  const struct tagWND *v2; // rbx
  char v4; // r14
  char v5; // dl
  __int64 v6; // r8
  __int64 v7; // r10
  char v8; // r11
  int v9; // edx
  struct tagRECT v10; // xmm0
  __int64 v11; // rax
  struct tagRECT v12; // xmm1
  unsigned int v13; // r8d
  __int64 v14; // rdi
  int WindowState; // eax
  char v16; // dl
  char v17; // r8
  const char *StateString; // rax
  __int64 v19; // r10
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r9
  int v23; // edx
  struct tagRECT v24; // xmm6
  __int128 *MonitorWorkRectForWindow; // rax
  __int64 v26; // r8
  char v27; // al
  int v28; // r8d
  char v29; // al
  int v30; // edx
  char v31; // r10
  const char *v32; // rax
  int v33; // edx
  char v34; // r8
  char v35; // al
  char v36; // r13
  char v37; // r12
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r14
  const char *v40; // rax
  char v41; // dl
  int v42; // edx
  char v43; // r8
  int v44; // r8d
  char v45; // r9
  char v46; // r10
  char v47; // r11
  char v48; // r13
  struct tagRECT v49; // xmm0
  __int64 v50; // rax
  __int64 Prop; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  _OWORD *v54; // rax
  PDEVICE_OBJECT v55; // rcx
  int v56; // ecx
  struct tagRECT *v57; // rax
  struct tagRECT v58; // xmm0
  PDEVICE_OBJECT v59; // r15
  char v60; // r12
  int v61; // eax
  const char *v62; // rax
  _DWORD *v63; // rcx
  int v64; // r8d
  int v65; // edx
  int v67; // [rsp+20h] [rbp-110h]
  int v68; // [rsp+28h] [rbp-108h]
  int v69; // [rsp+30h] [rbp-100h]
  int v70; // [rsp+38h] [rbp-F8h]
  char v71; // [rsp+98h] [rbp-98h]
  char v72; // [rsp+A0h] [rbp-90h]
  char v73; // [rsp+B0h] [rbp-80h]
  char v74; // [rsp+B1h] [rbp-7Fh]
  char v75; // [rsp+B2h] [rbp-7Eh]
  char v76; // [rsp+B3h] [rbp-7Dh]
  int v77; // [rsp+B4h] [rbp-7Ch] BYREF
  unsigned int v78; // [rsp+B8h] [rbp-78h] BYREF
  const struct tagWND *v79; // [rsp+C0h] [rbp-70h]
  __int64 v80; // [rsp+C8h] [rbp-68h]
  __int64 v81; // [rsp+D0h] [rbp-60h]
  struct tagRECT v82; // [rsp+E0h] [rbp-50h] BYREF
  _DWORD v83[4]; // [rsp+F0h] [rbp-40h] BYREF
  __int128 v84; // [rsp+100h] [rbp-30h] BYREF
  __int64 v85; // [rsp+110h] [rbp-20h]
  __m128i v86; // [rsp+120h] [rbp-10h] BYREF
  __m128i v87; // [rsp+130h] [rbp+0h] BYREF
  struct tagRECT v88; // [rsp+140h] [rbp+10h] BYREF
  __int64 v89; // [rsp+150h] [rbp+20h] BYREF
  int v90; // [rsp+158h] [rbp+28h]
  int v91; // [rsp+15Ch] [rbp+2Ch]
  struct tagRECT v92; // [rsp+160h] [rbp+30h]
  unsigned int v93; // [rsp+170h] [rbp+40h]
  __int128 v94; // [rsp+178h] [rbp+48h] BYREF

  v79 = a2;
  v2 = a2;
  v80 = a1;
  if ( *(_BYTE *)(a1 + 61) || (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x40) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    CRecalcState::GetStateString(*(_DWORD *)(a1 + 40));
    LODWORD(v6) = *(_DWORD *)(v6 + 4);
    LOBYTE(v6) = v8;
    WPP_RECORDER_AND_TRACE_SF_qsd(*(_QWORD *)(v7 + 24), v9, v6, WPP_MAIN_CB.Queue.ListEntry.Flink);
  }
  v10 = *(struct tagRECT *)(a1 + 44);
  v77 = *(_DWORD *)(a1 + 40);
  v11 = *((_QWORD *)v2 + 5);
  v12 = *(struct tagRECT *)(a1 + 16);
  v78 = 0;
  v86 = (__m128i)v10;
  v13 = *(_DWORD *)(v11 + 288);
  v88 = v12;
  v73 = 0;
  v76 = 0;
  v14 = MonitorFromRect(&v88, 0, v13);
  v81 = v14;
  v85 = 0LL;
  v84 = 0LL;
  ThreadLock(v14, (__int64 *)&v84);
  WindowState = AdvancedWindowPos::GetWindowState(v2);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v16 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v17 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v17 = 0;
  }
  if ( v16 || v17 )
  {
    StateString = CRecalcState::GetStateString(WindowState);
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(v19 + 24),
      v20,
      v21,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      23,
      17,
      v22,
      (__int64)StateString);
  }
  v23 = v77;
  v24 = v88;
  if ( v77 == 3 )
  {
    if ( v14 )
    {
      v87 = 0LL;
      MonitorWorkRectForWindow = (__int128 *)GetMonitorWorkRectForWindow((__int64)v83, v14, v2);
      v26 = *(_QWORD *)(v14 + 40);
      v94 = *MonitorWorkRectForWindow;
      LOWORD(MonitorWorkRectForWindow) = *(_WORD *)(v26 + 60);
      v82 = (struct tagRECT)v86;
      v27 = CallShell::xxxMigrateWindowHandler(
              v2,
              0,
              (__int64 *)(v26 + 44),
              (__int64 *)&v94,
              (unsigned __int16)MonitorWorkRectForWindow,
              &v82,
              v14,
              &v87,
              &v77,
              (int *)&v78);
      v23 = v77;
      if ( v27 )
      {
        v76 = 1;
        if ( v77 == 3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v29 = 0;
          }
          if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = 18;
            LOBYTE(v30) = v29;
            LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v30,
              v28,
              (unsigned int)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
              4,
              23,
              18,
              (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
            v23 = v77;
          }
          v86 = v87;
          v73 = 1;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v31 = 0;
          }
          if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v32 = "maximized";
            v33 = 19;
            if ( v77 != 1 )
              v32 = "restored";
            LOBYTE(v33) = v31;
            LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_s(
              WPP_GLOBAL_Control->AttachedDevice,
              v33,
              v28,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              25,
              19,
              (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
              (__int64)v32);
            v23 = v77;
          }
          if ( !v23 )
            v86 = (__m128i)v24;
        }
      }
    }
  }
  v87.m128i_i64[0] = (__int64)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v34 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v34 = 0;
  }
  v75 = v34;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v35 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v35 = 0;
  }
  v74 = v35;
  if ( v34 || v35 )
  {
    v36 = v86.m128i_i8[8];
    v37 = v86.m128i_i8[0];
    v38 = HIDWORD(v86.m128i_i64[1]);
    v39 = HIDWORD(v86.m128i_i64[0]);
    v40 = CRecalcState::GetStateString(*(_DWORD *)(v80 + 40));
    v72 = v41;
    LOBYTE(v42) = v75;
    v71 = v43;
    LOBYTE(v44) = v74;
    WPP_RECORDER_AND_TRACE_SF_sdddddddddddd(
      *(_QWORD *)(v87.m128i_i64[0] + 24),
      v42,
      v44,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v67,
      v68,
      v69,
      v70,
      (__int64)v40,
      v37,
      v39,
      v36,
      v38,
      v45,
      v46,
      v47,
      _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v24, 4)),
      _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v24, 8)),
      _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v24, 12)),
      v71,
      v72);
    v23 = v77;
    v14 = v81;
    v4 = 1;
  }
  v48 = 0;
  if ( v23 == 3 )
  {
    if ( !v73 && v14 )
    {
      v67 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 60LL);
      v49 = *(struct tagRECT *)WindowMargins::ReduceRect(v83, v2, &v86);
      v50 = *((_QWORD *)v2 + 5);
      v86 = (__m128i)v49;
      LogicalToPhysicalDPIRect(&v86, &v86, *(unsigned int *)(v50 + 288), 0LL);
    }
    Prop = GetProp((__int64)v2, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
    if ( Prop )
      *(_DWORD *)(Prop + 48) &= 0xFFFFFFE5;
    if ( WindowArrangement::xxxSetSnapArrangementPos((__int64)v2, (struct tagRECT *)&v86, 2, v78) )
    {
      v54 = (_OWORD *)GetProp((__int64)v2, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
      if ( v54 )
        *v54 = v24;
    }
    else
    {
      v55 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v52) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v52) = 0;
      }
      LOBYTE(v53) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v52,
          v53,
          (unsigned int)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
          2,
          23,
          21,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
      v48 = 1;
    }
  }
  else
  {
    v90 = v23;
    v89 = 0LL;
    v56 = (v73 != 0 ? 15 : 335) | 0x10;
    if ( !v76 )
      v56 = v73 != 0 ? 15 : 335;
    v91 = v56;
    v57 = (struct tagRECT *)&v86;
    if ( v23 )
      v57 = &v88;
    v58 = *v57;
    v93 = v78;
    v92 = v58;
    AdvancedWindowPos::xxxApplyWindowPos(
      v2,
      (struct tagWND *)&v89,
      (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)&v88);
  }
  v59 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v60 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v60 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( v60 || v4 )
  {
    v61 = AdvancedWindowPos::GetWindowState(v2);
    v62 = CRecalcState::GetStateString(v61);
    v63 = (_DWORD *)*((_QWORD *)v2 + 5);
    LOBYTE(v64) = v4;
    LOBYTE(v65) = v60;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      v59->AttachedDevice,
      v65,
      v64,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v67,
      v68,
      v69,
      v70,
      (__int64)v62,
      v63[22],
      v63[23],
      v63[24],
      v63[25],
      v63[24] - v63[22],
      *((_BYTE *)v63 + 100) - v63[23]);
    v2 = v79;
  }
  ThreadUnlock1(v55, v52, v53);
  if ( v48 )
    return 0LL;
  else
    return (*(unsigned __int8 *)(*((_QWORD *)v2 + 5) + 31LL) >> 2) & 8 | 0xA0u;
}
