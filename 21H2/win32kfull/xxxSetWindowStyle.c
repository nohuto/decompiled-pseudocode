/*
 * XREFs of xxxSetWindowStyle @ 0x1C0050020
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E22A0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0210694 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0210798 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     DecVisWindows @ 0x1C001FD7C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020088 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C006A698 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C006B80C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C006C39C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00903C4 (IsTopLevelOrLayeredChildWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A5180 (PostIAMShellHookMessageEx.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C010E9D4 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _IsWindowVisible @ 0x1C0111098 (_IsWindowVisible.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     xxxTurnOffCompositing @ 0x1C01E2C78 (xxxTurnOffCompositing.c)
 *     ?Is31TrayWindow@@YAHPEAUtagWND@@@Z @ 0x1C0238924 (-Is31TrayWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v5; // r13d
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11; // r8
  __int64 v12; // rax
  _BYTE *v13; // rdx
  bool v14; // di
  __int64 v15; // rax
  char v16; // al
  __int64 CurrentProcessWin32Process; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r10
  char v25; // cl
  char v26; // r11
  char v27; // r11
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // esi
  struct tagWND *i; // rdx
  __int64 v32; // rcx
  int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE *v44; // rdx
  __int64 v45; // rax
  char v46; // al
  struct tagWND *j; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 ThreadWin32Thread; // rax
  unsigned int v53; // edi
  int v54; // edx
  int v55; // r8d
  __int64 v56; // r14
  int v57; // edi
  int v58; // esi
  int v59; // ecx
  int v60; // edx
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  int v66; // ecx
  __int64 v67; // rax
  _QWORD *v68; // rdi
  _QWORD *v69; // rdx
  __int64 v70; // rcx
  char v71; // al
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  char v75; // r14
  __int64 v76; // rcx
  struct tagWND *v77; // rax
  __int64 v78; // rdx
  __int128 *v79; // rdi
  __int64 DeviceObject_low; // r15
  __int64 v81; // xmm1_8
  int v82; // esi
  tagObjLock **v83; // rdi
  __int64 Prop; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v86; // rax
  struct tagWND *k; // rdi
  struct tagWND *m; // rdi
  __int64 v89; // rsi
  void *v90; // rdi
  int v91; // esi
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rcx
  _BYTE *v95; // rdx
  char v96; // al
  __int64 v97; // rax
  char v98; // al
  __int64 v99; // rdx
  char v100; // [rsp+40h] [rbp-89h]
  int v101; // [rsp+44h] [rbp-85h]
  unsigned int v102; // [rsp+44h] [rbp-85h]
  unsigned int v103; // [rsp+44h] [rbp-85h]
  __int64 v104; // [rsp+48h] [rbp-81h] BYREF
  int v105; // [rsp+50h] [rbp-79h]
  CVisRgnTrackerProp *v106; // [rsp+58h] [rbp-71h] BYREF
  int v107; // [rsp+60h] [rbp-69h] BYREF
  __int16 v108; // [rsp+64h] [rbp-65h]
  __int128 v109; // [rsp+66h] [rbp-63h]
  __int128 v110; // [rsp+76h] [rbp-53h]
  __int16 v111; // [rsp+86h] [rbp-43h]
  int v112; // [rsp+88h] [rbp-41h]
  __int64 v113; // [rsp+8Ch] [rbp-3Dh]
  int v114; // [rsp+94h] [rbp-35h]
  int v115; // [rsp+98h] [rbp-31h]
  __int128 v116; // [rsp+A0h] [rbp-29h]
  __int64 v117; // [rsp+B0h] [rbp-19h]
  __int64 v118; // [rsp+B8h] [rbp-11h]
  char v119; // [rsp+C0h] [rbp-9h]
  __int128 v120; // [rsp+C8h] [rbp-1h] BYREF
  char v121; // [rsp+D8h] [rbp+Fh]
  char v122; // [rsp+E0h] [rbp+17h]

  v3 = a2;
  v104 = 0LL;
  v5 = 0;
  v6 = 0;
  v105 = v3;
  v7 = *((_QWORD *)a1 + 5);
  v8 = (*(_DWORD *)(v7 + 24) >> 22) & 8 | (*(_DWORD *)(v7 + 28) >> 26) & 4u;
  v101 = (*(_DWORD *)(v7 + 24) >> 22) & 8 | (*(_DWORD *)(v7 + 28) >> 26) & 4;
  if ( (_DWORD)v3 != -16 )
  {
    v8 = *(unsigned int *)(v7 + 24);
    LODWORD(v104) = *(_DWORD *)(v7 + 24) & 0xA7F77FF;
    v9 = v8 & (((~(unsigned __int8)*(_DWORD *)(v7 + 232) & 2) << 18) | 0xA7777FF);
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(v7 + 28);
  LODWORD(v104) = v9;
  if ( (*(_DWORD *)(v7 + 24) & 0x800) != 0 )
  {
    v9 |= 0x10000000u;
LABEL_5:
    LODWORD(v104) = v9;
  }
  HIDWORD(v104) = a3;
  if ( (*(_BYTE *)(v7 + 21) & 2) != 0 )
  {
    xxxSendMessage(a1, 124LL, v3, &v104);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v9;
    LODWORD(v104) = v9;
  }
  v11 = *((_QWORD *)a1 + 3);
  if ( !v11 )
    goto LABEL_30;
  v8 = gpsi;
  if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0 )
    goto LABEL_30;
  v8 = (unsigned int)(*(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_DWORD *)(gptiCurrent + 680LL));
  if ( ((*(_WORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_WORD *)(gptiCurrent + 680LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v11 + 8) + 192LL) )
  {
    goto LABEL_30;
  }
  v12 = *((_QWORD *)a1 + 13);
  if ( !v12 )
    goto LABEL_30;
  v8 = *(_QWORD *)(v11 + 8);
  if ( !v8 || v12 != *(_QWORD *)(v8 + 24) )
    goto LABEL_30;
  v13 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v13[26] & 4) != 0 )
  {
    v14 = 1;
    goto LABEL_31;
  }
  if ( (char)v13[24] < 0 || (v13[27] & 8) != 0 )
    goto LABEL_30;
  if ( (v13[21] & 2) != 0 )
  {
    v15 = *((_QWORD *)a1 + 15);
    if ( !v15 )
    {
      v14 = 1;
      goto LABEL_31;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 21LL) & 2) != 0 )
      goto LABEL_30;
  }
  if ( (v13[20] & 0x40) != 0 || (v16 = v13[30], (v16 & 0xA) != 0) && ((v16 & 0xC0) != 0 || (v13[31] & 0x20) != 0) )
    v14 = (unsigned int)Is31TrayWindow(a1) != 0;
  else
LABEL_30:
    v14 = 0;
LABEL_31:
  v100 = v14;
  if ( (_DWORD)v3 != -16 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 4) != 0 )
      v53 = HIDWORD(v104) & 0x777FF;
    else
      v53 = HIDWORD(v104) & 0xA7F77FF;
    v54 = v104 & 8;
    HIDWORD(v104) = v53;
    if ( v54 != (v53 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v53)) )
    {
      v53 = v54 | v53 & 0xFFFFFFF7;
      HIDWORD(v104) = v53;
    }
    v55 = v53 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) << 18) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                               + 24LL)) != 0 )
    {
      if ( v55 )
        goto LABEL_125;
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow(a1) )
        v6 = 1;
      UnsetLayeredWindow(a1);
    }
    else
    {
      if ( !v55 )
        goto LABEL_125;
      if ( (int)xxxSetLayeredWindow(a1) < 0 )
        return 0LL;
    }
    v53 = HIDWORD(v104);
LABEL_125:
    v56 = *((_QWORD *)a1 + 5);
    if ( ((*(_DWORD *)(v56 + 24) & 0x200000) != 0) != ((v53 >> 21) & 1)
      || (*(_DWORD *)(v56 + 24) & 0x200000) != 0 && (v53 & 0x2000000) != 0 )
    {
      v19 = 87LL;
      goto LABEL_236;
    }
    v57 = v53 & 0x2000000;
    v58 = *(_DWORD *)(v56 + 24) & 0x2000000;
    if ( !v58 && v57 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
      return 0LL;
    v103 = v101 & 0xFFFFFFFC | (*(_DWORD *)(v56 + 28) >> 28) & 1 | (v57 != 0 ? 2 : 0);
    if ( v58 )
    {
      if ( !v57 )
      {
        UnsetRedirectedWindow(a1);
        SetOrClrWF(0LL, a1, 2818LL, 0LL);
      }
      goto LABEL_137;
    }
    if ( !v57 )
    {
LABEL_137:
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v103])(a1);
      if ( v5 )
        xxxTurnOffCompositing(a1, 1LL);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v104) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
      v59 = HIDWORD(v104);
      v60 = v104;
      if ( (((unsigned int)v104 ^ HIDWORD(v104)) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
        v59 = HIDWORD(v104);
        v60 = v104;
      }
      if ( ((v60 ^ v59) & 0x80000) != 0 && v6 )
        xxxRedrawWindow(a1, 0LL, 0LL, 1157);
      goto LABEL_144;
    }
    if ( (int)SetRedirectedWindow(a1, 2) >= 0 )
    {
      SetOrClrWF(1LL, a1, 2818LL, 0LL);
      v5 = 1;
      goto LABEL_137;
    }
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v18 = HIDWORD(v104);
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
    && *(_WORD *)(gpsi + 870LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
    && (v104 & 0x20) != 0
    && (v104 & 0x2000000000LL) == 0 )
  {
    v19 = 5LL;
LABEL_236:
    UserSetLastError(v19);
    return 0LL;
  }
  v20 = *((_QWORD *)a1 + 3);
  v21 = 0LL;
  if ( v20 )
  {
    v22 = *(_QWORD *)(v20 + 8);
    if ( v22 )
      v21 = *(_QWORD *)(v22 + 24);
  }
  v23 = *((_QWORD *)a1 + 13);
  if ( v23 == v21 )
  {
    v18 = HIDWORD(v104) | 0x4000000;
    HIDWORD(v104) |= 0x4000000u;
  }
  if ( (((unsigned int)v104 ^ v18) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    v23 = *((_QWORD *)a1 + 13);
    v18 = HIDWORD(v104);
  }
  v24 = *((_QWORD *)a1 + 5);
  v25 = *(_BYTE *)(v24 + 31);
  v26 = v25;
  if ( (v25 & 0x40) == 0 && (v25 & 0x20) != 0 && (*(_BYTE *)(v24 + 16) & 8) == 0 && (v18 & 0x20000000) == 0 )
  {
    v18 |= 0x20000000u;
    HIDWORD(v104) = v18;
    v26 = *(_BYTE *)(v24 + 31);
  }
  v27 = v26 & 0xC0;
  if ( !v23
    || (v28 = *((_QWORD *)a1 + 3)) == 0
    || (v29 = *(_QWORD *)(v28 + 8)) == 0
    || v23 != *(_QWORD *)(v29 + 24)
    || (v30 = 1, (*(_DWORD *)(v24 + 28) & 0x30000000) != 0x10000000) )
  {
    v30 = 0;
  }
  if ( v14 )
  {
    for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      v32 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v32 + 31) & 0x10) == 0 && (*(_BYTE *)(v32 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v32 + 42) & 0x2FFF) == 0x29D )
      {
        v33 = 1;
        goto LABEL_63;
      }
    }
  }
  v33 = 0;
LABEL_63:
  *(_DWORD *)(v24 + 28) = v18;
  v34 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v34 + 28) & 0x10000000) != 0 )
    *(_DWORD *)(v34 + 24) |= 0x800u;
  else
    *(_DWORD *)(v34 + 24) &= ~0x800u;
  v35 = *((_QWORD *)a1 + 13);
  v36 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  if ( !v35
    || (v37 = *((_QWORD *)a1 + 3)) == 0
    || (v38 = *(_QWORD *)(v37 + 8)) == 0
    || v35 != *(_QWORD *)(v38 + 24)
    || (v39 = 1, (v36 & 0x30000000) != 0x10000000) )
  {
    v39 = 0;
  }
  v40 = *((_QWORD *)a1 + 5);
  v102 = v101 & 0xFFFFFFFC | (v36 >> 28) & 1 | HIBYTE(*(_DWORD *)(v40 + 24)) & 2;
  if ( (v27 == 64) != ((*(_BYTE *)(v40 + 31) & 0xC0) == 64) )
  {
    *(_QWORD *)(v40 + 320) = 0LL;
    SetOrClrWF(0LL, a1, 1LL, 0LL);
    UnlockWndMenuWorker(a1, 0);
  }
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v102])(a1);
  if ( v30 != v39 )
  {
    if ( v30 )
    {
      DecVisWindows(a1);
    }
    else
    {
      IncVisWindows(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1);
    }
  }
  v41 = *((_QWORD *)a1 + 3);
  if ( v41
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_DWORD *)(gptiCurrent + 680LL)) & 0x800) != 0
     || *(_QWORD *)(*(_QWORD *)(v41 + 8) + 192LL)) )
  {
    v42 = *((_QWORD *)a1 + 13);
    if ( v42 )
    {
      v43 = *(_QWORD *)(v41 + 8);
      if ( v43 )
      {
        if ( v42 == *(_QWORD *)(v43 + 24) )
        {
          v44 = (_BYTE *)*((_QWORD *)a1 + 5);
          if ( (v44[26] & 4) == 0 )
          {
            if ( (char)v44[24] < 0 || (v44[27] & 8) != 0 )
              goto LABEL_144;
            if ( (v44[21] & 2) == 0 )
            {
LABEL_92:
              if ( (v44[20] & 0x40) == 0 )
              {
                v46 = v44[30];
                if ( (v46 & 0xA) == 0 || (v46 & 0xC0) == 0 && (v44[31] & 0x20) == 0 )
                  goto LABEL_144;
              }
              if ( !(unsigned int)Is31TrayWindow(a1) )
                goto LABEL_144;
              goto LABEL_97;
            }
            v45 = *((_QWORD *)a1 + 15);
            if ( v45 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v45 + 40) + 21LL) & 2) != 0 )
                goto LABEL_144;
              goto LABEL_92;
            }
          }
LABEL_97:
          for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 13) )
          {
            v48 = *((_QWORD *)j + 5);
            if ( (*(_BYTE *)(v48 + 31) & 0x10) == 0 && (*(_BYTE *)(v48 + 25) & 8) == 0 )
            {
              v49 = 0;
              goto LABEL_104;
            }
            if ( (*(_WORD *)(v48 + 42) & 0x2FFF) == 0x29D )
              break;
          }
          v49 = 1;
LABEL_104:
          if ( v33 != v49 )
          {
            v50 = *(_QWORD *)a1;
            v51 = *(_QWORD *)(gptiCurrent + 456LL);
            if ( v33 )
              PostIAMShellHookMessageEx(v51, 22LL, v50);
            else
              PostIAMShellHookMessageEx(v51, 17LL, v50);
          }
        }
      }
    }
  }
LABEL_144:
  v61 = *((_QWORD *)a1 + 5);
  v62 = *(_DWORD *)(v61 + 24);
  v63 = *(_BYTE *)(v61 + 21) & 2;
  v64 = *(_DWORD *)(v61 + 28);
  v65 = 0;
  if ( (v62 & 1) != 0 )
  {
LABEL_150:
    v65 = 1;
    goto LABEL_151;
  }
  if ( (v62 & 0x20000) == 0 )
  {
    if ( (v64 & 0x40000) == 0 )
    {
      v66 = v64 & 0xC00000;
      if ( v66 != 0x400000 )
      {
        if ( v66 == 12582912 )
          v65 = v63;
        goto LABEL_151;
      }
    }
    goto LABEL_150;
  }
LABEL_151:
  SetOrClrWF(v65 != 0, a1, 2305LL, 0LL);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v67 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v67 && (*(_DWORD *)(**(_QWORD **)(v67 + 8) + 64LL) & 1) != 0 && (*((_DWORD *)a1 + 80) & 0x2000000) != 0 )
    {
      v68 = (_QWORD *)*((_QWORD *)a1 + 13);
      v69 = v68;
      if ( v68 )
      {
        while ( 1 )
        {
          v70 = v69[5];
          v71 = *(_BYTE *)(v70 + 31);
          if ( (v71 & 0x10) == 0 || (v71 & 0x20) != 0 && v69 != v68 )
            break;
          if ( (*(_WORD *)(v70 + 42) & 0x2FFF) != 0x29D )
          {
            v69 = (_QWORD *)v69[13];
            if ( v69 )
              continue;
          }
          goto LABEL_161;
        }
      }
      else
      {
LABEL_161:
        EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, *v68);
        v72 = *((_QWORD *)a1 + 13);
        if ( v72
          && (v73 = *((_QWORD *)a1 + 3)) != 0
          && (v74 = *(_QWORD *)(v73 + 8)) != 0
          && v72 == *(_QWORD *)(v74 + 24) )
        {
          v75 = 1;
        }
        else
        {
          v76 = *((_QWORD *)a1 + 3);
          v75 = 0;
          v77 = 0LL;
          if ( v76 )
          {
            v78 = *(_QWORD *)(v76 + 8);
            if ( v78 )
              v77 = *(struct tagWND **)(v78 + 24);
          }
          if ( a1 != v77 && (*(_BYTE *)(v68[5] + 31LL) & 2) != 0 )
          {
            v106 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v68, &v106) )
              CVisRgnTrackerProp::MarkDirty(v106);
          }
        }
        v79 = (__int128 *)*((_QWORD *)a1 + 18);
        DeviceObject_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        v118 = gDomainDummyLock;
        v119 = 0;
        v120 = 0LL;
        v121 = 0;
        v81 = *((_QWORD *)v79 + 2);
        v116 = *v79;
        v122 = 0;
        v117 = v81;
        if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
        {
          v122 = 1;
          if ( v79 == (__int128 *)gObjDummyLock )
            v79 = 0LL;
          *(_QWORD *)&v120 = v79;
          if ( !v121 )
          {
            v82 = 0;
            v83 = (tagObjLock **)&v120;
            do
            {
              if ( *v83 )
                tagObjLock::LockExclusive(*v83);
              ++v82;
              ++v83;
            }
            while ( !v82 );
            v121 = 1;
          }
        }
        Prop = RealGetProp(*((_QWORD *)a1 + 18), DeviceObject_low, 1LL);
        if ( v122 && v121 )
        {
          if ( (_QWORD)v120 )
            tagObjLock::UnLockExclusive((tagObjLock *)v120);
          v121 = 0;
        }
        if ( Prop && !*(_BYTE *)(Prop + 73) )
        {
          *(_BYTE *)(Prop + 73) = 1;
          Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
          v86 = (struct _LIST_ENTRY *)(Prop + 24);
          if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
            __fastfail(3u);
          v86->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
          *(_QWORD *)(Prop + 32) = &CVisRgnTrackerProp::s_DirtyList;
          Flink->Blink = v86;
          CVisRgnTrackerProp::s_DirtyList.Flink = (struct _LIST_ENTRY *)(Prop + 24);
        }
        for ( k = (struct tagWND *)*((_QWORD *)a1 + 14); k; k = (struct tagWND *)*((_QWORD *)k + 11) )
          MarkDirtyWorker(k);
        if ( !v75 )
        {
          for ( m = (struct tagWND *)*((_QWORD *)a1 + 11); m; m = (struct tagWND *)*((_QWORD *)m + 11) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)m + 5) + 31LL) & 0x14) == 0x14 )
              MarkDirtyWorker(m);
          }
        }
      }
    }
    v89 = *(_QWORD *)a1;
    v90 = (void *)ReferenceDwmApiPort();
    _InterlockedIncrement64(&g_cDWMWindowUniqueness);
    if ( v90 )
    {
      v113 = v89;
      v91 = v105;
      v108 = 0x8000;
      v111 = 0;
      v107 = 3932180;
      v109 = 0LL;
      v112 = 1073741846;
      v110 = 0LL;
      v114 = v105;
      v115 = HIDWORD(v104);
      LpcRequestPort(v90, &v107);
      ObfDereferenceObject(v90);
    }
    else
    {
      v91 = v105;
    }
    WindowMargins::CheckForChanges(a1, 2);
  }
  else
  {
    v91 = v105;
  }
  v92 = *((_QWORD *)a1 + 3);
  if ( !v92
    || (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v92 + 8) + 192LL) )
  {
    goto LABEL_225;
  }
  v93 = *((_QWORD *)a1 + 13);
  if ( !v93 )
    goto LABEL_225;
  v94 = *(_QWORD *)(v92 + 8);
  if ( !v94 || v93 != *(_QWORD *)(v94 + 24) )
    goto LABEL_225;
  v95 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v95[26] & 4) != 0 )
  {
    v96 = 1;
    goto LABEL_226;
  }
  if ( (char)v95[24] < 0 || (v95[27] & 8) != 0 )
    goto LABEL_225;
  if ( (v95[21] & 2) != 0 )
  {
    v97 = *((_QWORD *)a1 + 15);
    if ( !v97 )
    {
      v96 = 1;
      goto LABEL_226;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v97 + 40) + 21LL) & 2) != 0 )
      goto LABEL_225;
  }
  if ( (v95[20] & 0x40) != 0 || (v98 = v95[30], (v98 & 0xA) != 0) && ((v98 & 0xC0) != 0 || (v95[31] & 0x20) != 0) )
    v96 = (unsigned int)Is31TrayWindow(a1) != 0;
  else
LABEL_225:
    v96 = 0;
LABEL_226:
  if ( v100 != v96 )
  {
    if ( v100 )
    {
      v99 = 18LL;
LABEL_231:
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v99, *(_QWORD *)a1);
      goto LABEL_232;
    }
    if ( (unsigned int)IsWindowVisible(a1) )
    {
      v99 = 17LL;
      goto LABEL_231;
    }
  }
LABEL_232:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage(a1, 125LL, v91, &v104);
  return (unsigned int)v104;
}
