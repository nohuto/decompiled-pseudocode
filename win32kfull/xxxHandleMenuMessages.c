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
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  struct tagWND *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // r9d
  int v33; // eax
  int v34; // edx
  unsigned __int64 MenuStateWindow; // rax
  int v36; // r9d
  __int64 v37; // r14
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  __int16 v45; // ecx^2
  __int64 v46; // r8
  __int64 v47; // rcx
  int v48; // r8d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  struct tagWND *v60; // rcx
  unsigned int v61; // [rsp+28h] [rbp-39h] BYREF
  __int64 v62; // [rsp+30h] [rbp-31h] BYREF
  __int64 v63; // [rsp+38h] [rbp-29h] BYREF
  __int64 v64; // [rsp+40h] [rbp-21h]
  int v65; // [rsp+48h] [rbp-19h]
  __int128 v66; // [rsp+50h] [rbp-11h] BYREF
  __int64 v67; // [rsp+60h] [rbp-1h]
  __int128 v68; // [rsp+68h] [rbp+7h] BYREF
  __int64 v69; // [rsp+78h] [rbp+17h]
  __int128 v70; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v71; // [rsp+90h] [rbp+2Fh]

  v69 = 0LL;
  v67 = 0LL;
  v3 = *a3;
  v68 = 0LL;
  v66 = 0LL;
  v7 = *v3;
  v61 = 0;
  if ( !*(_QWORD *)(v7 + 40) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 16);
  v62 = v9;
  if ( v10 > 0x105 )
  {
    if ( v10 > 0x203 )
    {
      v39 = v10 - 516;
      if ( !v39 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_139:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v62);
        if ( xxxMNFindWindowFromPoint(a3, &v61, (unsigned int)v62) )
        {
          v55 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_141:
          if ( v55 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_85:
        xxxMNCancel(a2, 0);
        return 1LL;
      }
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 60;
          if ( (!v42 || v42 == 4)
            && IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16))
            && !xxxMNFindWindowFromPoint(a3, &v61, (unsigned int)v9) )
          {
            xxxMNCancel(a2, 0);
          }
          return 0LL;
        }
        goto LABEL_139;
      }
      goto LABEL_95;
    }
    if ( v10 == 515 )
    {
LABEL_77:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v62);
      v37 = xxxMNFindWindowFromPoint(a3, &v61, (unsigned int)v62);
      if ( !v37 && !v61 )
        goto LABEL_85;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v37 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_83:
        xxxMNDoubleClick(a2, a3, v61);
        return 1LL;
      }
      if ( v37 == 0xFFFFFFFFLL )
        goto LABEL_83;
      if ( !(unsigned int)IsMFMWFPWindow(v37) )
        goto LABEL_85;
      ThreadLock(v38, &v68);
      v26 = 497;
      goto LABEL_117;
    }
    v28 = v10 - 262;
    if ( v28 )
    {
      v29 = v28 - 18;
      if ( !v29 )
        return 1LL;
      v30 = v29 - 232;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_13;
        if ( v31 != 1 )
          return 0LL;
        goto LABEL_96;
      }
LABEL_66:
      v32 = *(_DWORD *)(a2 + 8);
      if ( (v32 & 0x400) != 0 && (v32 & 8) != 0 && (v32 & 0x80u) == 0 && (v32 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v63 = *(_QWORD *)(a2 + 56);
          v64 = v63;
          v33 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v63) = v63 - v33;
          LODWORD(v64) = v33 + v64;
          v34 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v63) -= v34;
          HIDWORD(v64) += v34;
          LODWORD(v62) = (__int16)v9;
          HIDWORD(v62) = SWORD1(v9);
          if ( !PtInRect(&v63, v62) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v36 | 0x80;
              PostMessage(MenuStateWindow, 0x1F4u, 0LL, 0LL);
            }
          }
        }
      }
      xxxMNMouseMove(a3, a2, (unsigned int)v9);
      return 1LL;
    }
    goto LABEL_75;
  }
  if ( v10 == 261 )
  {
    if ( v11 == 18 || v11 == 121 )
      return 1LL;
    goto LABEL_56;
  }
  if ( v10 > 0xA5 )
  {
    v20 = v10 - 166;
    if ( !v20 )
      goto LABEL_139;
    v21 = v20 - 90;
    if ( !v21 )
      goto LABEL_29;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_56;
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 != 2 )
        return 0LL;
LABEL_29:
      v24 = *(_DWORD *)(a2 + 8);
      if ( (v24 & 8) != 0 && v11 != 112 )
      {
        if ( (v24 & 0x80u) == 0 || v11 != 27 )
          return 1LL;
        v25 = v24 | 0x2000;
        goto LABEL_34;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v11 > 0x25 )
      {
        if ( v11 != 38 && v11 != 39 && v11 != 40 && v11 != 112 && v11 != 121 )
          goto LABEL_56;
      }
      else if ( v11 != 37 && v11 != 3 )
      {
        if ( v11 != 9 )
        {
          if ( v11 != 13 && v11 != 18 && v11 != 27 )
            goto LABEL_56;
          goto LABEL_51;
        }
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56) )
          goto LABEL_85;
