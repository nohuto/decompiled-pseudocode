/*
 * XREFs of ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC
 * Callers:
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0237BB4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024BDB4 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C015C47C (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C02093B0 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x1C02096B0 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C0209F8C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C0209FFC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C020B360 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

char __fastcall WindowArrangement::xxxSetSnapArrangementPos(__int64 a1, struct tagRECT *a2, char a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r13d
  const struct tagWND *v9; // r14
  _WORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r15
  _OWORD *MonitorWorkRectForWindow; // rax
  __int64 FrameBoundsOverlapInfo; // r13
  int v18; // eax
  char v19; // r14
  char v20; // r9
  int v21; // edi
  __int64 v22; // rcx
  __int128 *Prop; // rax
  __int128 v24; // xmm0
  struct tagRECT v25; // xmm0
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
  struct tagRECT v46; // [rsp+B0h] [rbp+7h]
  unsigned int v47; // [rsp+C0h] [rbp+17h]

  v4 = 0;
  v5 = a4;
  v9 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL);
  if ( !v9 )
    return 0;
  v36 = 0LL;
  v37 = 0LL;
  ThreadLock((__int64)v9, (__int64 *)&v36);
  if ( !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v14 = MonitorFromRect(a2, 0, 0x12u);
    v15 = v14;
    if ( v14 )
    {
      MonitorWorkRectForWindow = (_OWORD *)GetMonitorWorkRectForWindow((__int64)v38, v14, v9);
      v39 = 0LL;
      *(_OWORD *)v38 = *MonitorWorkRectForWindow;
      if ( (unsigned int)IntersectRect(&v39, &a2->left, (int *)v38) )
      {
        if ( v39 == *(_OWORD *)a2 )
        {
          LOBYTE(v13) = 1;
          FrameBoundsOverlapInfo = (unsigned int)GetFrameBoundsOverlapInfo(v38, a2, v13);
          v18 = ArrangementStyleFromOverlap(FrameBoundsOverlapInfo);
          v19 = v18;
          if ( v18
            && (v13 = *(_QWORD *)(a1 + 40), (*(_BYTE *)(v13 + 30) & 4) != 0)
            && (v11 = *(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL), v12 = gpsi, *v11 != *(_WORD *)(gpsi + 900LL))
            && (*(_BYTE *)(v13 + 31) & 0x10) != 0
            && (unsigned int)EvaluateArrangeState(a1) != 6 )
          {
            v21 = 128;
            if ( (a3 & 1) != 0 )
            {
              v21 = 160;
            }
            else if ( (a3 & 2) != 0 )
            {
              v21 = 129;
            }
            if ( (v20 & 0x21) != 0 )
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
              CkptRestore((struct tagWND *)a1, (struct tagRECT *)v38);
            }
            *(_QWORD *)v38 = *(_QWORD *)a1;
            Prop = (__int128 *)GetProp(a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
            if ( Prop )
              v24 = *Prop;
            else
              v24 = 0LL;
            *(_OWORD *)&v38[8] = v24;
            v42 = 0LL;
            v40 = 0LL;
            v41 = 0LL;
            xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v40, 0LL);
            TransformShellProvidedRectangle(a1, &v42, (char *)&v41 + 8, v15, FrameBoundsOverlapInfo, a2);
            SetOrClrWF(1, (struct tagWND *)a1, 0xD910u, 1);
            v25 = *a2;
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
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
            v4 = 1;
          }
          else
          {
            v5 = a4;
          }
        }
      }
    }
  }
  v31 = ThreadUnlock1(v12, v11, v13);
  if ( v31 )
  {
    if ( v4 )
      NotifyShell::ArrangementCompleted(a1, v5, v4);
    if ( (a3 & 1) != 0 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v31 + 16), 0);
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)a1, (const struct tagWND *)0x10, v32) )
    {
      LOBYTE(v33) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v33, v34);
    }
  }
  return v4;
}
