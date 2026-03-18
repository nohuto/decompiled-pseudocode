/*
 * XREFs of ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AFC14 (-xxxMigrate@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopology@@@Z @ 0x1C023B3FC (-xxxFullscreenRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopolog.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x1C023DDF8 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C0236424 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C0236640 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddDq @ 0x1C0237FA0 (WPP_RECORDER_AND_TRACE_SF_qdddddDq.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddDq @ 0x1C024C108 (WPP_RECORDER_AND_TRACE_SF_ddddDq.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowPos(
        AdvancedWindowPos *this,
        const struct tagRECT *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  char v5; // si
  char v6; // dl
  const struct tagRECT *v7; // rbx
  LONG bottom; // edx
  int v9; // edi
  bool v10; // r13
  int WindowTrackState; // eax
  int v12; // r10d
  int v13; // edx
  int v14; // ebx
  int v15; // r15d
  struct tagWND *v16; // rdi
  unsigned int v17; // r8d
  __int64 v18; // rax
  struct tagRECT *v19; // rcx
  _OWORD *v20; // r13
  int v21; // edx
  struct tagMONITOR *v22; // r8
  int v23; // edi
  char v24; // dl
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r12d
  int v31; // ebx
  __int64 v32; // rax
  int v33; // edi
  bool v34; // zf
  _OWORD *Prop; // rax
  struct tagMONITOR *v36; // r8
  struct _DEVICE_OBJECT *v37; // r9
  _UNKNOWN **v38; // r10
  int v39; // r15d
  int v40; // ebx
  int v41; // edi
  int v42; // edx
  int v43; // r9d
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 ThreadWin32Thread; // rax
  int v47; // edx
  struct tagMONITOR *v48; // r8
  struct _DEVICE_OBJECT *v49; // r9
  void *v50; // r10
  __int64 v51; // rax
  int v52; // ebx
  __int64 v53; // [rsp+20h] [rbp-E0h]
  __int64 v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+38h] [rbp-C8h]
  __int64 v57; // [rsp+40h] [rbp-C0h]
  char v58; // [rsp+60h] [rbp-A0h]
  char v59; // [rsp+80h] [rbp-80h]
  unsigned __int8 v60; // [rsp+81h] [rbp-7Fh]
  bool v61; // [rsp+82h] [rbp-7Eh]
  char v62; // [rsp+83h] [rbp-7Dh]
  int v63; // [rsp+84h] [rbp-7Ch]
  int v64; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  struct tagRECT *v67; // [rsp+90h] [rbp-70h]
  struct tagWND *v68; // [rsp+98h] [rbp-68h]
  LONG right; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A4h] [rbp-5Ch]
  int v71; // [rsp+A8h] [rbp-58h]
  int v72; // [rsp+ACh] [rbp-54h]
  struct tagRECT v73; // [rsp+B0h] [rbp-50h]
  __int128 v74; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int128 v76; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v77; // [rsp+E8h] [rbp-18h]
  _QWORD v78[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v79; // [rsp+100h] [rbp+0h]
  LONG left; // [rsp+108h] [rbp+8h]
  char v81; // [rsp+10Ch] [rbp+Ch]
  __int128 v82; // [rsp+110h] [rbp+10h]

  v5 = 1;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a2 + 1;
    v57 = *(_QWORD *)this;
    WPP_RECORDER_AND_TRACE_SF_qdddddDq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      55,
      v53,
      v54,
      0x37u,
      (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
  }
  else
  {
    v7 = a2 + 1;
  }
  bottom = a2->bottom;
  v60 = bottom & 1;
  v64 = bottom & 2;
  v72 = bottom & 0x10;
  v9 = bottom & 0x20;
  v66 = bottom & 8;
  v10 = (bottom & 4) != 0 || (a2->bottom & 8) != 0;
  v61 = v10;
  if ( (bottom & 0x40) != 0 || (v59 = 1, IsRectEmptyInl(v7)) )
    v59 = 0;
  v67 = (struct tagRECT *)v7;
  if ( (bottom & 0x100) != 0 || (v62 = 1, IsRectEmptyInl(v7)) )
    v62 = 0;
  right = a2->right;
  if ( right == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(this, 1);
  v13 = a2->bottom & 0x80;
  v63 = WindowTrackState;
  v14 = v13 != 0 ? 0x20 : 0;
  v15 = v13 != 0 ? 1048640 : 64;
  if ( v60 )
  {
    v14 |= 0x10u;
    v15 |= 0x10u;
    if ( v12 )
    {
      v14 |= 0x40u;
      v15 |= 4u;
    }
  }
  v70 = v15;
  if ( v9 )
    xxxSetForegroundWindowWithOptions(this, 31LL, 0LL, 0);
  v16 = 0LL;
  v68 = 0LL;
  if ( v10 )
  {
    if ( v59 )
      v17 = 18;
    else
      v17 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
    v18 = MonitorFromRect(v67, 2u, v17);
    v19 = v67;
    v16 = (struct tagWND *)v18;
    v68 = (struct tagWND *)v18;
  }
  else
  {
    v19 = v67;
  }
  if ( v66 )
    v14 |= 8u;
  v71 = v14;
  v20 = (_OWORD *)((unsigned __int64)v19 & -(__int64)(v66 != 0));
  v77 = 0LL;
  v76 = 0LL;
  ThreadLock((__int64)v16, (__int64 *)&v76);
  v79 = *(_QWORD *)&a2->left;
  left = a2[2].left;
  v78[0] = v16;
  v78[1] = v20;
  v81 = 0;
  v82 = 0LL;
  if ( right == 2 )
  {
    v23 = v14 | 0x40;
    if ( !v64 )
      v23 = v14;
    v24 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v57) = v60 + 6;
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v24,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x19u,
        0x38u,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
        v57,
        v23);
    }
    if ( v79 && (v23 & 0x20) != 0 )
    {
      v25 = HMValidateHandleNoSecure(v79, 1);
      if ( v25 )
      {
        v26 = *(_BYTE *)(*(_QWORD *)(v25 + 40) + 24LL) & 8;
        if ( v26 != (*(_BYTE *)(*((_QWORD *)this + 5) + 24LL) & 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( !v26 )
          v23 |= 0x400u;
      }
      else
      {
        v79 = 0LL;
      }
    }
    xxxMinMaximizeEx((ULONG_PTR)this, v60 + 6, v23 | 1, (__int64)v78);
LABEL_55:
    v30 = v63;
    goto LABEL_56;
  }
  if ( right == 1 )
  {
    LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        (_DWORD)v22,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        25,
        57,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
        v14);
    v31 = v14 | 2;
    if ( v61 )
    {
      v31 |= 4u;
      if ( !v66 )
        AdvancedWindowPos::MigrateCheckpoint(this, v16, v22);
    }
    if ( v79 && (v31 & 0x20) != 0 )
    {
      v32 = HMValidateHandleNoSecure(v79, 1);
      if ( v32 )
      {
        v33 = *(_BYTE *)(*(_QWORD *)(v32 + 40) + 24LL) & 8;
        if ( v33 != (*(_BYTE *)(*((_QWORD *)this + 5) + 24LL) & 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v34 = v33 == 0;
        v16 = v68;
        if ( v34 )
          v31 |= 0x400u;
      }
      else
      {
        v79 = 0LL;
      }
    }
    xxxMinMaximizeEx((ULONG_PTR)this, 3u, v31 | 1, (__int64)v78);
    if ( v66 )
    {
      Prop = (_OWORD *)GetProp((__int64)this, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
      if ( Prop )
        *Prop = *v20;
      AdvancedWindowPos::MigrateCheckpoint(this, v16, v36);
    }
    goto LABEL_55;
  }
  v37 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
  LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v38 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      (_DWORD)v22,
      (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
      4,
      25,
      58,
      (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    v37 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
    v38 = &WPP_RECORDER_INITIALIZED;
  }
  v39 = v15 | 0x80000;
  v40 = v14 | 0x80;
  if ( v59 )
  {
    v39 = v70 | 0x880000;
    v40 = v71 | 0x280;
  }
  v41 = v40 | 0x100;
  v73 = a2[1];
  if ( !v62 )
    v41 = v40;
  v42 = v39 | 0x400000;
  if ( !v62 )
    v42 = v39;
  v65 = v42;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x21) == 0 && !IsSemiMaximized(this) )
  {
    if ( !IsRectEmptyInl(a2 + 1) )
    {
      v44 = *(_QWORD *)&a2->left;
      v75 = 0LL;
      v74 = 0LL;
      if ( v44 )
      {
        v45 = HMValidateHandleNoSecure(v44, 1);
        if ( v45 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v74 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v74;
          *((_QWORD *)&v74 + 1) = v45;
          HMLockObject(v45);
        }
        LODWORD(v27) = v65;
      }
      else
      {
        v45 = 0LL;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v58 = v27;
        LOBYTE(v27) = v5;
        LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_ddddDq(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v29,
          v43,
          v53,
          v54,
          v55,
          v56,
          v73.left,
          v73.top,
          v73.right,
          v73.bottom,
          v58,
          v45);
      }
      xxxSetWindowPos(
        this,
        v45,
        (unsigned int)v73.left,
        (unsigned int)v73.top,
        v73.right - v73.left,
        v73.bottom - v73.top,
        v65);
      if ( v45 )
        ThreadUnlock1(v28, v27, v29);
    }
    goto LABEL_55;
  }
  LOBYTE(v42) = WPP_GLOBAL_Control != v37
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( !(_BYTE)v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)v38 )
  {
    v30 = v63;
  }
  else
  {
    v30 = v63;
    LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v38;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v42,
      (_DWORD)v22,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      25,
      59,
      (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
      v63);
  }
  if ( IsSemiMaximized(this) )
    v41 |= 4u;
  if ( v68 && !v66 )
  {
    LOBYTE(v47) = WPP_GLOBAL_Control != v49
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v48) = WPP_RECORDER_INITIALIZED != v50;
    if ( (_BYTE)v47 || WPP_RECORDER_INITIALIZED != v50 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v47,
        (_DWORD)v48,
        (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
        4,
        25,
        60,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    AdvancedWindowPos::MigrateCheckpoint(this, v68, v48);
  }
  LOBYTE(v47) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v47,
      (_DWORD)v48,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      25,
      61,
      (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
      v41);
  }
  if ( v79 && (v41 & 0x20) != 0 )
  {
    v51 = HMValidateHandleNoSecure(v79, 1);
    if ( v51 )
    {
      v52 = *(_BYTE *)(*(_QWORD *)(v51 + 40) + 24LL) & 8;
      if ( v52 != (*(_BYTE *)(*((_QWORD *)this + 5) + 24LL) & 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( !v52 )
        v41 |= 0x400u;
    }
    else
    {
      v79 = 0LL;
    }
  }
  xxxMinMaximizeEx((ULONG_PTR)this, 9u, v41 | 1, (__int64)v78);
LABEL_56:
  ThreadUnlock1(v28, v27, v29);
  if ( v72 )
    ShellWindowPos::NotifyPosAndStateApplied(this, v30, v67, left);
}
