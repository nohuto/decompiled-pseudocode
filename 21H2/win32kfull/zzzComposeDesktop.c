/*
 * XREFs of zzzComposeDesktop @ 0x1C00B2FD8
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C001F45C (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004A690 (GreUpdateSpriteVisRgn.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C006A698 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C006B80C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsWindowContentProtected @ 0x1C0077D48 (IsWindowContentProtected.c)
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C0097498 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0097B14 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0097B44 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00B33EC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00B3444 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C00B347C (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C00B4D1C (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F150C (DwmAsyncShellWindowChange.c)
 *     MagpComposeDesktop @ 0x1C0120198 (MagpComposeDesktop.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C014F364 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z @ 0x1C0160078 (-ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0243670 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdi
  ULONG v6; // eax
  __int64 v7; // rdx
  int v9; // edi
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  struct tagWND **v13; // rax
  void *v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rsi
  struct tagWND *v17; // rcx
  struct tagDESKTOP *v18; // rax
  struct tagWND *v19; // rcx
  struct tagWND *v20; // r9
  void *v21; // rax
  _QWORD v22[3]; // [rsp+40h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-8h]
  int v24; // [rsp+5Ch] [rbp-4h]
  CVisRgnTrackerProp *v25; // [rsp+90h] [rbp+30h] BYREF

  v2 = **((_QWORD **)a1 + 1);
  v3 = *(_DWORD *)(v2 + 64);
  if ( (v3 & 1) != 0 )
    return 0;
  *(_DWORD *)(v2 + 64) = v3 | 1;
  v4 = ReferenceDwmProcess();
  v5 = v4;
  if ( v4 )
  {
    v22[0] = 1LL;
    v22[1] = v4;
    v22[2] = a1;
    v23 = 0;
    v24 = 1;
    if ( (int)MapDesktop((__int64)v22) < 0 )
    {
      v6 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v6, v7);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v5);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v5);
  }
  v9 = DCompositionDwmInitialize();
  v10 = **((_QWORD **)a1 + 1);
  if ( v9 < 0 )
  {
    *(_DWORD *)(v10 + 64) &= ~1u;
    return 3221225473LL;
  }
  v11 = (unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)v10) == 0;
  v13 = (struct tagWND **)*((_QWORD *)a1 + 1);
  if ( v11 )
  {
    v9 = -1073741823;
    goto LABEL_42;
  }
  if ( !v13[3] )
  {
    v14 = (void *)ReferenceDwmApiPort(v12);
    DwmAsyncShellWindowChange(v14);
    return 0LL;
  }
  v15 = 0;
  while ( *(_BYTE *)(32LL * v15 + gSharedInfo[1] + 24) != 1 )
  {
LABEL_31:
    if ( ++v15 > giheLast )
      goto LABEL_39;
  }
  v16 = *(_QWORD *)(gpKernelHandleTable + 24LL * v15);
  if ( !(unsigned int)ShouldComposeWindow((struct tagWND *const)v16, a1) )
    goto LABEL_49;
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 1) != 0 )
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(v16 + 16),
      *(struct tagQ **)(*(_QWORD *)(v16 + 16) + 432LL),
      0x10u,
      (struct tagWND *)v16,
      0,
      0LL,
      0LL,
      0LL);
  IsDesktopWindow(v16);
  v9 = ComposeWindow(v17);
  if ( v9 >= 0 )
  {
LABEL_49:
    if ( (unsigned int)IsWindowContentProtected(v16) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 27LL) & 0x20) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)v16);
      ChangeWindowTreeProtection((struct tagWND *)v16, 1u);
    }
    v18 = *(struct tagDESKTOP **)(v16 + 24);
    if ( v18 && v18 == a1 && !(unsigned int)IsWindowBeingDestroyed(v16) )
    {
      CHwndTargetProp::ReNotifyDwm(v19);
      CHwndBitmapProp::ReNotifyDwm((struct tagWND *)v16);
      if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
        || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
      {
        v25 = 0LL;
        if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v16, &v25) )
          CSwapChainProp::NotifyDwm(v25, (struct tagWND *const)v16);
      }
      v25 = 0LL;
      if ( CWindowProp::GetProp<CVisRgnTrackerProp>(v16, (__int64 *)&v25) )
      {
        CVisRgnTrackerProp::FreeTrackedRegions(v25);
        CVisRgnTrackerProp::MarkDirty(v25);
      }
    }
    goto LABEL_31;
  }
  while ( v15 <= giheLast )
  {
    if ( *(_BYTE *)(32LL * v15 + gSharedInfo[1] + 24) == 1
      && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v15), a1) )
    {
      ComposeWindow(v20);
    }
    --v15;
  }
  GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEnableDwmPointerSupport(0, 0);
  GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1));
LABEL_39:
  v13 = (struct tagWND **)*((_QWORD *)a1 + 1);
  if ( v9 < 0 )
  {
LABEL_42:
    *((_DWORD *)*v13 + 16) &= ~1u;
    goto LABEL_43;
  }
  ReorderChildrenSpriteList(v13[3], 0LL);
  MagpComposeDesktop(gMagnContext, a1);
  BroadcastCompositionChange(a1);
LABEL_43:
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreUpdateSpriteVisRgn(*(HDEV *)(gpDispInfo + 40LL), 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v9 >= 0 )
  {
    v21 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1));
    DwmAsyncShellWindowChange(v21);
  }
  return (unsigned int)v9;
}
