/*
 * XREFs of zzzComposeDesktop @ 0x1C0058DA4
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00588D8 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 * Callees:
 *     DwmAsyncCreateDCompositionVisualBitmapForHwnd @ 0x1C00155D0 (DwmAsyncCreateDCompositionVisualBitmapForHwnd.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C0054D48 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C005879C (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00587CC (GreTransferDwmStateToSpriteState.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0059090 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00590E4 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C005911C (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C00596E4 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C005971C (DwmAsyncShellWindowChange.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 *     MagpComposeDesktop @ 0x1C005A938 (MagpComposeDesktop.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C005A99C (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C005AA10 (GreUpdateSpriteVisRgn.c)
 *     zzzEnableDwmPointerSupport @ 0x1C005B13C (zzzEnableDwmPointerSupport.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00A609C (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C00C83F4 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00CD17C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     IsWindowContentProtected @ 0x1C00CF0C0 (IsWindowContentProtected.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00D3E98 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     MapDesktop @ 0x1C00E4A20 (MapDesktop.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C021C22C (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C022CB18 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // r15d
  struct tagWND **v9; // rax
  void *v10; // rax
  __int64 v12; // rsi
  struct tagDESKTOP *v13; // rax
  struct tagWND *v14; // rcx
  struct tagWND *v15; // rcx
  ULONG v16; // eax
  void *v17; // rax
  CVisRgnTrackerProp *v18; // r13
  CompositionObject *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 *v22; // rax
  void *v23; // rax
  struct tagWND *v24; // r9
  _QWORD v25[3]; // [rsp+40h] [rbp-20h] BYREF
  int v26; // [rsp+58h] [rbp-8h]
  int v27; // [rsp+5Ch] [rbp-4h]
  CVisRgnTrackerProp *v28; // [rsp+A0h] [rbp+40h] BYREF
  CVisRgnTrackerProp *v29; // [rsp+A8h] [rbp+48h] BYREF

  v2 = **((_QWORD **)a1 + 1);
  v3 = *(_DWORD *)(v2 + 64);
  if ( (v3 & 1) != 0 )
    return 0;
  *(_DWORD *)(v2 + 64) = v3 | 1;
  v4 = ReferenceDwmProcess();
  v5 = v4;
  if ( v4 )
  {
    v25[0] = 1LL;
    v25[1] = v4;
    v25[2] = a1;
    v26 = 0;
    v27 = 1;
    if ( (int)MapDesktop(v25) < 0 )
    {
      v16 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v16);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v5);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v5);
  }
  v6 = DCompositionDwmInitialize();
  if ( v6 < 0 )
  {
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    return 3221225473LL;
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL)) )
  {
    v6 = -1073741823;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v17 = (void *)ReferenceDwmApiPort(v7);
    DwmAsyncShellWindowChange(v17);
    return 0LL;
  }
  v8 = 0;
  while ( *(_BYTE *)(32LL * v8 + gSharedInfo[1] + 24) != 1 )
  {
LABEL_10:
    if ( ++v8 > giheLast )
      goto LABEL_11;
  }
  v12 = *(_QWORD *)(gpKernelHandleTable + 24LL * v8);
  if ( !(unsigned int)ShouldComposeWindow((struct tagWND *const)v12, a1) )
    goto LABEL_57;
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 1) != 0 )
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(v12 + 16),
      *(struct tagQ **)(*(_QWORD *)(v12 + 16) + 432LL),
      0x10u,
      (struct tagWND *)v12,
      0,
      0LL,
      0LL,
      0LL);
  IsDesktopWindow(v12);
  v6 = ComposeWindow(v15);
  if ( v6 >= 0 )
  {
LABEL_57:
    if ( (unsigned int)IsWindowContentProtected(v12) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 27LL) & 0x20) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)v12);
      ChangeWindowTreeProtection((struct tagWND *)v12, 1u);
    }
    v13 = *(struct tagDESKTOP **)(v12 + 24);
    if ( v13 && v13 == a1 && !(unsigned int)IsWindowBeingDestroyed(v12) )
    {
      CHwndTargetProp::ReNotifyDwm(v14);
      v28 = 0LL;
      v29 = 0LL;
      if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(v12, &v28) )
      {
        v18 = v28;
        v19 = (CompositionObject *)*((_QWORD *)v28 + 3);
        if ( v19 )
        {
          if ( (int)CompositionObject::OpenDwmHandle(v19, (void **)&v29) >= 0 )
          {
            v21 = 0LL;
            v28 = v29;
            v22 = (__int64 *)*((_QWORD *)v18 + 2);
            if ( v22 )
              v21 = *v22;
            v23 = (void *)ReferenceDwmApiPort(v20);
            DwmAsyncCreateDCompositionVisualBitmapForHwnd(v23, v21, (__int64)v28);
          }
        }
      }
      if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
        || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
      {
        v28 = 0LL;
        if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v12, &v28) )
          CSwapChainProp::NotifyDwm(v28, (struct tagWND *const)v12);
      }
      v28 = 0LL;
      if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v12, &v28) )
      {
        CVisRgnTrackerProp::FreeTrackedRegions(v28);
        CVisRgnTrackerProp::MarkDirty(v28);
      }
    }
    goto LABEL_10;
  }
  while ( v8 <= giheLast )
  {
    if ( *(_BYTE *)(32LL * v8 + gSharedInfo[1] + 24) == 1
      && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v8), a1) )
    {
      ComposeWindow(v24);
    }
    --v8;
  }
  GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEnableDwmPointerSupport(0LL, 0LL);
  GreTransferDwmStateToSpriteState(*(Gre::Base **)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1), ghdcMem);
LABEL_11:
  v9 = (struct tagWND **)*((_QWORD *)a1 + 1);
  if ( v6 < 0 )
  {
    *((_DWORD *)*v9 + 16) &= ~1u;
  }
  else
  {
    ReorderChildrenSpriteList(v9[3], 0LL);
    MagpComposeDesktop(gMagnContext, a1);
    BroadcastCompositionChange(a1);
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v6 >= 0 )
  {
    v10 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1));
    DwmAsyncShellWindowChange(v10);
  }
  return (unsigned int)v6;
}
