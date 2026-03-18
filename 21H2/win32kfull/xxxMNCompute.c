/*
 * XREFs of xxxMNCompute @ 0x1C00BEB88
 * Callers:
 *     xxxMenuBarCompute @ 0x1C00C2488 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00BD464 (xxxSendUAHInitMenuMessage.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     MNIsOwnerDrawItem @ 0x1C00BF45C (MNIsOwnerDrawItem.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0249BAC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v7; // r14d
  __int64 v9; // rdi
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  unsigned int WindowDpiLastNotify; // ebp
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  HDC v19; // rbx
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  int v22; // r15d
  __int64 *v23; // rcx
  _QWORD *v24; // r14
  __int64 v25; // rdx
  int v26; // r10d
  __int64 *v27; // rcx
  __int64 v28; // r8
  BOOL v29; // eax
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  _WORD *v35; // rax
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rdi
  unsigned int v39; // r9d
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 *v45; // rcx
  unsigned int v46; // ebx
  __int64 v48; // rcx
  __int64 *v49; // rax
  int v50; // ebx
  unsigned int v51; // edi
  int v52; // edx
  __int64 v53; // rcx
  int v54; // r9d
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // r11d
  __int64 *i; // r10
  __int64 v68; // r9
  unsigned int v69; // [rsp+40h] [rbp-98h]
  unsigned int v70; // [rsp+44h] [rbp-94h]
  int v71; // [rsp+48h] [rbp-90h]
  unsigned int v72; // [rsp+4Ch] [rbp-8Ch]
  int v73; // [rsp+50h] [rbp-88h]
  int v74; // [rsp+54h] [rbp-84h]
  HDC DCEx; // [rsp+58h] [rbp-80h]
  __int64 v76; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v77[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v78; // [rsp+80h] [rbp-58h]
  unsigned int v79; // [rsp+E0h] [rbp+8h]
  int v81; // [rsp+F0h] [rbp+18h]

  v7 = a4;
  v69 = 0;
  v76 = 0LL;
  v9 = a2;
  v70 = 0;
  v78 = gptiCurrent;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a3 + 40);
    v12 = *(_DWORD *)(v11 + 288) & 0xF;
    if ( v12 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v11 + 288) >> 8) & 0x1FF;
      goto LABEL_8;
    }
    if ( (*(_DWORD *)(v11 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
      goto LABEL_8;
    }
    if ( v12
      || (v13 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 424LL) + 284LL);
      goto LABEL_8;
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v48) + 284);
    goto LABEL_8;
  }
  WindowDpiLastNotify = 96;
LABEL_8:
  if ( v9 != *(_QWORD *)(**a1 + 80) )
  {
    v49 = *a1;
    v77[1] = v9;
    v77[0] = *v49 + 80;
    HMAssignmentLock(v77, 0LL);
  }
  if ( a7 )
  {
    v70 = *a7;
    v7 = a4;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    return 0LL;
  v15 = **a1;
  v81 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 40LL) & 1;
  if ( v81 )
  {
    v70 = 0;
  }
  else if ( v9 )
  {
    v15 = **a1;
    *(_DWORD *)(v15 + 64) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v15, a2) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(2LL, v16) & 0xF) == 3
    || a3
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v17 = 65539LL;
    v18 = a3;
  }
  else
  {
    v18 = 0LL;
    v17 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v18, 0LL, v17);
  v19 = DCEx;
  GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v72 = 0;
  v71 = 0;
  v79 = 0;
  v77[0] = GreSelectFontInternal(DCEx);
  if ( gihmodUserApiHook >= 0 && v9 )
    xxxSendUAHInitMenuMessage(v9, (__int64 ***)a1, (__int64)DCEx);
  v20 = 0;
  v74 = 0;
  v21 = v7;
  v73 = 0;
  v22 = a5;
  *(_DWORD *)(**a1 + 72) = 0;
  v23 = a1[2];
  if ( !v23 )
    v23 = (__int64 *)**a1;
  v24 = (_QWORD *)MNGetpItemFromIndex(v23, 0LL);
  v25 = **a1;
  if ( !*(_DWORD *)(*(_QWORD *)(v25 + 40) + 44LL) )
    goto LABEL_69;
  v26 = v81;
  while ( v24 )
  {
    v27 = a1[2];
    if ( !v27 )
      v27 = (__int64 *)**a1;
    v28 = *v24;
    if ( (*(_DWORD *)*v24 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(v27, v24) || *(_WORD *)(v78 + 632) < 0x400u) )
    {
      *(_DWORD *)(v28 + 72) = 0;
      *(_DWORD *)(*v24 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
LABEL_49:
      v33 = v81;
      goto LABEL_50;
    }
    v29 = *(_QWORD *)(v28 + 96) && v24[3];
    v74 |= v29;
    v30 = xxxMNItemSize(a1, v9, WindowDpiLastNotify, v19, v24, v26, &v76);
    v31 = v73;
    if ( v30 )
      v31 = 1;
    v73 = v31;
    v32 = (__int64)a1[2];
    if ( !v32 )
      v32 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v32, (__int64)v24) == -1 )
      break;
    *(_QWORD *)(*v24 + 72LL) = v76;
    v33 = v81;
    if ( !v81 && (!*(_QWORD *)(*v24 + 96LL) || v24[3]) )
    {
      v34 = (__int64)a1[2];
      if ( !v34 )
        v34 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v34) )
        *(_DWORD *)(*v24 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      goto LABEL_49;
    }
LABEL_50:
    if ( v70 && *(_DWORD *)(*v24 + 76LL) < v70 )
      *(_DWORD *)(*v24 + 76LL) = v70;
    if ( !v20 )
      v69 = *(_DWORD *)(*v24 + 76LL);
    if ( !v33 )
    {
      v35 = (_WORD *)v24[3];
      if ( v35 && *v35 == 8 )
      {
        v57 = (__int64)a1[2];
        if ( !v57 )
          v57 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v57) )
          *(_DWORD *)(*v24 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
      v36 = *v24;
      if ( (*(_DWORD *)*v24 & 0x60) != 0 )
      {
LABEL_122:
        v21 += v69;
        v22 = a5;
        v69 = *(_DWORD *)(v36 + 76);
      }
      else
      {
        v37 = *(_DWORD *)(v36 + 72);
        v38 = **a1;
        if ( v22 + v37 + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > (unsigned int)(*(_DWORD *)(v38 + 64)
                                                                                                  + a5)
          && v20 )
        {
          v36 = *v24;
          goto LABEL_122;
        }
      }
      v39 = v72;
      *(_DWORD *)(*v24 + 68LL) = v21;
      *(_DWORD *)(*v24 + 64LL) = v22;
      v40 = *v24;
      v22 += *(_DWORD *)(*v24 + 72LL);
      goto LABEL_59;
    }
    v50 = *(_DWORD *)*v24 & 0x60;
    if ( v50 || *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v20 + 1 )
    {
      v51 = v20 + 1;
      v52 = v71;
      if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v20 + 1 && *(_DWORD *)(*v24 + 72LL) > v71 )
        v52 = *(_DWORD *)(*v24 + 72LL);
      xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v79, v20 + (v50 == 0), v52, v22);
      v53 = (__int64)a1[2];
      if ( !v53 )
        v53 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v53, (__int64)v24) == -1 )
        break;
      if ( v50 )
      {
        if ( !v73 || !a2 || (v55 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
          v55 = 4;
        v21 = a4;
        v22 = v55 + v54;
        v46 = v20;
        v79 = v20;
        v71 = *(_DWORD *)(*v24 + 72LL);
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v51 )
        {
          xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v20, v51, *(_DWORD *)(*v24 + 72LL), v22);
          v56 = (__int64)a1[2];
          if ( !v56 )
            v56 = **a1;
          if ( (unsigned int)MNGetpItemIndex(v56, (__int64)v24) == -1 )
            goto LABEL_68;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v51 )
        *(_DWORD *)(**a1 + 64) = v54;
    }
    *(_DWORD *)(*v24 + 64LL) = v22;
    *(_DWORD *)(*v24 + 68LL) = v21;
    v40 = *v24;
    v21 += *(_DWORD *)(*v24 + 76LL);
    v39 = v21;
    if ( v72 >= v21 )
      v39 = v72;
LABEL_59:
    v41 = *(_DWORD *)(v40 + 72);
    if ( v71 >= v41 )
      v41 = v71;
    v71 = v41;
    v42 = *(_DWORD *)(v40 + 76);
    v43 = v69;
    if ( v69 != v42 )
    {
      if ( v69 >= v42 )
        v42 = v69;
      v69 = v42;
      v43 = v42;
      if ( !v81 )
      {
        v70 = v42;
        v69 = v42;
      }
    }
    v44 = v43 + v21;
    v45 = a1[2];
    if ( v81 )
      v44 = v39;
    ++v20;
    v72 = v44;
    if ( !v45 )
      v45 = (__int64 *)**a1;
    v9 = a2;
    v24 = (_QWORD *)MNGetpItemFromIndex(v45, v20);
    if ( v20 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      break;
    v19 = DCEx;
  }
  v46 = v79;
LABEL_68:
  if ( !v74 || v46 )
  {
LABEL_69:
    *(_DWORD *)(**a1 + 72) = 0;
LABEL_70:
    v46 = v79;
    goto LABEL_71;
  }
  v58 = **a1;
  if ( *(int *)(*(_QWORD *)(v58 + 40) + 40LL) < 0 )
  {
    *(_DWORD *)(v58 + 72) += 2;
    goto LABEL_71;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v58 + 40) + 40LL) & 0x4000000) != 0 )
  {
    v59 = **a1;
    DpiForSystem = GetDpiForSystem(v58, v25);
    v62 = (unsigned int)*(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4);
    if ( *(_DWORD *)(v59 + 72) <= (unsigned int)v62 )
    {
      v64 = GetDpiForSystem(v62, v61);
      v63 = *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v64) + 4);
    }
    else
    {
      v63 = *(_DWORD *)(**a1 + 72);
    }
    *(_DWORD *)(**a1 + 72) = v63;
    *(_DWORD *)(**a1 + 72) += 2;
    goto LABEL_70;
  }
  v65 = GetDpiForSystem(v58, v25);
  *(_DWORD *)(**a1 + 72) += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v65) + 4) + 2;
LABEL_71:
  if ( *(_DWORD *)(**a1 + 72) )
    *(_DWORD *)(**a1 + 72) += 2;
  if ( v46 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      if ( (***(_DWORD ***)(**a1 + 88) & 0x4000) != 0 )
      {
        v66 = 0;
        for ( i = *(__int64 **)(**a1 + 88);
              v66 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL);
              *(_DWORD *)(v68 + 64) = *(_DWORD *)(**a1 + 64) - *(_DWORD *)(v68 + 72) - *(_DWORD *)(v68 + 64) )
        {
          ++v66;
          v68 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFontInternal(DCEx);
  _ReleaseDC(DCEx);
  *(_DWORD *)(**a1 + 68) = v72 - a4;
  if ( a7 )
    *a7 = v70;
  return *(unsigned int *)(**a1 + 68);
}
