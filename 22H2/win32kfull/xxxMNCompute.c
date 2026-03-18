/*
 * XREFs of xxxMNCompute @ 0x1C0238860
 * Callers:
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxMenuBarCompute @ 0x1C0239240 (xxxMenuBarCompute.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0041198 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C0064060 (MNGetpItemIndex.c)
 *     MNGetpItemFromIndex @ 0x1C00652C8 (MNGetpItemFromIndex.c)
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     MNIsUAHMenu @ 0x1C0216918 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0234ACC (MNIsOwnerDrawItem.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C02377EC (xxxSendUAHInitMenuMessage.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
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
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int WindowDpiLastNotify; // ebp
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  HDC v30; // rbx
  __int64 *DPIMETRICSForDpi; // rax
  unsigned int v32; // r13d
  unsigned int v33; // r12d
  int v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // r14
  int v37; // r9d
  __int64 v38; // rcx
  __int64 v39; // r8
  BOOL v40; // eax
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rcx
  unsigned int v46; // edi
  int v47; // ebx
  int v48; // edx
  __int64 v49; // rcx
  int v50; // r9d
  int v51; // eax
  unsigned int v52; // ebx
  __int64 v53; // rcx
  _DWORD *v54; // rcx
  unsigned int v55; // r8d
  _WORD *v56; // rax
  __int64 v57; // rcx
  _DWORD *v58; // rcx
  int v59; // ebx
  __int64 v60; // rdi
  int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // ecx
  unsigned int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v69; // rcx
  int v70; // edx
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // r11d
  __int64 *i; // r10
  __int64 v75; // r9
  unsigned int v76; // [rsp+40h] [rbp-98h]
  unsigned int v77; // [rsp+44h] [rbp-94h]
  int v78; // [rsp+48h] [rbp-90h]
  unsigned int v79; // [rsp+4Ch] [rbp-8Ch]
  int v80; // [rsp+50h] [rbp-88h]
  int v81; // [rsp+54h] [rbp-84h]
  Gre::Base *DCEx; // [rsp+58h] [rbp-80h]
  __int64 v83; // [rsp+60h] [rbp-78h] BYREF
  __int64 v84[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v85; // [rsp+80h] [rbp-58h]
  unsigned int v86; // [rsp+E0h] [rbp+8h]
  int v88; // [rsp+F0h] [rbp+18h]

  v7 = a4;
  v76 = 0;
  v83 = 0LL;
  v9 = a2;
  v77 = 0;
  v85 = gptiCurrent;
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
  if ( v9 != *(_QWORD *)(**a1 + 80) )
  {
    v17 = *a1;
    v84[1] = v9;
    v84[0] = *v17 + 80;
    HMAssignmentLock(v84, 0LL);
  }
  if ( a7 )
  {
    v77 = *a7;
    v7 = a4;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    return 0LL;
  v19 = **a1;
  v88 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 40LL) & 1;
  if ( v88 )
  {
    v77 = 0;
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
    && *((_QWORD *)PtiCurrentShared(v21, v20, v22, v23) + 57)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v25, v24, v26, v27) + 57) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v29 = 65539LL;
    v28 = a3;
  }
  else
  {
    v28 = 0LL;
    v29 = 3LL;
  }
  DCEx = (Gre::Base *)_GetDCEx(v28, 0LL, v29);
  v30 = (HDC)DCEx;
  DPIMETRICSForDpi = (__int64 *)GetDPIMETRICSForDpi();
  v79 = 0;
  v78 = 0;
  v86 = 0;
  v84[0] = GreSelectFontInternal((__int64)DCEx, *DPIMETRICSForDpi, 1);
  if ( gihmodUserApiHook >= 0 && v9 )
    xxxSendUAHInitMenuMessage(v9, (__int64)a1, (__int64)DCEx);
  v32 = 0;
  v81 = 0;
  v33 = v7;
  v80 = 0;
  v34 = a5;
  *(_DWORD *)(**a1 + 72) = 0;
  v35 = (__int64)a1[2];
  if ( !v35 )
    v35 = **a1;
  v36 = MNGetpItemFromIndex(v35, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    goto LABEL_129;
  v37 = v88;
  while ( v36 )
  {
    v38 = (__int64)a1[2];
    if ( !v38 )
      v38 = **a1;
    v39 = *(_QWORD *)v36;
    if ( (**(_DWORD **)v36 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(v38, (_DWORD **)v36) || *(_WORD *)(v85 + 632) < 0x400u) )
    {
      *(_DWORD *)(v39 + 72) = 0;
      *(_DWORD *)(*(_QWORD *)v36 + 76LL) = (int)GetDpiDependentMetric(26, WindowDpiLastNotify) / 2;
LABEL_65:
      v44 = v88;
      goto LABEL_66;
    }
    v40 = *(_QWORD *)(v39 + 96) && *(_QWORD *)(v36 + 24);
    v81 |= v40;
    v41 = xxxMNItemSize(a1, v9, WindowDpiLastNotify, v30, v36, v37, (unsigned int *)&v83);
    v42 = v80;
    if ( v41 )
      v42 = 1;
    v80 = v42;
    v43 = (__int64)a1[2];
    if ( !v43 )
      v43 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v43, v36) == -1 )
      break;
    *(_QWORD *)(*(_QWORD *)v36 + 72LL) = v83;
    v44 = v88;
    if ( !v88 && (!*(_QWORD *)(*(_QWORD *)v36 + 96LL) || *(_QWORD *)(v36 + 24)) )
    {
      v45 = (__int64)a1[2];
      if ( !v45 )
        v45 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v45) )
        *(_DWORD *)(*(_QWORD *)v36 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      goto LABEL_65;
    }
LABEL_66:
    if ( v77 && *(_DWORD *)(*(_QWORD *)v36 + 76LL) < v77 )
      *(_DWORD *)(*(_QWORD *)v36 + 76LL) = v77;
    if ( !v32 )
      v76 = *(_DWORD *)(*(_QWORD *)v36 + 76LL);
    if ( !v44 )
    {
      v56 = *(_WORD **)(v36 + 24);
      if ( v56 && *v56 == 8 )
      {
        v57 = (__int64)a1[2];
        if ( !v57 )
          v57 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v57) )
          *(_DWORD *)(*(_QWORD *)v36 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      }
      v58 = *(_DWORD **)v36;
      if ( (**(_DWORD **)v36 & 0x60) != 0 )
      {
LABEL_104:
        v33 += v76;
        v34 = a5;
        v76 = v58[19];
      }
      else
      {
        v59 = v58[18];
        v60 = **a1;
        if ( v34 + v59 + *(_DWORD *)(GetDPIMETRICSForDpi() + 8) > (unsigned int)(*(_DWORD *)(v60 + 64) + a5) && v32 )
        {
          v58 = *(_DWORD **)v36;
          goto LABEL_104;
        }
      }
      v55 = v79;
      *(_DWORD *)(*(_QWORD *)v36 + 68LL) = v33;
      *(_DWORD *)(*(_QWORD *)v36 + 64LL) = v34;
      v54 = *(_DWORD **)v36;
      v34 += *(_DWORD *)(*(_QWORD *)v36 + 72LL);
      goto LABEL_106;
    }
    v46 = v32 + 1;
    v47 = **(_DWORD **)v36 & 0x60;
    if ( v47 || *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v46 )
    {
      v48 = v78;
      if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v46 && *(_DWORD *)(*(_QWORD *)v36 + 72LL) > v78 )
        v48 = *(_DWORD *)(*(_QWORD *)v36 + 72LL);
      xxxMNRecalcTabStrings(DCEx, (__int64)a1, v86, v32 + (v47 == 0), v48, v34);
      v49 = (__int64)a1[2];
      if ( !v49 )
        v49 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v49, v36) == -1 )
        break;
      if ( v47 )
      {
        if ( !v80 || !a2 || (v51 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
          v51 = 4;
        v33 = a4;
        v34 = v51 + v50;
        v52 = v32;
        v86 = v32;
        v78 = *(_DWORD *)(*(_QWORD *)v36 + 72LL);
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v46 )
        {
          xxxMNRecalcTabStrings(DCEx, (__int64)a1, v32, v46, *(_DWORD *)(*(_QWORD *)v36 + 72LL), v34);
          v53 = (__int64)a1[2];
          if ( !v53 )
            v53 = **a1;
          if ( (unsigned int)MNGetpItemIndex(v53, v36) == -1 )
            goto LABEL_119;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v46 )
        *(_DWORD *)(**a1 + 64) = v50;
    }
    *(_DWORD *)(*(_QWORD *)v36 + 64LL) = v34;
    *(_DWORD *)(*(_QWORD *)v36 + 68LL) = v33;
    v54 = *(_DWORD **)v36;
    v33 += *(_DWORD *)(*(_QWORD *)v36 + 76LL);
    v55 = v33;
    if ( v79 >= v33 )
      v55 = v79;
LABEL_106:
    v61 = v54[18];
    if ( v78 >= v61 )
      v61 = v78;
    v78 = v61;
    v62 = v54[19];
    v63 = v76;
    if ( v76 != v62 )
    {
      if ( v76 >= v62 )
        v62 = v76;
      v76 = v62;
      v63 = v62;
      if ( !v88 )
      {
        v77 = v62;
        v76 = v62;
      }
    }
    v64 = v63 + v33;
    v65 = (__int64)a1[2];
    if ( v88 )
      v64 = v55;
    ++v32;
    v79 = v64;
    if ( !v65 )
      v65 = **a1;
    v9 = a2;
    v36 = MNGetpItemFromIndex(v65, v32);
    if ( v32 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      break;
    v30 = (HDC)DCEx;
  }
  v52 = v86;
LABEL_119:
  if ( !v81 || v52 )
  {
LABEL_129:
    *(_DWORD *)(**a1 + 72) = 0;
    goto LABEL_130;
  }
  v66 = **a1;
  if ( *(int *)(*(_QWORD *)(v66 + 40) + 40LL) < 0 )
  {
    *(_DWORD *)(v66 + 72) += 2;
    goto LABEL_131;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v66 + 40) + 40LL) & 0x4000000) != 0 )
  {
    v67 = **a1;
    DpiForSystem = GetDpiForSystem(v66);
    v69 = (unsigned int)*((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
    if ( *(_DWORD *)(v67 + 72) <= (unsigned int)v69 )
    {
      v71 = GetDpiForSystem(v69);
      v70 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, v71) + 2);
    }
    else
    {
      v70 = *(_DWORD *)(**a1 + 72);
    }
    *(_DWORD *)(**a1 + 72) = v70;
    *(_DWORD *)(**a1 + 72) += 2;
LABEL_130:
    v52 = v86;
  }
  else
  {
    v72 = GetDpiForSystem(v66);
    *(_DWORD *)(**a1 + 72) += *((__int16 *)GetOemBitmapInfoForDpi(63LL, v72) + 2) + 2;
  }
LABEL_131:
  if ( *(_DWORD *)(**a1 + 72) )
    *(_DWORD *)(**a1 + 72) += 2;
  if ( v52 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      if ( (***(_DWORD ***)(**a1 + 88) & 0x4000) != 0 )
      {
        v73 = 0;
        for ( i = *(__int64 **)(**a1 + 88);
              v73 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL);
              *(_DWORD *)(v75 + 64) = *(_DWORD *)(**a1 + 64) - *(_DWORD *)(v75 + 72) - *(_DWORD *)(v75 + 64) )
        {
          ++v73;
          v75 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFontInternal((__int64)DCEx, v84[0], 1);
  _ReleaseDC(DCEx);
  *(_DWORD *)(**a1 + 68) = v79 - a4;
  if ( a7 )
    *a7 = v77;
  return *(unsigned int *)(**a1 + 68);
}
