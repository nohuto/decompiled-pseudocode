/*
 * XREFs of xxxMNCompute @ 0x1C023B4C8
 * Callers:
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMenuBarCompute @ 0x1C023BEA8 (xxxMenuBarCompute.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     GetDPIMETRICSForDpi @ 0x1C00A11BC (GetDPIMETRICSForDpi.c)
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 *     MNIsUAHMenu @ 0x1C02194D8 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0237734 (MNIsOwnerDrawItem.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C023A454 (xxxSendUAHInitMenuMessage.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C023AAC4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C023AF44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        __int64 **a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v7; // r14d
  struct tagWND *v9; // rdi
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int WindowDpiLastNotify; // ebp
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  HDC v24; // rbx
  __int64 *DPIMETRICSForDpi; // rax
  unsigned int v26; // r13d
  unsigned int v27; // r12d
  int v28; // r15d
  __int64 v29; // rcx
  __int64 v30; // r14
  unsigned int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // r8
  BOOL v34; // eax
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  unsigned int v40; // edi
  int v41; // ebx
  int v42; // edx
  __int64 v43; // rcx
  int v44; // r9d
  int v45; // eax
  unsigned int v46; // ebx
  __int64 v47; // rcx
  _DWORD *v48; // rcx
  unsigned int v49; // r8d
  _WORD *v50; // rax
  __int64 v51; // rcx
  _DWORD *v52; // rcx
  int v53; // ebx
  __int64 v54; // rdi
  int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rbx
  int DpiForSystem; // eax
  __int64 v63; // rcx
  int v64; // edx
  int v65; // eax
  int v66; // eax
  unsigned int v67; // r11d
  __int64 *i; // r10
  __int64 v69; // r9
  unsigned int v70; // [rsp+40h] [rbp-98h]
  unsigned int v71; // [rsp+44h] [rbp-94h]
  int v72; // [rsp+48h] [rbp-90h]
  unsigned int v73; // [rsp+4Ch] [rbp-8Ch]
  int v74; // [rsp+50h] [rbp-88h]
  int v75; // [rsp+54h] [rbp-84h]
  Gre::Base *DCEx; // [rsp+58h] [rbp-80h]
  __int64 v77; // [rsp+60h] [rbp-78h] BYREF
  __int64 v78[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v79; // [rsp+80h] [rbp-58h]
  unsigned int v80; // [rsp+E0h] [rbp+8h]
  int v82; // [rsp+F0h] [rbp+18h]

  v7 = a4;
  v70 = 0;
  v77 = 0LL;
  v9 = a2;
  v71 = 0;
  v79 = gptiCurrent;
  if ( !a3 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
      goto LABEL_15;
    }
LABEL_13:
    WindowDpiLastNotify = 96;
    goto LABEL_15;
  }
  v14 = *(_QWORD *)(a3 + 40);
  v15 = *(_DWORD *)(v14 + 288) & 0xF;
  if ( v15 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v14 + 288) >> 8) & 0x1FF;
  }
  else
  {
    if ( !_bittest((const signed __int32 *)(v14 + 232), 0xAu) )
    {
      if ( v15
        || (v16 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 456LL)) == 0
        || (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 64LL) & 1) == 0 )
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 424LL) + 284LL);
        goto LABEL_15;
      }
      goto LABEL_13;
    }
    WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
  }
LABEL_15:
  if ( v9 != *(struct tagWND **)(**a1 + 80) )
  {
    v17 = *a1;
    v78[1] = (__int64)v9;
    v78[0] = *v17 + 80;
    HMAssignmentLock(v78, 0LL);
  }
  if ( a7 )
  {
    v71 = *a7;
    v7 = a4;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    return 0LL;
  v19 = **a1;
  v82 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 40LL) & 1;
  if ( v82 )
  {
    v71 = 0;
  }
  else if ( v9 )
  {
    v19 = **a1;
    *(_DWORD *)(v19 + 64) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v19) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(2LL) & 0xF) == 3
    || a3
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *((_QWORD *)PtiCurrentShared(v20) + 57)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v21) + 57) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v23 = 65539LL;
    v22 = a3;
  }
  else
  {
    v22 = 0LL;
    v23 = 3LL;
  }
  DCEx = (Gre::Base *)_GetDCEx(v22, 0LL, v23);
  v24 = (HDC)DCEx;
  DPIMETRICSForDpi = (__int64 *)GetDPIMETRICSForDpi();
  v73 = 0;
  v72 = 0;
  v80 = 0;
  v78[0] = GreSelectFontInternal((__int64)DCEx, *DPIMETRICSForDpi, 1);
  if ( gihmodUserApiHook >= 0 && v9 )
    xxxSendUAHInitMenuMessage((__int64)v9, (__int64)a1, (__int64)DCEx);
  v26 = 0;
  v75 = 0;
  v27 = v7;
  v74 = 0;
  v28 = a5;
  *(_DWORD *)(**a1 + 72) = 0;
  v29 = (__int64)a1[2];
  if ( !v29 )
    v29 = **a1;
  v30 = MNGetpItemFromIndex(v29, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    goto LABEL_129;
  v31 = v82;
  while ( v30 )
  {
    v32 = (__int64)a1[2];
    if ( !v32 )
      v32 = **a1;
    v33 = *(_QWORD *)v30;
    if ( (**(_DWORD **)v30 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(v32, (_DWORD **)v30) || *(_WORD *)(v79 + 632) < 0x400u) )
    {
      *(_DWORD *)(v33 + 72) = 0;
      *(_DWORD *)(*(_QWORD *)v30 + 76LL) = (int)GetDpiDependentMetric(26, WindowDpiLastNotify) / 2;
LABEL_65:
      v38 = v82;
      goto LABEL_66;
    }
    v34 = *(_QWORD *)(v33 + 96) && *(_QWORD *)(v30 + 24);
    v75 |= v34;
    v35 = xxxMNItemSize(a1, v9, WindowDpiLastNotify, v24, v30, v31, (unsigned int *)&v77);
    v36 = v74;
    if ( v35 )
      v36 = 1;
    v74 = v36;
    v37 = (__int64)a1[2];
    if ( !v37 )
      v37 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v37, v30) == -1 )
      break;
    *(_QWORD *)(*(_QWORD *)v30 + 72LL) = v77;
    v38 = v82;
    if ( !v82 && (!*(_QWORD *)(*(_QWORD *)v30 + 96LL) || *(_QWORD *)(v30 + 24)) )
    {
      v39 = (__int64)a1[2];
      if ( !v39 )
        v39 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v39) )
        *(_DWORD *)(*(_QWORD *)v30 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      goto LABEL_65;
    }
LABEL_66:
    if ( v71 && *(_DWORD *)(*(_QWORD *)v30 + 76LL) < v71 )
      *(_DWORD *)(*(_QWORD *)v30 + 76LL) = v71;
    if ( !v26 )
      v70 = *(_DWORD *)(*(_QWORD *)v30 + 76LL);
    if ( !v38 )
    {
      v50 = *(_WORD **)(v30 + 24);
      if ( v50 && *v50 == 8 )
      {
        v51 = (__int64)a1[2];
        if ( !v51 )
          v51 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v51) )
          *(_DWORD *)(*(_QWORD *)v30 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      }
      v52 = *(_DWORD **)v30;
      if ( (**(_DWORD **)v30 & 0x60) != 0 )
      {
LABEL_104:
        v27 += v70;
        v28 = a5;
        v70 = v52[19];
      }
      else
      {
        v53 = v52[18];
        v54 = **a1;
        if ( v28 + v53 + *(_DWORD *)(GetDPIMETRICSForDpi() + 8) > (unsigned int)(*(_DWORD *)(v54 + 64) + a5) && v26 )
        {
          v52 = *(_DWORD **)v30;
          goto LABEL_104;
        }
      }
      v49 = v73;
      *(_DWORD *)(*(_QWORD *)v30 + 68LL) = v27;
      *(_DWORD *)(*(_QWORD *)v30 + 64LL) = v28;
      v48 = *(_DWORD **)v30;
      v28 += *(_DWORD *)(*(_QWORD *)v30 + 72LL);
      goto LABEL_106;
    }
    v40 = v26 + 1;
    v41 = **(_DWORD **)v30 & 0x60;
    if ( v41 || *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v40 )
    {
      v42 = v72;
      if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v40 && *(_DWORD *)(*(_QWORD *)v30 + 72LL) > v72 )
        v42 = *(_DWORD *)(*(_QWORD *)v30 + 72LL);
      xxxMNRecalcTabStrings(DCEx, (__int64)a1, v80, v26 + (v41 == 0), v42, v28);
      v43 = (__int64)a1[2];
      if ( !v43 )
        v43 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v43, v30) == -1 )
        break;
      if ( v41 )
      {
        if ( !v74 || !a2 || (v45 = 1, (*(_BYTE *)(*((_QWORD *)a2 + 5) + 21LL) & 2) != 0) )
          v45 = 4;
        v27 = a4;
        v28 = v45 + v44;
        v46 = v26;
        v80 = v26;
        v72 = *(_DWORD *)(*(_QWORD *)v30 + 72LL);
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v40 )
        {
          xxxMNRecalcTabStrings(DCEx, (__int64)a1, v26, v40, *(_DWORD *)(*(_QWORD *)v30 + 72LL), v28);
          v47 = (__int64)a1[2];
          if ( !v47 )
            v47 = **a1;
          if ( (unsigned int)MNGetpItemIndex(v47, v30) == -1 )
            goto LABEL_119;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v40 )
        *(_DWORD *)(**a1 + 64) = v44;
    }
    *(_DWORD *)(*(_QWORD *)v30 + 64LL) = v28;
    *(_DWORD *)(*(_QWORD *)v30 + 68LL) = v27;
    v48 = *(_DWORD **)v30;
    v27 += *(_DWORD *)(*(_QWORD *)v30 + 76LL);
    v49 = v27;
    if ( v73 >= v27 )
      v49 = v73;
LABEL_106:
    v55 = v48[18];
    if ( v72 >= v55 )
      v55 = v72;
    v72 = v55;
    v56 = v48[19];
    v57 = v70;
    if ( v70 != v56 )
    {
      if ( v70 >= v56 )
        v56 = v70;
      v70 = v56;
      v57 = v56;
      if ( !v82 )
      {
        v71 = v56;
        v70 = v56;
      }
    }
    v58 = v57 + v27;
    v59 = (__int64)a1[2];
    if ( v82 )
      v58 = v49;
    ++v26;
    v73 = v58;
    if ( !v59 )
      v59 = **a1;
    v9 = a2;
    v30 = MNGetpItemFromIndex(v59, v26);
    if ( v26 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      break;
    v24 = (HDC)DCEx;
  }
  v46 = v80;
LABEL_119:
  if ( !v75 || v46 )
  {
LABEL_129:
    *(_DWORD *)(**a1 + 72) = 0;
    goto LABEL_130;
  }
  v60 = **a1;
  if ( *(int *)(*(_QWORD *)(v60 + 40) + 40LL) < 0 )
  {
    *(_DWORD *)(v60 + 72) += 2;
    goto LABEL_131;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v60 + 40) + 40LL) & 0x4000000) != 0 )
  {
    v61 = **a1;
    DpiForSystem = GetDpiForSystem(v60);
    v63 = (unsigned int)*((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
    if ( *(_DWORD *)(v61 + 72) <= (unsigned int)v63 )
    {
      v65 = GetDpiForSystem(v63);
      v64 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, v65) + 2);
    }
    else
    {
      v64 = *(_DWORD *)(**a1 + 72);
    }
    *(_DWORD *)(**a1 + 72) = v64;
    *(_DWORD *)(**a1 + 72) += 2;
LABEL_130:
    v46 = v80;
  }
  else
  {
    v66 = GetDpiForSystem(v60);
    *(_DWORD *)(**a1 + 72) += *((__int16 *)GetOemBitmapInfoForDpi(63LL, v66) + 2) + 2;
  }
LABEL_131:
  if ( *(_DWORD *)(**a1 + 72) )
    *(_DWORD *)(**a1 + 72) += 2;
  if ( v46 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      if ( (***(_DWORD ***)(**a1 + 88) & 0x4000) != 0 )
      {
        v67 = 0;
        for ( i = *(__int64 **)(**a1 + 88);
              v67 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL);
              *(_DWORD *)(v69 + 64) = *(_DWORD *)(**a1 + 64) - *(_DWORD *)(v69 + 72) - *(_DWORD *)(v69 + 64) )
        {
          ++v67;
          v69 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFontInternal((__int64)DCEx, v78[0], 1);
  _ReleaseDC(DCEx);
  *(_DWORD *)(**a1 + 68) = v73 - a4;
  if ( a7 )
    *a7 = v71;
  return *(unsigned int *)(**a1 + 68);
}
