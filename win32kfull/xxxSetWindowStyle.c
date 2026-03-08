/*
 * XREFs of xxxSetWindowStyle @ 0x1C002DD90
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01BDC50 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F3E58 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F4014 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     DecVisWindows @ 0x1C002A17C (DecVisWindows.c)
 *     _IsWindowVisible @ 0x1C002A980 (_IsWindowVisible.c)
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C002D850 (ComposeWindowIfNeeded.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x1C002E44C (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     IncVisWindows @ 0x1C002E484 (IncVisWindows.c)
 *     NeedsWindowEdge @ 0x1C002E60C (NeedsWindowEdge.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     GetStyleWindow @ 0x1C0039020 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00EC5C8 (IsTopLevelOrLayeredChildWindow.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00EC914 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     xxxTurnOffCompositing @ 0x1C01BE490 (xxxTurnOffCompositing.c)
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
  char v11; // r13
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
  void *v32; // rax
  __int64 v34; // rcx
  int v35; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int v37; // ebx
  int v38; // edx
  int v39; // edx
  __int64 v40; // r15
  int v41; // ebx
  int v42; // esi
  int v43; // ecx
  int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // [rsp+80h] [rbp+40h] BYREF
  int v48; // [rsp+88h] [rbp+48h]
  unsigned int v49; // [rsp+90h] [rbp+50h]

  v48 = a2;
  v3 = *((_QWORD *)a1 + 5);
  v47 = 0LL;
  v49 = 0;
  v5 = 0;
  v6 = a2;
  v7 = 0;
  v49 = (*(_DWORD *)(v3 + 24) >> 22) & 8;
  v8 = *((_QWORD *)a1 + 5);
  v49 = (*(_DWORD *)(v8 + 28) >> 26) & 4 | v49 & 0xFFFFFFFB;
  if ( (_DWORD)v6 == -16 )
  {
    v9 = *(_DWORD *)(v8 + 28);
    LODWORD(v47) = v9;
    if ( (*(_DWORD *)(v8 + 24) & 0x800) == 0 )
      goto LABEL_5;
    v9 |= 0x10000000u;
  }
  else
  {
    v35 = *(_DWORD *)(v8 + 24);
    LODWORD(v47) = v35 & 0xA7F77FF;
    v9 = v35 & (((~(unsigned __int8)*(_DWORD *)(v8 + 232) & 2) << 18) | 0xA7777FF);
  }
  LODWORD(v47) = v9;
LABEL_5:
  HIDWORD(v47) = a3;
  if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
  {
    xxxSendMessage(a1, 124LL, v6, &v47);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v9;
    LODWORD(v47) = v9;
  }
  v11 = IsTrayWindow(a1, 1LL);
  if ( (_DWORD)v6 != -16 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 4) != 0 )
      v37 = HIDWORD(v47) & 0x777FF;
    else
      v37 = HIDWORD(v47) & 0xA7F77FF;
    v38 = v47 & 8;
    HIDWORD(v47) = v37;
    if ( v38 != (v37 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v37)) )
    {
      v37 = v38 | v37 & 0xFFFFFFF7;
      HIDWORD(v47) = v37;
    }
    v39 = v37 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) << 18) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                               + 24LL)) != 0 )
    {
      if ( v39 )
      {
LABEL_50:
        v40 = *((_QWORD *)a1 + 5);
        if ( ((*(_DWORD *)(v40 + 24) & 0x200000) != 0) != ((v37 >> 21) & 1)
          || (*(_DWORD *)(v40 + 24) & 0x200000) != 0 && (v37 & 0x2000000) != 0 )
        {
          v46 = 87LL;
          goto LABEL_100;
        }
        v41 = v37 & 0x2000000;
        v42 = *(_DWORD *)(v40 + 24) & 0x2000000;
        if ( !v42 && v41 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818LL) )
          return 0LL;
        v49 = (*(_DWORD *)(v40 + 28) >> 28) & 1 | v49 & 0xFFFFFFFE;
        v49 = v49 & 0xFFFFFFFD | (v41 != 0 ? 2 : 0);
        if ( v42 )
        {
          if ( !v41 )
          {
            UnsetRedirectedWindow(a1, 2);
            SetOrClrWF(0LL, a1, 2818LL, 0LL);
          }
          goto LABEL_56;
        }
        if ( !v41 )
        {
LABEL_56:
          ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v49])(a1);
          if ( v5 )
            xxxTurnOffCompositing(a1, 1LL);
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v47) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
          v43 = HIDWORD(v47);
          v44 = v47;
          if ( (((unsigned int)v47 ^ HIDWORD(v47)) & 0x407000) != 0 )
          {
            xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
            v43 = HIDWORD(v47);
            v44 = v47;
          }
          if ( ((v44 ^ v43) & 0x80000) != 0 && v7 )
            xxxRedrawWindow(a1);
          LODWORD(v6) = v48;
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
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow(a1) )
        v7 = 1;
      UnsetLayeredWindow((__int64)a1, v7);
    }
    else
    {
      if ( !v39 )
        goto LABEL_50;
      if ( (int)xxxSetLayeredWindow((struct tagWND **)a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v37 = HIDWORD(v47);
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
    if ( *(_WORD *)(gpsi + 870LL) == *(_WORD *)(v13 + 2) && (v47 & 0x20) != 0 && (v47 & 0x2000000000LL) == 0 )
    {
      v46 = 5LL;
LABEL_100:
      UserSetLastError(v46);
      return 0LL;
    }
  }
  if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v13) )
  {
    v15 |= 0x4000000u;
    HIDWORD(v47) = v15;
  }
  v16 = 1;
  if ( (((unsigned int)v47 ^ v15) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
    v15 = HIDWORD(v47);
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 31) & 0x60) == 0x20 && (*(_BYTE *)(v17 + 16) & 8) == 0 && (v15 & 0x20000000) == 0 )
    HIDWORD(v47) = v15 | 0x20000000;
  v18 = VisWindow(a1, *(_DWORD *)(v17 + 28));
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
  v24 = VisWindow(a1, *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL));
  v26 = *((_QWORD *)a1 + 5);
  v49 = v49 & 0xFFFFFFFE | (v25 >> 28) & 1;
  v27 = *((_QWORD *)a1 + 5);
  v49 = *(_BYTE *)(v26 + 27) & 2 | v49 & 0xFFFFFFFD;
  if ( (v28 == 64) != ((*(_BYTE *)(v27 + 31) & 0xC0) == 64) )
  {
    *(_QWORD *)(v27 + 320) = 0LL;
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) &= ~1u;
    UnlockWndMenuWorker(a1, 0);
  }
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v49])(a1);
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
  if ( (unsigned __int8)IsTrayWindow(a1, 1LL) && v16 != (unsigned int)IsWindowVisible((__int64)a1) )
  {
    v34 = 22LL;
    if ( !v16 )
      v34 = 17LL;
    PostIAMShellHookMessage(v34, *(_QWORD *)a1);
  }
LABEL_25:
  if ( (unsigned int)NeedsWindowEdge(
                       *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                       *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
                       *(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) )
    v31 = v29 | 1;
  else
    v31 = v29 & 0xFE;
  *v30 = v31;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    DirtyVisRgnTrackers(a1);
    v32 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v32);
    WindowMargins::CheckForChanges(a1, 1LL);
  }
  if ( v11 == (unsigned __int8)IsTrayWindow(a1, 1LL) )
    goto LABEL_30;
  if ( v11 )
  {
    v45 = 18LL;
  }
  else
  {
    if ( !(unsigned int)IsWindowVisible((__int64)a1) )
      goto LABEL_30;
    v45 = 17LL;
  }
  PostIAMShellHookMessage(v45, *(_QWORD *)a1);
LABEL_30:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage(a1, 125LL, (int)v6, &v47);
  return (unsigned int)v47;
}
