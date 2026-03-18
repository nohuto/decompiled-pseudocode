/*
 * XREFs of xxxHandleMenuMessages @ 0x1C022D700
 * Callers:
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C02303C0 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C010081C (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01ECCAC (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C022D444 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C022D4FC (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C023002C (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C023008C (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0230320 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C02304EC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C02305F0 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0231350 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0233F20 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // rax
  __int64 v7; // rdx
  __int64 v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int16 v16; // ecx^2
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rcx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG_PTR v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // r9d
  int v35; // eax
  int v36; // edx
  __int64 MenuStateWindow; // rax
  int v38; // r9d
  __int64 v39; // r14
  __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  __int16 v47; // ecx^2
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  bool v57; // zf
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  ULONG_PTR v64; // rcx
  unsigned int v65; // [rsp+28h] [rbp-39h] BYREF
  __int64 v66; // [rsp+30h] [rbp-31h] BYREF
  __int64 v67; // [rsp+38h] [rbp-29h] BYREF
  __int64 v68; // [rsp+40h] [rbp-21h]
  int v69; // [rsp+48h] [rbp-19h]
  __int128 v70; // [rsp+50h] [rbp-11h] BYREF
  __int64 v71; // [rsp+60h] [rbp-1h]
  __int128 v72; // [rsp+68h] [rbp+7h] BYREF
  __int64 v73; // [rsp+78h] [rbp+17h]
  _QWORD v74[3]; // [rsp+80h] [rbp+1Fh] BYREF

  v73 = 0LL;
  v71 = 0LL;
  v3 = *a3;
  v72 = 0LL;
  v70 = 0LL;
  v7 = *v3;
  v65 = 0;
  if ( !*(_QWORD *)(v7 + 40) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 16);
  v66 = v9;
  if ( v10 > 0x105 )
  {
    if ( v10 > 0x203 )
    {
      v41 = v10 - 516;
      if ( !v41 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_134:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v66);
        if ( xxxMNFindWindowFromPoint(a3, &v65, (unsigned int)v66) )
        {
          v57 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_136:
          if ( v57 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_81:
        xxxMNCancel(a2);
        return 1LL;
      }
      v42 = v41 - 1;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 60;
          if ( (!v44 || v44 == 4)
            && IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16))
            && !xxxMNFindWindowFromPoint(a3, &v65, (unsigned int)v9) )
          {
            xxxMNCancel(a2);
          }
          return 0LL;
        }
        goto LABEL_134;
      }
      goto LABEL_91;
    }
    if ( v10 == 515 )
    {
LABEL_73:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v66);
      v39 = xxxMNFindWindowFromPoint(a3, &v65, (unsigned int)v66);
      if ( !v39 && !v65 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v39 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_79:
        xxxMNDoubleClick(a2, a3, v65);
        return 1LL;
      }
      if ( v39 == 0xFFFFFFFFLL )
        goto LABEL_79;
      if ( !(unsigned int)IsMFMWFPWindow(v39) )
        goto LABEL_81;
      ThreadLock(v40, (__int64 *)&v72);
      goto LABEL_112;
    }
    v30 = v10 - 262;
    if ( v30 )
    {
      v31 = v30 - 18;
      if ( !v31 )
        return 1LL;
      v32 = v31 - 232;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_13;
        if ( v33 != 1 )
          return 0LL;
        goto LABEL_92;
      }
LABEL_62:
      v34 = *(_DWORD *)(a2 + 8);
      if ( (v34 & 0x400) != 0 && (v34 & 8) != 0 && (v34 & 0x80u) == 0 && (v34 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v67 = *(_QWORD *)(a2 + 56);
          v68 = v67;
          v35 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v67) = v67 - v35;
          LODWORD(v68) = v35 + v68;
          v36 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v67) -= v36;
          HIDWORD(v68) += v36;
          LODWORD(v66) = (__int16)v9;
          HIDWORD(v66) = SWORD1(v9);
          if ( !PtInRect(&v67, v66) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v38 | 0x80;
              PostMessage(MenuStateWindow, 500, 0, 0);
            }
          }
        }
      }
      xxxMNMouseMove(a3, a2, (unsigned int)v9);
      return 1LL;
    }
    goto LABEL_71;
  }
  if ( v10 == 261 )
  {
    if ( v11 == 18 || v11 == 121 )
      return 1LL;
    goto LABEL_52;
  }
  if ( v10 > 0xA5 )
  {
    v21 = v10 - 166;
    if ( !v21 )
      goto LABEL_134;
    v22 = v21 - 90;
    if ( !v22 )
    {
LABEL_29:
      v25 = *(_DWORD *)(a2 + 8);
      if ( (v25 & 8) != 0 && v11 != 112 )
      {
        if ( (v25 & 0x80u) == 0 || v11 != 27 )
          return 1LL;
        v26 = v25 | 0x2000;
        goto LABEL_34;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v11 == 3 )
        goto LABEL_44;
      if ( v11 == 9 )
      {
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56) )
          goto LABEL_81;
      }
      else if ( v11 == 13 || v11 == 18 || v11 == 27 || v11 > 0x24 && (v11 <= 0x28 || v11 == 112 || v11 == 121) )
      {
LABEL_44:
        if ( !*(_QWORD *)(**a3 + 56) )
        {
          xxxMNKeyDown(a3, a2, v11);
          return 1LL;
        }
        goto LABEL_45;
      }
LABEL_52:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0);
      return 1LL;
    }
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_52;
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 != 2 )
        return 0LL;
      goto LABEL_29;
    }
LABEL_71:
    if ( !*(_QWORD *)(**a3 + 56) )
    {
      xxxMNChar(a3, a2, v11);
      return 1LL;
    }
LABEL_45:
    v27 = *(_QWORD *)(**a3 + 56);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v70 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v70;
    *((_QWORD *)&v70 + 1) = v27;
    HMLockObject(v27);
    v29 = *(_QWORD *)(**a3 + 56);
LABEL_113:
    xxxSendMessage(v29);
LABEL_133:
    ThreadUnlock1(v55, v54, v56);
    return 1LL;
  }
  if ( v10 == 165 )
  {
LABEL_91:
    if ( (*(_DWORD *)**a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v67, 0LL);
          v58 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56));
          if ( v58 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v67, *(_QWORD *)(v58 + 8));
            if ( *(_QWORD *)v67 )
            {
              if ( *(int *)(*(_QWORD *)v67 + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v67 + 8LL) )
              {
                v74[2] = 0LL;
                v59 = *(_QWORD *)(*(_QWORD *)v67 + 8LL);
                v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v74[0] = *(_QWORD *)(v60 + 416);
                *(_QWORD *)(v60 + 416) = v74;
                v74[1] = v59;
                HMLockObject(v59);
                xxxSendMessage(*(_QWORD *)(*(_QWORD *)v67 + 8LL));
                ThreadUnlock1(v62, v61, v63);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v67);
        }
        return 0LL;
      }
      v57 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_136;
    }
    goto LABEL_92;
  }
  v12 = v10 - 160;
  if ( !v12 )
    goto LABEL_62;
  v13 = v12 - 1;
  if ( v13 )
  {
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
      goto LABEL_73;
    }
LABEL_92:
    v45 = *(_DWORD *)(a2 + 8);
    if ( (v45 & 8) == 0 )
      return 1LL;
    if ( (v45 & 0x400) != 0 )
    {
      UnlockMFMWFPWindow(a2 + 64);
      v46 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
      *(_DWORD *)(a2 + 8) = v46;
      if ( (v46 & 0x2000) != 0 )
      {
        v26 = v46 & 0xFFFFDFF7;
LABEL_34:
        *(_DWORD *)(a2 + 8) = v26;
        return 1LL;
      }
    }
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v66);
    v47 = WORD1(v66);
    v48 = (unsigned int)v66;
    *(_DWORD *)(a2 + 12) = (__int16)v66;
    *(_DWORD *)(a2 + 16) = v47;
    v39 = xxxMNFindWindowFromPoint(a3, &v65, v48);
    v69 = IsMFMWFPWindow(v39);
    v50 = v69;
    if ( v69 )
    {
      ThreadLock(v49, (__int64 *)&v72);
      v50 = v69;
    }
    if ( (*(_DWORD *)**a3 & 2) != 0 )
    {
      if ( !v39 && !v65 )
        goto LABEL_128;
      if ( v39 == 0xFFFFFFFFLL )
      {
        if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
          goto LABEL_128;
LABEL_110:
        xxxMNButtonUp(a3, a2, v65, 0LL);
        goto LABEL_132;
      }
    }
    else
    {
      if ( !v39 && !v65 && (*(_DWORD *)**a3 & 0x200) == 0 )
      {
        ThreadLock(*(_QWORD *)(**a3 + 16), (__int64 *)&v70);
        xxxSendMessage(*(_QWORD *)(**a3 + 16));
        ThreadUnlock1(v52, v51, v53);
        goto LABEL_132;
      }
      *(_DWORD *)**a3 &= ~0x200u;
      if ( v39 == 0xFFFFFFFFLL )
        goto LABEL_110;
    }
    if ( !v50 )
    {
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
      return 1LL;
    }
LABEL_112:
    v29 = v39;
    goto LABEL_113;
  }
LABEL_13:
  *(_DWORD *)(a2 + 20) = -1;
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v66);
  v16 = WORD1(v66);
  v17 = (unsigned int)v66;
  *(_DWORD *)(a2 + 12) = (__int16)v66;
  *(_DWORD *)(a2 + 16) = v16;
  v18 = xxxMNFindWindowFromPoint(a3, &v65, v17);
  v69 = IsMFMWFPWindow(v18);
  if ( v69 )
    ThreadLock(v19, (__int64 *)&v72);
  v20 = *(_DWORD *)(a2 + 8);
  if ( (v20 & 0x400) != 0 )
  {
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 72) = v65;
    LockMFMWFPWindow(a2 + 64, v18);
    v20 = *(_DWORD *)(a2 + 8);
  }
  if ( (v20 & 0x500) != 0 )
    *(_DWORD *)(a2 + 76) = ((v11 & 2) != 0) + 1;
  if ( !v18 && !v65 )
    goto LABEL_128;
  if ( (*(_DWORD *)**a3 & 2) != 0 && v18 == 4294967291LL )
  {
    xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_126:
    xxxMNButtonDown(a3, a2, v65, 1LL);
    goto LABEL_130;
  }
  if ( v18 == 0xFFFFFFFFLL )
    goto LABEL_126;
  if ( !(unsigned int)IsMFMWFPWindow(v18) )
  {
LABEL_128:
    xxxMNCancel(a2);
    goto LABEL_132;
  }
  xxxSendMessage(v64);
LABEL_130:
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
LABEL_132:
  if ( v69 )
    goto LABEL_133;
  return 1LL;
}
