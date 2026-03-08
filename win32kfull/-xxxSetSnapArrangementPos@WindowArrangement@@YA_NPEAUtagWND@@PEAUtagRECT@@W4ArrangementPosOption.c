/*
 * XREFs of ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0221CE0 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023FD9C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024060C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C00FB0F4 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00FF4A0 (GetMonitorWorkRectForWindow.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x1C01EA404 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01EAA3C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C01EAAAC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C01EBF14 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EC244 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021F9F0 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C02209E0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C0220C70 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023E588 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

char __fastcall WindowArrangement::xxxSetSnapArrangementPos(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v5; // r13d
  unsigned int v8; // edi
  const struct tagWND *v9; // r14
  _WORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __m128i *MonitorWorkRectForWindow; // rax
  int FrameBoundsOverlapInfo; // r13d
  int v18; // eax
  char v19; // r14
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int128 *Prop; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int64 v25; // r15
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v26; // r8
  __int64 v27; // rcx
  struct tagWND *v28; // rax
  struct tagMONITOR *v29; // r8
  __int64 v30; // rsi
  unsigned int v31; // r8d
  struct tagWND *v32; // rdx
  bool v33; // r8
  __int128 v35; // [rsp+38h] [rbp-71h] BYREF
  __int64 v36; // [rsp+48h] [rbp-61h]
  _BYTE v37[24]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v38; // [rsp+68h] [rbp-41h] BYREF
  __int128 v39; // [rsp+78h] [rbp-31h] BYREF
  __int128 v40; // [rsp+88h] [rbp-21h] BYREF
  __int64 v41; // [rsp+98h] [rbp-11h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-9h] BYREF
  int v43; // [rsp+A8h] [rbp-1h]
  int v44; // [rsp+ACh] [rbp+3h]
  __int128 v45; // [rsp+B0h] [rbp+7h]
  unsigned int v46; // [rsp+C0h] [rbp+17h]

  v5 = a4;
  v8 = 0;
  v9 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL);
  if ( !v9 )
    return 0;
  v35 = 0LL;
  v36 = 0LL;
  ThreadLock(v9, &v35);
  v13 = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v14 = MonitorFromRect(a2, 0, 0x12u);
    v15 = v14;
    if ( v14 )
    {
      MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((__m128i *)v37, v14, v9);
      v38 = 0LL;
      *(__m128i *)v37 = *MonitorWorkRectForWindow;
      if ( (unsigned int)IntersectRect(&v38, (int *)a2, (int *)v37) )
      {
        v13 = v38 - *(_QWORD *)a2;
        if ( (_QWORD)v38 == *(_QWORD *)a2 )
          v13 = *((_QWORD *)&v38 + 1) - *(_QWORD *)(a2 + 8);
        if ( !v13 )
        {
          FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(v37, (_DWORD *)a2, 1);
          v18 = ArrangementStyleFromOverlap(FrameBoundsOverlapInfo);
          v19 = v18;
          if ( !v18
            || (v12 = *(_QWORD *)(a1 + 40), (*(_BYTE *)(v12 + 30) & 4) == 0)
            || (v11 = *(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL), v13 = gpsi, *v11 == *(_WORD *)(gpsi + 900LL))
            || (unsigned int)EvaluateArrangeState(a1) == 6 )
          {
            v5 = a4;
          }
          else
          {
            v20 = (gdwPUDFlags & 0x10000 | 0x4000u) >> 7;
            if ( (a3 & 1) != 0 )
            {
              v20 |= 0x20u;
            }
            else if ( (a3 & 2) != 0 )
            {
              v20 |= 1u;
            }
            if ( (*(_BYTE *)(v12 + 31) & 0x21) != 0 )
            {
              v20 |= 8u;
            }
            else if ( IsSemiMaximized((const struct tagWND *)a1) )
            {
              *(_DWORD *)(a1 + 320) &= 0xF3FFFFFF;
            }
            else
            {
              *(_OWORD *)v37 = 0LL;
              GetRect(v21, (__int64)v37, 66);
              CkptRestore((struct tagWND *)a1, v37);
            }
            *(_QWORD *)v37 = *(_QWORD *)a1;
            Prop = (__int128 *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
            if ( Prop )
              v23 = *Prop;
            else
              v23 = 0LL;
            *(_OWORD *)&v37[8] = v23;
            v41 = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v39, 0LL);
            TransformShellProvidedRectangle(a1, (int *)&v41, (int *)&v40 + 2, v15, FrameBoundsOverlapInfo, a2);
            UpdateDwmSnapArrangedInitiated((struct tagWND *)a1);
            v24 = *(_OWORD *)a2;
            v5 = a4;
            v25 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
            v42 = 0LL;
            v43 = 0;
            v44 = v20 | 0x140;
            v45 = v24;
            v46 = a4;
            AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v42, v26);
            if ( (v19 & 1) != 0 )
              *(_DWORD *)(a1 + 320) |= 0x4000000u;
            if ( (v19 & 2) != 0 )
              *(_DWORD *)(a1 + 320) |= 0x8000000u;
            CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)v37);
            v27 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
            if ( v25 != v27 )
            {
              v28 = (struct tagWND *)ValidateHmonitorNoRip(v27);
              AdvancedWindowPos::MigrateCheckpoint((AdvancedWindowPos *)a1, v28, v29);
            }
            if ( !IsSemiMaximized((const struct tagWND *)a1) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7593);
            v8 = 1;
          }
        }
      }
    }
  }
  v30 = ThreadUnlock1(v13, v11, v12);
  if ( v30 )
  {
    if ( v8 )
      NotifyShell::ArrangementCompleted(a1, v5, v8);
    if ( (a3 & 1) != 0 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v30 + 16), 0);
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement *)a1, (const struct tagWND *)0x10, v31) )
    {
      LOBYTE(v32) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v32, v33);
    }
  }
  return v8;
}
