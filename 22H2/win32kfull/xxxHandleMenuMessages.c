/*
 * XREFs of xxxHandleMenuMessages @ 0x1C02339B8
 * Callers:
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236AD0 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0110450 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01F1E78 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0233604 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C02336B4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C0236464 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0236498 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C02364C4 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C02369E8 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0236CBC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0236DBC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02372E4 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0237DB8 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238110 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B334 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // rax
  __int64 v7; // rdx
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int16 v16; // ecx^2
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r14d
  _DWORD *v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  unsigned int v32; // edx
  unsigned __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // r9d
  int v39; // eax
  int v40; // edx
  __int64 MenuStateWindow; // rax
  int v42; // r9d
  __int64 v43; // rsi
  __int64 ThreadWin32Thread; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  __int16 v51; // ecx^2
  __int64 v52; // r8
  unsigned __int64 v53; // rsi
  int v54; // r15d
  __int64 v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  bool v60; // zf
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rax
  struct _LARGE_STRING *v65; // r9
  __int64 v66; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v74; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v76; // rax
  _QWORD *v77; // rax
  unsigned __int64 v78; // rcx
  unsigned int v79; // [rsp+28h] [rbp-49h] BYREF
  __int64 v80; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v81[2]; // [rsp+38h] [rbp-39h] BYREF
  int v82; // [rsp+48h] [rbp-29h]
  __int64 v83; // [rsp+50h] [rbp-21h] BYREF
  __int64 v84; // [rsp+58h] [rbp-19h]
  __int128 v85; // [rsp+60h] [rbp-11h] BYREF
  __int64 v86; // [rsp+70h] [rbp-1h]
  __int128 v87; // [rsp+78h] [rbp+7h] BYREF
  __int64 v88; // [rsp+88h] [rbp+17h]
  _QWORD v89[3]; // [rsp+90h] [rbp+1Fh] BYREF

  v88 = 0LL;
  v86 = 0LL;
  v3 = *a3;
  v87 = 0LL;
  v85 = 0LL;
  v7 = *v3;
  v79 = 0;
  if ( !*(_QWORD *)(v7 + 40) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(unsigned int *)(a1 + 16);
  v80 = v9;
  if ( v10 > 0x105 )
  {
    if ( v10 > 0x203 )
    {
      v45 = v10 - 516;
      if ( !v45 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_153:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v80);
        if ( xxxMNFindWindowFromPoint(a3, &v79, (unsigned int)v80) )
        {
          v60 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_155:
          if ( v60 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_84:
        xxxMNCancel(a2, 0, 0);
        return 1LL;
      }
      v46 = v45 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( v47 )
        {
          v48 = v47 - 60;
          if ( (!v48 || v48 == 4)
            && IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16))
            && !xxxMNFindWindowFromPoint(a3, &v79, (unsigned int)v9) )
          {
            xxxMNCancel(a2, 0, 0);
          }
          return 0LL;
        }
        goto LABEL_153;
      }
      goto LABEL_97;
    }
    if ( v10 == 515 )
    {
LABEL_76:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v80);
      v43 = xxxMNFindWindowFromPoint(a3, &v79, (unsigned int)v80);
      if ( !v43 && !v79 )
        goto LABEL_84;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v43 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v43 = 0xFFFFFFFFLL;
      }
      if ( v43 == 0xFFFFFFFFLL )
      {
        xxxMNDoubleClick(a2, a3, v79);
        return 1LL;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v43) )
        goto LABEL_84;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v87 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v87;
      *((_QWORD *)&v87 + 1) = v43;
      if ( v43 )
        HMLockObject(v43);
      v31 = v79;
      v32 = 497;
      v33 = v43;
LABEL_88:
      xxxSendMessage(v33, v32, v31, 0LL);
LABEL_152:
      ThreadUnlock1(v22);
      return 1LL;
    }
    v34 = v10 - 262;
    if ( v34 )
    {
      v35 = v34 - 18;
      if ( !v35 )
        return 1LL;
      v36 = v35 - 232;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( !v37 )
          goto LABEL_13;
        if ( v37 != 1 )
          return 0LL;
        goto LABEL_98;
      }
LABEL_65:
      v38 = *(_DWORD *)(a2 + 8);
      if ( (v38 & 0x400) != 0 && (v38 & 8) != 0 && (v38 & 0x80u) == 0 && (v38 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v83 = *(_QWORD *)(a2 + 56);
          v84 = v83;
          v39 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v83) = v83 - v39;
          LODWORD(v84) = v39 + v84;
          v40 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v83) -= v40;
          HIDWORD(v84) += v40;
          LODWORD(v80) = (__int16)v9;
          HIDWORD(v80) = SWORD1(v9);
          if ( !PtInRect(&v83, v80) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v42 | 0x80;
              PostMessage(MenuStateWindow, 500, 0, 0);
            }
          }
        }
      }
      xxxMNMouseMove(a3, a2, (unsigned int)v9);
      return 1LL;
    }
    goto LABEL_74;
  }
  if ( v10 == 261 )
  {
    if ( (_DWORD)v11 == 18 || (_DWORD)v11 == 121 )
      return 1LL;
    goto LABEL_55;
  }
  if ( v10 > 0xA5 )
  {
    v23 = v10 - 166;
    if ( !v23 )
      goto LABEL_153;
    v24 = v23 - 90;
    if ( !v24 )
    {
LABEL_32:
      v27 = *(_DWORD *)(a2 + 8);
      if ( (v27 & 8) != 0 && (_DWORD)v11 != 112 )
      {
        if ( (v27 & 0x80u) == 0 || (_DWORD)v11 != 27 )
          return 1LL;
        v28 = v27 | 0x2000;
        goto LABEL_37;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( (_DWORD)v11 == 3 )
        goto LABEL_47;
      if ( (_DWORD)v11 == 9 )
      {
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56) )
          goto LABEL_84;
      }
      else if ( (_DWORD)v11 == 13
             || (_DWORD)v11 == 18
             || (_DWORD)v11 == 27
             || (unsigned int)v11 > 0x24 && ((unsigned int)v11 <= 0x28 || (_DWORD)v11 == 112 || (_DWORD)v11 == 121) )
      {
LABEL_47:
        if ( !*(_QWORD *)(**a3 + 56) )
        {
          xxxMNKeyDown(a3, a2, (unsigned int)v11);
          return 1LL;
        }
        goto LABEL_48;
      }
LABEL_55:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0);
      return 1LL;
    }
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_55;
    v26 = v25 - 1;
    if ( v26 )
    {
      if ( v26 != 2 )
        return 0LL;
      goto LABEL_32;
    }
LABEL_74:
    if ( !*(_QWORD *)(**a3 + 56) )
    {
      xxxMNChar(a3, a2, (unsigned int)v11);
      return 1LL;
    }
LABEL_48:
    v29 = *(_QWORD *)(**a3 + 56);
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v85 = *(_QWORD *)(v30 + 416);
    *(_QWORD *)(v30 + 416) = &v85;
    *((_QWORD *)&v85 + 1) = v29;
    HMLockObject(v29);
    v31 = v11;
    v32 = *(_DWORD *)(a1 + 8);
    v33 = *(_QWORD *)(**a3 + 56);
    goto LABEL_88;
  }
  if ( v10 == 165 )
  {
LABEL_97:
    if ( (*(_DWORD *)**a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v81, 0LL);
          v61 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56));
          if ( v61 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v81, *(_QWORD *)(v61 + 8));
            if ( *(_QWORD *)v81[0] )
            {
              v62 = *(_QWORD *)v81[0];
              if ( *(int *)(*(_QWORD *)v81[0] + 80LL) >= 0 )
              {
                v62 = *(_QWORD *)v81[0];
                if ( *(_QWORD *)(*(_QWORD *)v81[0] + 8LL) )
                {
                  v89[2] = 0LL;
                  v63 = *(_QWORD *)(*(_QWORD *)v81[0] + 8LL);
                  v64 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v89[0] = *(_QWORD *)(v64 + 416);
                  *(_QWORD *)(v64 + 416) = v89;
                  v89[1] = v63;
                  HMLockObject(v63);
                  if ( *(_QWORD *)(*(_QWORD *)v81[0] + 40LL) )
                    v65 = **(struct _LARGE_STRING ***)(*(_QWORD *)v81[0] + 40LL);
                  else
                    v65 = 0LL;
                  xxxSendMessage(
                    *(_QWORD *)(*(_QWORD *)v81[0] + 8LL),
                    0x122u,
                    *(unsigned int *)(*(_QWORD *)v81[0] + 80LL),
                    v65);
                  ThreadUnlock1(v66);
                }
              }
            }
          }
          CurrentThread = KeGetCurrentThread();
          v68 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v62)
            || (CurrentProcess = PsGetCurrentProcess(v70, v69, v71),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v74),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            v76 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( v76 )
              v68 = *v76;
          }
          if ( v81[0] != gSmartObjNullRef && !--*(_DWORD *)(v81[0] + 8LL) )
          {
            if ( *(_BYTE *)(v81[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v81[0]);
          }
          v77 = *(_QWORD **)(v68 + 1472);
          if ( v77 )
            *(_QWORD *)(v68 + 1472) = *v77;
        }
        return 0LL;
      }
      v60 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_155;
    }
    goto LABEL_98;
  }
  v12 = v10 - 160;
  if ( !v12 )
    goto LABEL_65;
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_13:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v80);
    v16 = WORD1(v80);
    v17 = (unsigned int)v80;
    *(_DWORD *)(a2 + 12) = (__int16)v80;
    *(_DWORD *)(a2 + 16) = v16;
    v18 = xxxMNFindWindowFromPoint(a3, &v79, v17);
    v82 = IsMFMWFPWindow(v18);
    if ( v82 )
    {
      v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v87 = *(_QWORD *)(v19 + 416);
      *(_QWORD *)(v19 + 416) = &v87;
      *((_QWORD *)&v87 + 1) = v18;
      if ( v18 )
        HMLockObject(v18);
    }
    v20 = *(_DWORD *)(a2 + 8);
    v21 = v79;
    if ( (v20 & 0x400) != 0 )
    {
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 72) = v21;
      LockMFMWFPWindow(a2 + 64, v18);
      v20 = *(_DWORD *)(a2 + 8);
    }
    if ( (v20 & 0x500) != 0 )
      *(_DWORD *)(a2 + 76) = ((v11 & 2) != 0) + 1;
    if ( v18 || v21 )
    {
      if ( (*(_DWORD *)**a3 & 2) != 0 && v18 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v18 = 0xFFFFFFFFLL;
      }
      if ( v18 == 0xFFFFFFFFLL )
      {
        xxxMNButtonDown(a3, a2, v79, 1LL);
        goto LABEL_149;
      }
      if ( (unsigned int)IsMFMWFPWindow(v18) )
      {
        xxxSendMessage(v78, 0x1EDu, v79, 0LL);
LABEL_149:
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
        goto LABEL_151;
      }
    }
LABEL_147:
    xxxMNCancel(a2, 0, 0);
    goto LABEL_151;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        goto LABEL_12;
      return 0LL;
    }
    goto LABEL_76;
  }
LABEL_98:
  v49 = *(_DWORD *)(a2 + 8);
  if ( (v49 & 8) == 0 )
    return 1LL;
  if ( (v49 & 0x400) != 0 )
  {
    UnlockMFMWFPWindow(a2 + 64);
    v50 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
    *(_DWORD *)(a2 + 8) = v50;
    if ( (v50 & 0x2000) != 0 )
    {
      v28 = v50 & 0xFFFFDFF7;
LABEL_37:
      *(_DWORD *)(a2 + 8) = v28;
      return 1LL;
    }
  }
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v80);
  v51 = WORD1(v80);
  v52 = (unsigned int)v80;
  *(_DWORD *)(a2 + 12) = (__int16)v80;
  *(_DWORD *)(a2 + 16) = v51;
  v53 = xxxMNFindWindowFromPoint(a3, &v79, v52);
  v82 = IsMFMWFPWindow(v53);
  v54 = v82;
  if ( v82 )
  {
    v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v87 = *(_QWORD *)(v55 + 416);
    *(_QWORD *)(v55 + 416) = &v87;
    *((_QWORD *)&v87 + 1) = v53;
    if ( v53 )
      HMLockObject(v53);
  }
  v22 = (_DWORD *)**a3;
  if ( (*v22 & 2) != 0 )
  {
    v56 = v79;
    if ( !v53 && !v79 )
      goto LABEL_147;
    if ( v53 == 0xFFFFFFFF )
    {
      if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
        goto LABEL_147;
LABEL_119:
      xxxMNButtonUp(a3, a2, v79, 0LL);
      goto LABEL_151;
    }
    goto LABEL_121;
  }
  if ( v53 || v79 || (*(_DWORD *)**a3 & 0x200) != 0 )
  {
    v22 = (_DWORD *)**a3;
    *v22 &= ~0x200u;
    if ( v53 == 0xFFFFFFFF )
      goto LABEL_119;
    v56 = v79;
LABEL_121:
    if ( v54 )
      xxxSendMessage(v53, 0x1EFu, v56, (struct _LARGE_STRING *)v80);
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
    goto LABEL_151;
  }
  v57 = *(_QWORD *)(**a3 + 16);
  v58 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v85 = *(_QWORD *)(v58 + 416);
  *(_QWORD *)(v58 + 416) = &v85;
  *((_QWORD *)&v85 + 1) = v57;
  if ( v57 )
    HMLockObject(v57);
  xxxSendMessage(*(_QWORD *)(**a3 + 16), 0x1E6u, 0LL, 0LL);
  ThreadUnlock1(v59);
LABEL_151:
  if ( v82 )
    goto LABEL_152;
  return 1LL;
}
