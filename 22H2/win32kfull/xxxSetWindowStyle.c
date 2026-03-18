/*
 * XREFs of xxxSetWindowStyle @ 0x1C00EB620
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01BCAB0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F2C68 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F2E24 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     DecVisWindows @ 0x1C00A17FC (DecVisWindows.c)
 *     IncVisWindows @ 0x1C00A1908 (IncVisWindows.c)
 *     _IsWindowVisible @ 0x1C00A79A8 (_IsWindowVisible.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x1C00A846C (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     NeedsWindowEdge @ 0x1C00A9FC4 (NeedsWindowEdge.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00B4624 (IsTopLevelOrLayeredChildWindow.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00B4970 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     xxxTurnOffCompositing @ 0x1C01BD2F0 (xxxTurnOffCompositing.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // rax
  int v5; // r12d
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  bool v11; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // ebx
  __int64 v17; // r10
  int v18; // esi
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // r14d
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // r11
  char v29; // r10
  _BYTE *v30; // r11
  char v31; // r10
  __int64 v32; // rbx
  __int64 v33; // rcx
  void *v34; // rax
  unsigned int v36; // ecx
  int v37; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int v39; // ebx
  int v40; // edx
  int v41; // edx
  __int64 v42; // r15
  int v43; // ebx
  int v44; // esi
  int v45; // ecx
  int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // [rsp+80h] [rbp+40h] BYREF
  int v50; // [rsp+88h] [rbp+48h]
  unsigned int v51; // [rsp+90h] [rbp+50h]

  v50 = a2;
  v3 = *((_QWORD *)a1 + 5);
  v49 = 0LL;
  v51 = 0;
  v5 = 0;
  v6 = a2;
  v7 = 0;
  v51 = (*(_DWORD *)(v3 + 24) >> 22) & 8;
  v8 = *((_QWORD *)a1 + 5);
  v51 = (*(_DWORD *)(v8 + 28) >> 26) & 4 | v51 & 0xFFFFFFFB;
  if ( (_DWORD)v6 == -16 )
  {
    v9 = *(_DWORD *)(v8 + 28);
    LODWORD(v49) = v9;
    if ( (*(_DWORD *)(v8 + 24) & 0x800) == 0 )
      goto LABEL_5;
    v9 |= 0x10000000u;
  }
  else
  {
    v37 = *(_DWORD *)(v8 + 24);
    LODWORD(v49) = v37 & 0xA7F77FF;
    v9 = v37 & (((~(unsigned __int8)*(_DWORD *)(v8 + 232) & 2) << 18) | 0xA7777FF);
  }
  LODWORD(v49) = v9;
LABEL_5:
  HIDWORD(v49) = a3;
  if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
  {
    xxxSendMessage(a1, 124LL, v6, &v49);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v9;
    LODWORD(v49) = v9;
  }
  v11 = IsTrayWindow(a1, 1);
  if ( (_DWORD)v6 != -16 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 4) != 0 )
      v39 = HIDWORD(v49) & 0x777FF;
    else
      v39 = HIDWORD(v49) & 0xA7F77FF;
    v40 = v49 & 8;
    HIDWORD(v49) = v39;
    if ( v40 != (v39 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v39)) )
    {
      v39 = v40 | v39 & 0xFFFFFFF7;
      HIDWORD(v49) = v39;
    }
    v41 = v39 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) << 18) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                               + 24LL)) != 0 )
    {
      if ( v41 )
      {
LABEL_50:
        v42 = *((_QWORD *)a1 + 5);
        if ( ((*(_DWORD *)(v42 + 24) & 0x200000) != 0) != ((v39 >> 21) & 1)
          || (*(_DWORD *)(v42 + 24) & 0x200000) != 0 && (v39 & 0x2000000) != 0 )
        {
          v48 = 87LL;
          goto LABEL_100;
        }
        v43 = v39 & 0x2000000;
        v44 = *(_DWORD *)(v42 + 24) & 0x2000000;
        if ( !v44 && v43 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818LL) )
          return 0LL;
        v51 = (*(_DWORD *)(v42 + 28) >> 28) & 1 | v51 & 0xFFFFFFFE;
        v51 = v51 & 0xFFFFFFFD | (v43 != 0 ? 2 : 0);
        if ( v44 )
        {
          if ( !v43 )
          {
            UnsetRedirectedWindow(a1, 2);
            SetOrClrWF(0LL, a1, 2818LL, 0LL);
          }
          goto LABEL_56;
        }
        if ( !v43 )
        {
LABEL_56:
          ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v51])(a1);
          if ( v5 )
            xxxTurnOffCompositing(a1, 1LL);
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v49) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
          v45 = HIDWORD(v49);
          v46 = v49;
          if ( (((unsigned int)v49 ^ HIDWORD(v49)) & 0x407000) != 0 )
          {
            xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
            v45 = HIDWORD(v49);
            v46 = v49;
          }
          if ( ((v46 ^ v45) & 0x80000) != 0 && v7 )
            xxxRedrawWindow(a1, 0LL, 0LL, 1157);
          LODWORD(v6) = v50;
          goto LABEL_25;
        }
        if ( (int)SetRedirectedWindow(a1, 2) >= 0 )
        {
          SetOrClrWF(1LL, a1, 2818LL, 0LL);
          v5 = 1;
          goto LABEL_56;
        }
        return 0LL;
      }
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow((__int64)a1) && !(unsigned int)IsTopLevelWindow(a1) )
        v7 = 1;
      UnsetLayeredWindow(a1, v7);
    }
    else
    {
      if ( !v41 )
        goto LABEL_50;
      if ( (int)xxxSetLayeredWindow((struct tagWND **)a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v39 = HIDWORD(v49);
    goto LABEL_50;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v14 = v13 & CurrentProcessWin32Process;
  }
  if ( v14 != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
  {
    v13 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( *(_WORD *)(gpsi + 870LL) == *(_WORD *)(v13 + 2) && (v49 & 0x20) != 0 && (v49 & 0x2000000000LL) == 0 )
    {
      v48 = 5LL;
LABEL_100:
      UserSetLastError(v48);
      return 0LL;
    }
  }
  if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v13) )
  {
    v15 |= 0x4000000u;
    HIDWORD(v49) = v15;
  }
  v16 = 1;
  if ( (((unsigned int)v49 ^ v15) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    v15 = HIDWORD(v49);
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 31) & 0x60) == 0x20 && (*(_BYTE *)(v17 + 16) & 8) == 0 && (v15 & 0x20000000) == 0 )
    HIDWORD(v49) = v15 | 0x20000000;
  v18 = VisWindow(a1);
  if ( !v11 || !(unsigned int)IsWindowVisible((__int64)a1) )
    v16 = 0;
  *(_DWORD *)(v20 + 28) = v19;
  v21 = *((_QWORD *)a1 + 5);
  v22 = *(_DWORD *)(v21 + 24);
  if ( (*(_DWORD *)(v21 + 28) & 0x10000000) != 0 )
    v23 = v22 | 0x800;
  else
    v23 = v22 & 0xFFFFF7FF;
  *(_DWORD *)(v21 + 24) = v23;
  v24 = VisWindow(a1);
  v26 = *((_QWORD *)a1 + 5);
  v51 = v51 & 0xFFFFFFFE | (v25 >> 28) & 1;
  v27 = *((_QWORD *)a1 + 5);
  v51 = *(_BYTE *)(v26 + 27) & 2 | v51 & 0xFFFFFFFD;
  if ( (v28 == 64) != ((*(_BYTE *)(v27 + 31) & 0xC0) == 64) )
  {
    *(_QWORD *)(v27 + 320) = 0LL;
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) &= ~1u;
    UnlockWndMenuWorker(a1, 0);
  }
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v51])(a1);
  if ( v18 != v24 )
  {
    if ( v18 )
    {
      DecVisWindows(a1);
    }
    else
    {
      IncVisWindows(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1, 0);
    }
  }
  if ( IsTrayWindow(a1, 1) && v16 != (unsigned int)IsWindowVisible((__int64)a1) )
  {
    v36 = 22;
    if ( !v16 )
      v36 = 17;
    PostIAMShellHookMessage(v36);
  }
LABEL_25:
  if ( (unsigned int)NeedsWindowEdge(
                       *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                       *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL),
                       *(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) )
    v31 = v29 | 1;
  else
    v31 = v29 & 0xFE;
  *v30 = v31;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    DirtyVisRgnTrackers(a1);
    v32 = *(_QWORD *)a1;
    v34 = (void *)ReferenceDwmApiPort(v33);
    DwmAsyncChildStyleChange(v34, v32, v6, SHIDWORD(v49));
    WindowMargins::CheckForChanges(a1, 1LL);
  }
  if ( v11 == IsTrayWindow(a1, 1) )
    goto LABEL_30;
  if ( v11 )
  {
    v47 = 18;
  }
  else
  {
    if ( !(unsigned int)IsWindowVisible((__int64)a1) )
      goto LABEL_30;
    v47 = 17;
  }
  PostIAMShellHookMessage(v47);
LABEL_30:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage(a1, 125LL, (int)v6, &v49);
  return (unsigned int)v49;
}