LABEL_56:
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          xxxTranslateMessage(a1, 0);
        return 1LL;
      }
LABEL_51:
      if ( !*(_QWORD *)(**a3 + 56) )
      {
        xxxMNKeyDown(a3, a2, v11);
        return 1LL;
      }
      goto LABEL_52;
    }
LABEL_75:
    if ( !*(_QWORD *)(**a3 + 56) )
    {
      xxxMNChar(a3, a2, v11);
      return 1LL;
    }
LABEL_52:
    ThreadLockAlways(*(_QWORD *)(**a3 + 56), &v66);
    v26 = *(_DWORD *)(a1 + 8);
    v27 = *(struct tagWND **)(**a3 + 56);
LABEL_118:
    xxxSendMessage(v27, v26);
LABEL_138:
    ThreadUnlock1(v53, v52, v54);
    return 1LL;
  }
  if ( v10 == 165 )
  {
LABEL_95:
    if ( (*(_DWORD *)**a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v63, 0LL);
          v56 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56));
          if ( v56 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v63, *(_QWORD *)(v56 + 8));
            if ( *(_QWORD *)v63 )
            {
              if ( *(int *)(*(_QWORD *)v63 + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v63 + 8LL) )
              {
                v71 = 0LL;
                v70 = 0LL;
                ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v63 + 8LL), &v70);
                xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v63 + 8LL), 0x122u);
                ThreadUnlock1(v58, v57, v59);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v63);
        }
        return 0LL;
      }
      v55 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_141;
    }
    goto LABEL_96;
  }
  v12 = v10 - 160;
  if ( !v12 )
    goto LABEL_66;
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
      goto LABEL_77;
    }
LABEL_96:
    v43 = *(_DWORD *)(a2 + 8);
    if ( (v43 & 8) == 0 )
      return 1LL;
    if ( (v43 & 0x400) != 0 )
    {
      UnlockMFMWFPWindow(a2 + 64);
      v44 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
      *(_DWORD *)(a2 + 8) = v44;
      if ( (v44 & 0x2000) != 0 )
      {
        v25 = v44 & 0xFFFFDFF7;
LABEL_34:
        *(_DWORD *)(a2 + 8) = v25;
        return 1LL;
      }
    }
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v62);
    v45 = WORD1(v62);
    v46 = (unsigned int)v62;
    *(_DWORD *)(a2 + 12) = (__int16)v62;
    *(_DWORD *)(a2 + 16) = v45;
    v37 = xxxMNFindWindowFromPoint(a3, &v61, v46);
    v65 = IsMFMWFPWindow(v37);
    v48 = v65;
    if ( v65 )
    {
      ThreadLock(v47, &v68);
      v48 = v65;
    }
    if ( (*(_DWORD *)**a3 & 2) != 0 )
    {
      if ( !v37 && !v61 )
        goto LABEL_133;
      if ( v37 == 0xFFFFFFFFLL )
      {
        if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
          goto LABEL_133;
LABEL_114:
        xxxMNButtonUp(a3, a2, v61, 0LL);
        goto LABEL_137;
      }
    }
    else
    {
      if ( !v37 && !v61 && (*(_DWORD *)**a3 & 0x200) == 0 )
      {
        ThreadLock(*(_QWORD *)(**a3 + 16), &v66);
        xxxSendMessage(*(struct tagWND **)(**a3 + 16), 0x1E6u);
        ThreadUnlock1(v50, v49, v51);
        goto LABEL_137;
      }
      *(_DWORD *)**a3 &= ~0x200u;
      if ( v37 == 0xFFFFFFFFLL )
        goto LABEL_114;
    }
    if ( !v48 )
    {
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
      return 1LL;
    }
    v26 = 495;
LABEL_117:
    v27 = (struct tagWND *)v37;
    goto LABEL_118;
  }
LABEL_13:
  *(_DWORD *)(a2 + 20) = -1;
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v62);
  v16 = WORD1(v62);
  v17 = (unsigned int)v62;
  *(_DWORD *)(a2 + 12) = (__int16)v62;
  *(_DWORD *)(a2 + 16) = v16;
  v18 = xxxMNFindWindowFromPoint(a3, &v61, v17);
  v65 = IsMFMWFPWindow(v18);
  if ( v65 )
    ThreadLock(v19, &v68);
  if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
  {
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 72) = v61;
    LockMFMWFPWindow(a2 + 64, v18);
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
    *(_DWORD *)(a2 + 76) = ((v11 & 2) != 0) + 1;
  if ( !v18 && !v61 )
    goto LABEL_133;
  if ( (*(_DWORD *)**a3 & 2) != 0 && v18 == 4294967291LL )
  {
    xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_131:
    xxxMNButtonDown(a3, a2, v61, 1LL);
    goto LABEL_135;
  }
  if ( v18 == 0xFFFFFFFFLL )
    goto LABEL_131;
  if ( !(unsigned int)IsMFMWFPWindow(v18) )
  {
LABEL_133:
    xxxMNCancel(a2, 0);
    goto LABEL_137;
  }
  xxxSendMessage(v60, 0x1EDu);
LABEL_135:
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
LABEL_137:
  if ( v65 )
    goto LABEL_138;
  return 1LL;
}
