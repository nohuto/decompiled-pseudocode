/*
 * XREFs of zzzComposeDesktop @ 0x1C00EC528
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     zzzDwmStartRedirection @ 0x1C00E942C (zzzDwmStartRedirection.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C00296FC (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     IsWindowContentProtected @ 0x1C0038814 (IsWindowContentProtected.c)
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     ComposeWindowIfNeeded @ 0x1C004C260 (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C004E8CC (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C004E90C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     MapDesktop @ 0x1C004EDB0 (MapDesktop.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0073150 (GreUpdateSpriteVisRgn.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00BD490 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C00E91F8 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00EA26C (GreTransferSpriteStateToDwmState.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EABB8 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00EABE8 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EAC4C (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00EAD84 (GreRemoveDisplayDriverRealizations.c)
 *     DwmAsyncShellWindowChange @ 0x1C00EB3DC (DwmAsyncShellWindowChange.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EC818 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00EC870 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00ECD78 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0122654 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C015E5C4 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0247850 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C0273D74 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0273EFC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0274524 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0274624 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0274734 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  int v2; // r12d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r14d
  struct tagWND **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 **v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v21; // rdi
  struct tagDESKTOP *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  struct tagWND *v25; // rcx
  ULONG v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rbx
  void *v30; // rax
  __int64 v31; // r13
  CompositionObject *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // rax
  CompositionObject *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // rax
  struct tagWND *v40; // r9
  void *v41; // rax
  _QWORD v42[3]; // [rsp+40h] [rbp-20h] BYREF
  int v43; // [rsp+58h] [rbp-8h]
  int v44; // [rsp+5Ch] [rbp-4h]
  CVisRgnTrackerProp *v45; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v46; // [rsp+A8h] [rbp+48h] BYREF

  v2 = -1073741823;
  v3 = **((_QWORD **)a1 + 1);
  v4 = *(_DWORD *)(v3 + 64);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 64) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    v42[0] = 1LL;
    v42[1] = v5;
    v42[2] = a1;
    v43 = 0;
    v44 = 1;
    v2 = MapDesktop((__int64)v42);
    if ( v2 < 0 )
    {
      v26 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v26, v27, v28);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v7);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v7);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(_QWORD *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1)) )
  {
    v2 = -1073741823;
LABEL_11:
    v12 = (struct tagWND **)*((_QWORD *)a1 + 1);
    if ( v2 < 0 )
    {
      *((_DWORD *)*v12 + 16) &= ~1u;
    }
    else
    {
      ReorderChildrenSpriteList(v12[3], 0LL);
      v14 = *((_QWORD *)a1 + 29);
      v46 = *(_QWORD *)&gMagnContext;
      if ( v14 )
      {
        v41 = (void *)ReferenceDwmApiPort(**((_QWORD **)a1 + 1), v13);
        DwmAsyncMagnSetDesktopColorTransform(v41);
      }
      BroadcastCompositionChange(a1);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 >= 0 )
    {
      v16 = (__int64 **)*((_QWORD *)a1 + 1);
      v17 = v16[21];
      if ( v17 )
        v6 = *v17;
      v18 = **v16;
      v19 = (void *)ReferenceDwmApiPort(v16, v15);
      DwmAsyncShellWindowChange(v19, v6, v18);
    }
    return (unsigned int)v2;
  }
  v10 = *((_QWORD *)a1 + 1);
  if ( *(_QWORD *)(v10 + 24) )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(32LL * v11 + gSharedInfo[1] + 24) == 1 )
      {
        v21 = *(_QWORD *)(gpKernelHandleTable + 24LL * v11);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v21, a1) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v21 + 16),
              *(struct tagQ **)(*(_QWORD *)(v21 + 16) + 432LL),
              0x10u,
              (struct tagWND *)v21,
              0,
              0LL,
              0LL,
              0LL);
          LOBYTE(v24) = IsDesktopWindow(v21);
          v2 = ComposeWindow(v25, v24 != 0 ? 5 : 1);
          if ( v2 < 0 )
            break;
        }
        if ( (unsigned int)IsWindowContentProtected(v21) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded(v21, 1);
          ChangeWindowTreeProtection((struct tagWND *)v21, 1u);
        }
        v22 = *(struct tagDESKTOP **)(v21 + 24);
        if ( v22 && v22 == a1 && !(unsigned int)IsWindowBeingDestroyed(v21) )
        {
          v46 = 0LL;
          if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(v23, &v46) )
          {
            v31 = v46;
            v45 = 0LL;
            v32 = *(CompositionObject **)(v46 + 16);
            if ( v32 && (int)CompositionObject::OpenDwmHandle(v32, (void **)&v45) >= 0 )
            {
              v35 = (void *)ReferenceDwmApiPort(v34, v33);
              DwmAsyncCreateDCompositionHwndTarget(v35);
            }
            v36 = *(CompositionObject **)(v31 + 48);
            if ( v36 && (int)CompositionObject::OpenDwmHandle(v36, (void **)&v45) >= 0 )
            {
              v39 = (void *)ReferenceDwmApiPort(v38, v37);
              DwmAsyncCreateDCompositionHwndTarget(v39);
            }
          }
          if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
            || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
          {
            v45 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v21, &v45) )
              CSwapChainProp::NotifyDwm(v45, (struct tagWND *const)v21);
          }
          v45 = 0LL;
          if ( CWindowProp::GetProp<CVisRgnTrackerProp>(v21, (__int64 *)&v45) )
          {
            CVisRgnTrackerProp::FreeTrackedRegions(v45);
            CVisRgnTrackerProp::MarkDirty(v45);
          }
        }
        if ( v2 < 0 )
          break;
      }
      if ( ++v11 > giheLast )
      {
        if ( v2 >= 0 )
          goto LABEL_11;
        break;
      }
    }
    while ( v11 <= giheLast )
    {
      if ( *(_BYTE *)(32LL * v11 + gSharedInfo[1] + 24) == 1
        && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v11), a1) )
      {
        ComposeWindow(v40, 2);
      }
      --v11;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1));
    goto LABEL_11;
  }
  v29 = **(_QWORD **)v10;
  v30 = (void *)ReferenceDwmApiPort(v9, v8);
  DwmAsyncShellWindowChange(v30, 0LL, v29);
  return 0LL;
}
