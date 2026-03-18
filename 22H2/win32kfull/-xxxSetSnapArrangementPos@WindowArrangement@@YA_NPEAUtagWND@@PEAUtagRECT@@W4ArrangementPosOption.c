/*
 * XREFs of ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021F0A8 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023D0DC (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D940 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C00C1048 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x1C01E9254 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E988C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C01E98FC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C01EAD64 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EB094 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021CE30 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021DDD8 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021E068 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B904 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
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
  _OWORD *MonitorWorkRectForWindow; // rax
  int FrameBoundsOverlapInfo; // r13d
  int v18; // eax
  char v19; // r14
  __int64 v20; // r9
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int128 *Prop; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int64 v26; // r15
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v27; // r8
  __int64 v28; // rcx
  struct tagWND *v29; // rax
  struct tagMONITOR *v30; // r8
  __int64 v31; // rsi
  unsigned int v32; // r8d
  struct tagWND *v33; // rdx
  bool v34; // r8
  __int128 v36; // [rsp+38h] [rbp-71h] BYREF
  __int64 v37; // [rsp+48h] [rbp-61h]
  _BYTE v38[24]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v39; // [rsp+68h] [rbp-41h] BYREF
  __int128 v40; // [rsp+78h] [rbp-31h] BYREF
  __int128 v41; // [rsp+88h] [rbp-21h] BYREF
  __int64 v42; // [rsp+98h] [rbp-11h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-9h] BYREF
  int v44; // [rsp+A8h] [rbp-1h]
  int v45; // [rsp+ACh] [rbp+3h]
  __int128 v46; // [rsp+B0h] [rbp+7h]
  unsigned int v47; // [rsp+C0h] [rbp+17h]

  v5 = a4;
  v8 = 0;
  v9 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
  if ( !v9 )
    return 0;
  v36 = 0LL;
  v37 = 0LL;
  ThreadLock(v9, &v36);
  v13 = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v14 = MonitorFromRect(a2, 0, 0x12u);
    v15 = v14;
    if ( v14 )
    {
      MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v38, v14, v9);
      v39 = 0LL;
      *(_OWORD *)v38 = *MonitorWorkRectForWindow;
      if ( (unsigned int)IntersectRect(&v39, (int *)a2, (int *)v38) )
      {
        v13 = v39 - *(_QWORD *)a2;
        if ( (_QWORD)v39 == *(_QWORD *)a2 )
          v13 = *((_QWORD *)&v39 + 1) - *(_QWORD *)(a2 + 8);
        if ( !v13 )
        {
          FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(v38, (_DWORD *)a2, 1);
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
            v21 = (gdwPUDFlags & 0x10000 | 0x4000u) >> 7;
            if ( (a3 & 1) != 0 )
            {
              v21 |= 0x20u;
            }
            else if ( (a3 & 2) != 0 )
            {
              v21 |= 1u;
            }
            if ( (*(_BYTE *)(v12 + 31) & 0x21) != 0 )
            {
              v21 |= 8u;
            }
            else if ( IsSemiMaximized((const struct tagWND *)a1) )
            {
              *(_DWORD *)(a1 + 320) &= 0xF3FFFFFF;
            }
            else
            {
              *(_OWORD *)v38 = 0LL;
              GetRect(v22, (__int64)v38, 66);
              CkptRestore((struct tagWND *)a1, v38);
            }
            *(_QWORD *)v38 = *(_QWORD *)a1;
            Prop = (__int128 *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, v20);
            if ( Prop )
              v24 = *Prop;
            else
              v24 = 0LL;
            *(_OWORD *)&v38[8] = v24;
            v42 = 0LL;
            v40 = 0LL;
            v41 = 0LL;
            xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v40, 0LL);
            TransformShellProvidedRectangle(a1, (int *)&v42, (int *)&v41 + 2, v15, FrameBoundsOverlapInfo, a2);
            UpdateDwmSnapArrangedInitiated((struct tagWND *)a1);
            v25 = *(_OWORD *)a2;
            v5 = a4;
            v26 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
            v43 = 0LL;
            v44 = 0;
            v45 = v21 | 0x140;
            v46 = v25;
            v47 = a4;
            AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v43, v27);
            if ( (v19 & 1) != 0 )
              *(_DWORD *)(a1 + 320) |= 0x4000000u;
            if ( (v19 & 2) != 0 )
              *(_DWORD *)(a1 + 320) |= 0x8000000u;
            CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)v38);
            v28 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
            if ( v26 != v28 )
            {
              v29 = (struct tagWND *)ValidateHmonitorNoRip(v28);
              AdvancedWindowPos::MigrateCheckpoint((AdvancedWindowPos *)a1, v29, v30);
            }
            if ( !IsSemiMaximized((const struct tagWND *)a1) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7567);
            v8 = 1;
          }
        }
      }
    }
  }
  v31 = ThreadUnlock1(v13, v11, v12);
  if ( v31 )
  {
    if ( v8 )
      NotifyShell::ArrangementCompleted(a1, v5, v8);
    if ( (a3 & 1) != 0 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v31 + 16), 0);
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement *)a1, (const struct tagWND *)0x10, v32) )
    {
      LOBYTE(v33) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v33, v34);
    }
  }
  return v8;
}
