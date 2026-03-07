__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r15d
  struct tagWND **v10; // rax
  void *v11; // rax
  __int64 v13; // rsi
  struct tagDESKTOP *v14; // rax
  struct tagWND *v15; // rcx
  int v16; // eax
  struct tagWND *v17; // rcx
  ULONG v18; // eax
  void *v19; // rax
  CVisRgnTrackerProp *v20; // r13
  CompositionObject *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 *v24; // rax
  void *v25; // rax
  struct tagWND *v26; // r9
  _QWORD v27[3]; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+58h] [rbp-8h]
  int v29; // [rsp+5Ch] [rbp-4h]
  CVisRgnTrackerProp *v30; // [rsp+A0h] [rbp+40h] BYREF
  CVisRgnTrackerProp *v31; // [rsp+A8h] [rbp+48h] BYREF

  v2 = **((_QWORD **)a1 + 1);
  v3 = *(_DWORD *)(v2 + 64);
  if ( (v3 & 1) != 0 )
    return 0;
  *(_DWORD *)(v2 + 64) = v3 | 1;
  v4 = ReferenceDwmProcess();
  v5 = v4;
  if ( v4 )
  {
    v27[0] = 1LL;
    v27[1] = v4;
    v27[2] = a1;
    v28 = 0;
    v29 = 1;
    if ( (int)MapDesktop((__int64)v27) < 0 )
    {
      v18 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v18);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v5);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v5);
  }
  v6 = DCompositionDwmInitialize();
  v7 = **((_QWORD **)a1 + 1);
  if ( v6 < 0 )
  {
    *(_DWORD *)(v7 + 64) &= ~1u;
    return 3221225473LL;
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)v7) )
  {
    v6 = -1073741823;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v19 = (void *)ReferenceDwmApiPort(v8);
    DwmAsyncShellWindowChange(v19);
    return 0LL;
  }
  v9 = 0;
  while ( *(_BYTE *)(32LL * v9 + gSharedInfo[1] + 24) != 1 )
  {
LABEL_10:
    if ( ++v9 > giheLast )
      goto LABEL_11;
  }
  v13 = *(_QWORD *)(gpKernelHandleTable + 24LL * v9);
  if ( !(unsigned int)ShouldComposeWindow((struct tagWND *const)v13, a1) )
    goto LABEL_57;
  if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 1) != 0 )
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(v13 + 16),
      *(struct tagQ **)(*(_QWORD *)(v13 + 16) + 432LL),
      0x10u,
      (struct tagWND *)v13,
      0,
      0LL,
      0LL,
      0LL);
  LOBYTE(v16) = IsDesktopWindow(v13);
  v6 = ComposeWindow(v17, v16 != 0 ? 5 : 1);
  if ( v6 >= 0 )
  {
LABEL_57:
    if ( (unsigned int)IsWindowContentProtected(v13) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 27LL) & 0x20) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)v13, 1);
      ChangeWindowTreeProtection((struct tagWND *)v13, 1u);
    }
    v14 = *(struct tagDESKTOP **)(v13 + 24);
    if ( v14 && v14 == a1 && !(unsigned int)IsWindowBeingDestroyed(v13) )
    {
      CHwndTargetProp::ReNotifyDwm(v15);
      v30 = 0LL;
      v31 = 0LL;
      if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(v13, &v30) )
      {
        v20 = v30;
        v21 = (CompositionObject *)*((_QWORD *)v30 + 3);
        if ( v21 )
        {
          if ( (int)CompositionObject::OpenDwmHandle(v21, (void **)&v31) >= 0 )
          {
            v23 = 0LL;
            v30 = v31;
            v24 = (__int64 *)*((_QWORD *)v20 + 2);
            if ( v24 )
              v23 = *v24;
            v25 = (void *)ReferenceDwmApiPort(v22);
            DwmAsyncCreateDCompositionVisualBitmapForHwnd(v25, v23, (__int64)v30);
          }
        }
      }
      if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
        || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
      {
        v30 = 0LL;
        if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v13, &v30) )
          CSwapChainProp::NotifyDwm(v30, (struct tagWND *const)v13);
      }
      v30 = 0LL;
      if ( CWindowProp::GetProp<CVisRgnTrackerProp>(v13, (__int64 *)&v30) )
      {
        CVisRgnTrackerProp::FreeTrackedRegions(v30);
        CVisRgnTrackerProp::MarkDirty(v30);
      }
    }
    goto LABEL_10;
  }
  while ( v9 <= giheLast )
  {
    if ( *(_BYTE *)(32LL * v9 + gSharedInfo[1] + 24) == 1
      && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v9), a1) )
    {
      ComposeWindow(v26, 2);
    }
    --v9;
  }
  GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEnableDwmPointerSupport(0LL, 0LL);
  GreTransferDwmStateToSpriteState(*(Gre::Base **)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1), ghdcMem);
LABEL_11:
  v10 = (struct tagWND **)*((_QWORD *)a1 + 1);
  if ( v6 < 0 )
  {
    *((_DWORD *)*v10 + 16) &= ~1u;
  }
  else
  {
    ReorderChildrenSpriteList(v10[3], 0LL);
    MagpComposeDesktop(gMagnContext, a1);
    BroadcastCompositionChange(a1);
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v6 >= 0 )
  {
    v11 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1));
    DwmAsyncShellWindowChange(v11);
  }
  return (unsigned int)v6;
}
