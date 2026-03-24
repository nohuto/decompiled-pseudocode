/*
 * XREFs of xxxSetWindowStyle @ 0x1C005E1E0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058B0 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E7B10 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C020902C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0209198 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     IncVisWindows @ 0x1C004BF54 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C004C300 (ComposeWindowIfNeeded.c)
 *     DecVisWindows @ 0x1C004C78C (DecVisWindows.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C004E71C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C004E96C (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C004E9AC (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006F954 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     GetStyleWindow @ 0x1C0071560 (GetStyleWindow.c)
 *     xxxRedrawWindow @ 0x1C0072354 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0072764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetRedirectedWindow @ 0x1C00BD1BC (SetRedirectedWindow.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     UnsetLayeredWindow @ 0x1C00EF178 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00EF7E8 (UnsetRedirectedWindow.c)
 *     _IsWindowVisible @ 0x1C01260E4 (_IsWindowVisible.c)
 *     VerifyChildMenu @ 0x1C0169ED4 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01D7734 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01E85B0 (xxxTurnOffCompositing.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r13d
  int v5; // r14d
  __int64 v6; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v12; // rcx
  int v13; // edi
  __int64 CurrentProcessWin32Process; // rax
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r11
  char v22; // dl
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r10
  struct tagWND *i; // rdx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // r8
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // edi
  struct tagWND *j; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rcx
  unsigned int v43; // edi
  int v44; // edx
  int v45; // edx
  __int64 v46; // r15
  int v47; // edi
  int v48; // esi
  int v49; // ecx
  int v50; // edx
  __int64 v51; // rdx
  int v52; // r8d
  int v53; // eax
  int v54; // eax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v57; // rax
  struct _LIST_ENTRY *v58; // rdi
  char Blink_high; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  char v64; // si
  __int64 v65; // rcx
  struct tagWND *v66; // rax
  __int64 v67; // rdx
  __int64 Prop; // rax
  struct _LIST_ENTRY *v69; // rax
  __int64 k; // rdi
  __int64 m; // rdi
  int v72; // esi
  __int64 v73; // r14
  void *v74; // rdi
  int v75; // r14d
  int v76; // eax
  unsigned int v77; // edx
  int v78; // [rsp+40h] [rbp-39h]
  unsigned int v79; // [rsp+40h] [rbp-39h]
  unsigned int v80; // [rsp+40h] [rbp-39h]
  __int64 v81; // [rsp+48h] [rbp-31h] BYREF
  int v82; // [rsp+50h] [rbp-29h]
  int v83; // [rsp+54h] [rbp-25h]
  CVisRgnTrackerProp *v84; // [rsp+58h] [rbp-21h] BYREF
  int v85; // [rsp+60h] [rbp-19h] BYREF
  __int16 v86; // [rsp+64h] [rbp-15h]
  __int128 v87; // [rsp+66h] [rbp-13h]
  __int128 v88; // [rsp+76h] [rbp-3h]
  __int16 v89; // [rsp+86h] [rbp+Dh]
  int v90; // [rsp+88h] [rbp+Fh]
  __int64 v91; // [rsp+8Ch] [rbp+13h]
  int v92; // [rsp+94h] [rbp+1Bh]
  int v93; // [rsp+98h] [rbp+1Fh]

  v3 = a2;
  v81 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = *((_QWORD *)a1 + 5);
  v82 = v3;
  v8 = *((_QWORD *)a1 + 5);
  v78 = (*(_DWORD *)(v8 + 28) >> 26) & 4 | (*(_DWORD *)(v6 + 24) >> 22) & 8;
  if ( (_DWORD)v3 == -16 )
  {
    v9 = *(_DWORD *)(v8 + 28);
    LODWORD(v81) = v9;
    if ( (*(_DWORD *)(v8 + 24) & 0x800) == 0 )
      goto LABEL_6;
    v9 |= 0x10000000u;
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 24);
    LODWORD(v81) = v10 & 0xA7F77FF;
    v9 = v10 & (((~(unsigned __int8)*(_DWORD *)(v8 + 232) & 0x20) << 14) | 0xA7777FF);
  }
  LODWORD(v81) = v9;
LABEL_6:
  HIDWORD(v81) = a3;
  if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
  {
    xxxSendMessage((unsigned __int64)a1, 0x7Cu, v3, (struct _LARGE_STRING *)&v81);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v9;
    LODWORD(v81) = v9;
  }
  v83 = IsTrayWindow(a1);
  v13 = v83;
  if ( (_DWORD)v3 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
      v43 = HIDWORD(v81) & 0x777FF;
    else
      v43 = HIDWORD(v81) & 0xA7F77FF;
    v44 = v81 & 8;
    HIDWORD(v81) = v43;
    if ( v44 != (v43 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v43)) )
    {
      v43 = v44 | v43 & 0xFFFFFFF7;
      HIDWORD(v81) = v43;
    }
    v45 = v43 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) << 14) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                                  + 24LL)) != 0 )
    {
      if ( v45 )
        goto LABEL_86;
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow(a1) )
        v5 = 1;
      UnsetLayeredWindow(a1);
    }
    else
    {
      if ( !v45 )
        goto LABEL_86;
      if ( (int)xxxSetLayeredWindow(a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v43 = HIDWORD(v81);
LABEL_86:
    v46 = *((_QWORD *)a1 + 5);
    if ( ((*(_DWORD *)(v46 + 24) & 0x200000) != 0) != ((v43 >> 21) & 1)
      || (*(_DWORD *)(v46 + 24) & 0x200000) != 0 && (v43 & 0x2000000) != 0 )
    {
      v16 = 87LL;
      goto LABEL_161;
    }
    v47 = v43 & 0x2000000;
    v48 = *(_DWORD *)(v46 + 24) & 0x2000000;
    if ( !v48 && v47 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818LL) )
      return 0LL;
    v80 = (*(_DWORD *)(v46 + 28) >> 28) & 1 | v78 & 0xFFFFFFFC | (v47 != 0 ? 2 : 0);
    if ( v48 )
    {
      if ( !v47 )
      {
        UnsetRedirectedWindow(a1);
        ClrWFNoDwmNotify(a1, 2818LL);
      }
      goto LABEL_98;
    }
    if ( !v47 )
    {
LABEL_98:
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v80])(a1);
      if ( v4 )
        xxxTurnOffCompositing(a1, 1LL);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v81) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
      v49 = HIDWORD(v81);
      v50 = v81;
      if ( (((unsigned int)v81 ^ HIDWORD(v81)) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0, 0, 55);
        v49 = HIDWORD(v81);
        v50 = v81;
      }
      if ( ((v50 ^ v49) & 0x80000) != 0 && v5 )
        xxxRedrawWindow(a1);
      goto LABEL_105;
    }
    if ( (int)SetRedirectedWindow(a1) >= 0 )
    {
      SetOrClrWF(1, (__int64)a1, 0xB02u, 0);
      v4 = 1;
      goto LABEL_98;
    }
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v15 = HIDWORD(v81);
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
    && *(_WORD *)(gpsi + 870LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
    && (v81 & 0x20) != 0
    && (v81 & 0x2000000000LL) == 0 )
  {
    v16 = 5LL;
LABEL_161:
    UserSetLastError(v16);
    return 0LL;
  }
  v17 = *((_QWORD *)a1 + 3);
  v18 = 0LL;
  v19 = *((_QWORD *)a1 + 13);
  if ( v17 )
  {
    v20 = *(_QWORD *)(v17 + 8);
    if ( v20 )
      v18 = *(_QWORD *)(v20 + 24);
  }
  if ( v19 == v18 )
  {
    v15 = HIDWORD(v81) | 0x4000000;
    HIDWORD(v81) |= 0x4000000u;
  }
  if ( (((unsigned int)v81 ^ v15) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
    v19 = *((_QWORD *)a1 + 13);
    v15 = HIDWORD(v81);
  }
  v21 = *((_QWORD *)a1 + 5);
  v22 = *(_BYTE *)(v21 + 31);
  if ( (v22 & 0x40) == 0 && (v22 & 0x20) != 0 && (*(_BYTE *)(v21 + 16) & 8) == 0 && (v15 & 0x20000000) == 0 )
  {
    v15 |= 0x20000000u;
    HIDWORD(v81) = v15;
  }
  if ( v19 )
  {
    v23 = *((_QWORD *)a1 + 3);
    v24 = 0LL;
    if ( v23 )
    {
      v25 = *(_QWORD *)(v23 + 8);
      if ( v25 )
        v24 = *(_QWORD *)(v25 + 24);
    }
    if ( v19 == v24 && (*(_DWORD *)(v21 + 28) & 0x30000000) == 0x10000000 )
      v5 = 1;
  }
  if ( v13 )
  {
    for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      v27 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v27 + 31) & 0x10) == 0 && (*(_BYTE *)(v27 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v27 + 42) & 0x2FFF) == 0x29D )
      {
        v28 = 1;
        goto LABEL_43;
      }
    }
  }
  v28 = 0;
LABEL_43:
  *(_DWORD *)(v21 + 28) = v15;
  v29 = *((_QWORD *)a1 + 5);
  v30 = *(_DWORD *)(v29 + 24);
  if ( (*(_DWORD *)(v29 + 28) & 0x10000000) != 0 )
    v31 = v30 | 0x800;
  else
    v31 = v30 & 0xFFFFF7FF;
  *(_DWORD *)(v29 + 24) = v31;
  v32 = *((_QWORD *)a1 + 13);
  v33 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  if ( !v32 )
    goto LABEL_52;
  v34 = *((_QWORD *)a1 + 3);
  v35 = 0LL;
  if ( v34 )
  {
    v36 = *(_QWORD *)(v34 + 8);
    if ( v36 )
      v35 = *(_QWORD *)(v36 + 24);
  }
  if ( v32 != v35 || (v37 = 1, (v33 & 0x30000000) != 0x10000000) )
LABEL_52:
    v37 = 0;
  v79 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2 | v78 & 0xFFFFFFFC | (v33 >> 28) & 1;
  VerifyChildMenu(a1);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v79])(a1);
  if ( v5 != v37 )
  {
    if ( v5 )
    {
      DecVisWindows((__int64)a1);
    }
    else
    {
      IncVisWindows((__int64)a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded((__int64)a1, 0);
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 13) )
    {
      v39 = *((_QWORD *)j + 5);
      if ( (*(_BYTE *)(v39 + 31) & 0x10) == 0 && (*(_BYTE *)(v39 + 25) & 8) == 0 )
      {
        v40 = 0;
        goto LABEL_66;
      }
      if ( (*(_WORD *)(v39 + 42) & 0x2FFF) == 0x29D )
        break;
    }
    v40 = 1;
LABEL_66:
    if ( v28 != v40 )
    {
      v41 = *(_QWORD *)a1;
      v42 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v28 )
        PostIAMShellHookMessageEx(v42, 0x16u, v41);
      else
        PostIAMShellHookMessageEx(v42, 0x11u, v41);
    }
  }
LABEL_105:
  v51 = *((_QWORD *)a1 + 5);
  v52 = *(_DWORD *)(v51 + 24);
  v53 = *(_DWORD *)(v51 + 28);
  if ( (v52 & 1) != 0
    || (v52 & 0x20000) == 0
    && ((v53 & 0x40000) != 0
     || (v54 = v53 & 0xC00000, v54 == 0x400000)
     || v54 == 12582912 && (*(_BYTE *)(v51 + 21) & 2) != 0) )
  {
    *(_BYTE *)(v51 + 25) = BYTE1(v52) | 1;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_150;
  Flink = (struct _LIST_ENTRY *)gptiCurrent;
  v57 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v57 )
  {
    Flink = **(struct _LIST_ENTRY ***)(v57 + 8);
    if ( ((__int64)Flink[4].Flink & 1) != 0 )
    {
      Flink = (struct _LIST_ENTRY *)*(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( ((unsigned __int8)Flink & 0x10) != 0 )
      {
        v58 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 13);
        Flink = v58;
        if ( v58 )
        {
          while ( 1 )
          {
            Blink = Flink[2].Blink;
            Blink_high = HIBYTE(Blink[1].Blink);
            if ( (Blink_high & 0x10) == 0 || (Blink_high & 0x20) != 0 && Flink != v58 )
              break;
            if ( (WORD1(Blink[2].Blink) & 0x2FFF) != 0x29D )
            {
              Flink = Flink[6].Blink;
              if ( Flink )
                continue;
            }
            goto LABEL_123;
          }
        }
        else
        {
LABEL_123:
          EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, v58->Flink);
          v60 = *((_QWORD *)a1 + 13);
          if ( !v60 )
            goto LABEL_129;
          v61 = *((_QWORD *)a1 + 3);
          v62 = 0LL;
          if ( v61 )
          {
            v63 = *(_QWORD *)(v61 + 8);
            if ( v63 )
              v62 = *(_QWORD *)(v63 + 24);
          }
          if ( v60 == v62 )
          {
            v64 = 1;
          }
          else
          {
LABEL_129:
            v65 = *((_QWORD *)a1 + 3);
            v64 = 0;
            v66 = 0LL;
            if ( v65 )
            {
              v67 = *(_QWORD *)(v65 + 8);
              if ( v67 )
                v66 = *(struct tagWND **)(v67 + 24);
            }
            if ( a1 != v66 && (HIBYTE(v58[2].Blink[1].Blink) & 2) != 0 )
            {
              v84 = 0LL;
              if ( CWindowProp::GetProp<CVisRgnTrackerProp>((__int64)v58, (__int64 *)&v84) )
                CVisRgnTrackerProp::MarkDirty(v84);
            }
          }
          Prop = RealGetProp(*((_QWORD *)a1 + 18), LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
          if ( Prop && !*(_BYTE *)(Prop + 65) )
          {
            *(_BYTE *)(Prop + 65) = 1;
            Blink = &CVisRgnTrackerProp::s_DirtyList;
            Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v69 = (struct _LIST_ENTRY *)(Prop + 16);
            if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
              __fastfail(3u);
            v69->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v69->Blink = &CVisRgnTrackerProp::s_DirtyList;
            Flink->Blink = v69;
            CVisRgnTrackerProp::s_DirtyList.Flink = v69;
          }
          for ( k = *((_QWORD *)a1 + 14); k; k = *(_QWORD *)(k + 88) )
            MarkDirtyWorker((struct tagWND *)k);
          if ( !v64 )
          {
            for ( m = *((_QWORD *)a1 + 11); m; m = *(_QWORD *)(m + 88) )
            {
              Flink = (struct _LIST_ENTRY *)*(unsigned __int8 *)(*(_QWORD *)(m + 40) + 31LL);
              LOBYTE(Flink) = (unsigned __int8)Flink & 0x14;
              if ( (_BYTE)Flink == 20 )
                MarkDirtyWorker((struct tagWND *)m);
            }
          }
        }
      }
    }
  }
  v72 = HIDWORD(v81);
  v73 = *(_QWORD *)a1;
  v74 = (void *)ReferenceDwmApiPort(Flink, Blink);
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( v74 )
  {
    v91 = v73;
    v75 = v82;
    v92 = v82;
    v89 = 0;
    v86 = 0x8000;
    v87 = 0LL;
    v85 = 3932180;
    v88 = 0LL;
    v90 = 1073741846;
    v93 = v72;
    LpcRequestPort(v74, &v85);
    ObfDereferenceObject(v74);
  }
  else
  {
LABEL_150:
    v75 = v82;
  }
  v76 = IsTrayWindow(a1);
  if ( v83 == v76 )
    goto LABEL_157;
  if ( v83 )
  {
    v77 = 18;
LABEL_156:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v77, *(_QWORD *)a1);
    goto LABEL_157;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v77 = 17;
    goto LABEL_156;
  }
LABEL_157:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage((unsigned __int64)a1, 0x7Du, v75, (struct _LARGE_STRING *)&v81);
  return (unsigned int)v81;
}
