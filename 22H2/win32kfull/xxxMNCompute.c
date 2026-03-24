/*
 * XREFs of xxxMNCompute @ 0x1C0047BA4
 * Callers:
 *     xxxMenuBarCompute @ 0x1C0102284 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C0043460 (xxxSendUAHInitMenuMessage.c)
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C00480F0 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0048148 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0048BB8 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010710C (GetOemBitmapInfoForDpi.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E300 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        __int64 ***a1,
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
  __int64 v15; // r8
  __int64 v16; // rcx
  HDC v17; // rbx
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  int v20; // r15d
  __int64 *v21; // rcx
  _QWORD *v22; // r14
  __int64 *v23; // rdx
  int v24; // r9d
  __int64 *v25; // rcx
  __int64 v26; // r8
  BOOL v27; // eax
  int v28; // eax
  int v29; // ecx
  __int64 *v30; // rcx
  __int64 v31; // r8
  int v32; // ecx
  __int64 *v33; // rcx
  _WORD *v34; // rax
  __int64 v35; // rcx
  int v36; // ebx
  __int64 *v37; // rdi
  unsigned int v38; // r8d
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 *v44; // rcx
  unsigned int v45; // ebx
  __int64 v47; // rcx
  __int64 **v48; // rax
  int v49; // ebx
  unsigned int v50; // edi
  int v51; // edx
  __int64 *v52; // rcx
  int v53; // r9d
  int v54; // eax
  __int64 *v55; // rcx
  __int64 *v56; // rcx
  __int64 *v57; // rcx
  __int64 *v58; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // edx
  unsigned int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // r10d
  __int64 *i; // r9
  __int64 v67; // r8
  unsigned int v68; // [rsp+40h] [rbp-98h]
  unsigned int v69; // [rsp+44h] [rbp-94h]
  int v70; // [rsp+48h] [rbp-90h]
  unsigned int v71; // [rsp+4Ch] [rbp-8Ch]
  int v72; // [rsp+50h] [rbp-88h]
  int v73; // [rsp+54h] [rbp-84h]
  HDC DCEx; // [rsp+58h] [rbp-80h]
  __int64 v75; // [rsp+60h] [rbp-78h] BYREF
  __int64 v76; // [rsp+68h] [rbp-70h]
  __int64 v77; // [rsp+70h] [rbp-68h]
  _QWORD v78[11]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v79; // [rsp+E0h] [rbp+8h]
  int v81; // [rsp+F0h] [rbp+18h]

  v68 = 0;
  v7 = a4;
  v75 = 0LL;
  v69 = 0;
  v9 = a2;
  v76 = gptiCurrent;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a3 + 40);
    v12 = *(_DWORD *)(v11 + 288) & 0xF;
    if ( v12 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v11 + 288) >> 8) & 0x1FF;
      goto LABEL_8;
    }
    if ( (*(_DWORD *)(v11 + 232) & 0x8000000) != 0 )
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
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v47) + 284);
    goto LABEL_8;
  }
  WindowDpiLastNotify = 96;
LABEL_8:
  if ( v9 != (**a1)[10] )
  {
    v48 = *a1;
    v78[1] = v9;
    v78[0] = *v48 + 10;
    HMAssignmentLock(v78);
  }
  if ( a7 )
  {
    v69 = *a7;
    v7 = a4;
  }
  if ( !*(_DWORD *)((**a1)[5] + 44) )
    return 0LL;
  v81 = *(_DWORD *)((**a1)[5] + 40) & 1;
  if ( v81 )
  {
    v69 = 0;
  }
  else if ( v9 )
  {
    *((_DWORD *)**a1 + 16) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    || a3
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v15 = 65539LL;
    v16 = a3;
  }
  else
  {
    v16 = 0LL;
    v15 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v16, 0LL, v15);
  v17 = DCEx;
  GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v71 = 0;
  v70 = 0;
  v79 = 0;
  v77 = GreSelectFont(DCEx);
  if ( gihmodUserApiHook >= 0 && v9 )
    xxxSendUAHInitMenuMessage(v9, a1, (__int64)DCEx);
  v18 = 0;
  v73 = 0;
  v19 = v7;
  v72 = 0;
  v20 = a5;
  *((_DWORD *)**a1 + 18) = 0;
  v21 = (__int64 *)a1[2];
  if ( !v21 )
    v21 = **a1;
  v22 = (_QWORD *)MNGetpItemFromIndex(v21, 0LL);
  v23 = **a1;
  if ( !*(_DWORD *)(v23[5] + 44) )
    goto LABEL_68;
  v24 = v81;
  while ( v22 )
  {
    v25 = (__int64 *)a1[2];
    if ( !v25 )
      v25 = **a1;
    v26 = *v22;
    if ( (*(_DWORD *)*v22 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(v25, v22) || *(_WORD *)(v76 + 632) < 0x400u) )
    {
      *(_DWORD *)(v26 + 72) = 0;
      *(_DWORD *)(*v22 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
LABEL_48:
      v32 = v81;
      goto LABEL_49;
    }
    v27 = *(_QWORD *)(v26 + 96) && v22[3];
    v73 |= v27;
    v28 = xxxMNItemSize(a1, v9, WindowDpiLastNotify, v17, v22, v24, &v75);
    v29 = v72;
    if ( v28 )
      v29 = 1;
    v72 = v29;
    v30 = (__int64 *)a1[2];
    if ( !v30 )
      v30 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v30, v22) == -1 )
      break;
    *(_QWORD *)(*v22 + 72LL) = v75;
    v32 = v81;
    if ( !v81 && (!*(_QWORD *)(*v22 + 96LL) || v22[3]) )
    {
      v33 = (__int64 *)a1[2];
      if ( !v33 )
        v33 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v33, v23, v31) )
        *(_DWORD *)(*v22 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      goto LABEL_48;
    }
LABEL_49:
    if ( v69 && *(_DWORD *)(*v22 + 76LL) < v69 )
      *(_DWORD *)(*v22 + 76LL) = v69;
    if ( !v18 )
      v68 = *(_DWORD *)(*v22 + 76LL);
    if ( !v32 )
    {
      v34 = (_WORD *)v22[3];
      if ( v34 && *v34 == 8 )
      {
        v56 = (__int64 *)a1[2];
        if ( !v56 )
          v56 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v56, v69, v31) )
          *(_DWORD *)(*v22 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
      v35 = *v22;
      if ( (*(_DWORD *)*v22 & 0x60) != 0 )
      {
LABEL_121:
        v19 += v68;
        v20 = a5;
        v68 = *(_DWORD *)(v35 + 76);
      }
      else
      {
        v36 = *(_DWORD *)(v35 + 72);
        v37 = **a1;
        if ( v20 + v36 + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > (unsigned int)(*((_DWORD *)v37 + 16)
                                                                                                  + a5)
          && v18 )
        {
          v35 = *v22;
          goto LABEL_121;
        }
      }
      v38 = v71;
      *(_DWORD *)(*v22 + 68LL) = v19;
      *(_DWORD *)(*v22 + 64LL) = v20;
      v39 = *v22;
      v20 += *(_DWORD *)(*v22 + 72LL);
      goto LABEL_58;
    }
    v49 = *(_DWORD *)*v22 & 0x60;
    if ( v49 || *(_DWORD *)((**a1)[5] + 44) == v18 + 1 )
    {
      v50 = v18 + 1;
      v51 = v70;
      if ( *(_DWORD *)((**a1)[5] + 44) == v18 + 1 && *(_DWORD *)(*v22 + 72LL) > v70 )
        v51 = *(_DWORD *)(*v22 + 72LL);
      xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v79, v18 + (v49 == 0), v51, v20);
      v52 = (__int64 *)a1[2];
      if ( !v52 )
        v52 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v52, v22) == -1 )
        break;
      if ( v49 )
      {
        if ( !v72 || !a2 || (v54 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
          v54 = 4;
        v19 = a4;
        v20 = v54 + v53;
        v45 = v18;
        v79 = v18;
        v70 = *(_DWORD *)(*v22 + 72LL);
        if ( *(_DWORD *)((**a1)[5] + 44) == v50 )
        {
          xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v18, v50, *(_DWORD *)(*v22 + 72LL), v20);
          v55 = (__int64 *)a1[2];
          if ( !v55 )
            v55 = **a1;
          if ( (unsigned int)MNGetpItemIndex(v55, v22) == -1 )
            goto LABEL_67;
        }
      }
      if ( *(_DWORD *)((**a1)[5] + 44) == v50 )
        *((_DWORD *)**a1 + 16) = v53;
    }
    *(_DWORD *)(*v22 + 64LL) = v20;
    *(_DWORD *)(*v22 + 68LL) = v19;
    v39 = *v22;
    v19 += *(_DWORD *)(*v22 + 76LL);
    v38 = v19;
    if ( v71 >= v19 )
      v38 = v71;
LABEL_58:
    v40 = *(_DWORD *)(v39 + 72);
    if ( v70 >= v40 )
      v40 = v70;
    v70 = v40;
    v41 = *(_DWORD *)(v39 + 76);
    v42 = v68;
    if ( v68 != v41 )
    {
      if ( v68 >= v41 )
        v41 = v68;
      v68 = v41;
      v42 = v41;
      if ( !v81 )
      {
        v69 = v41;
        v68 = v41;
      }
    }
    v43 = v42 + v19;
    v44 = (__int64 *)a1[2];
    if ( v81 )
      v43 = v38;
    ++v18;
    v71 = v43;
    if ( !v44 )
      v44 = **a1;
    v9 = a2;
    v22 = (_QWORD *)MNGetpItemFromIndex(v44, v18);
    if ( v18 >= *(_DWORD *)((**a1)[5] + 44) )
      break;
    v17 = DCEx;
  }
  v45 = v79;
LABEL_67:
  if ( !v73 || v45 )
  {
LABEL_68:
    *((_DWORD *)**a1 + 18) = 0;
LABEL_69:
    v45 = v79;
    goto LABEL_70;
  }
  v57 = **a1;
  if ( *(int *)(v57[5] + 40) >= 0 )
  {
    v58 = **a1;
    if ( (*(_DWORD *)(v57[5] + 40) & 0x4000000) != 0 )
    {
      DpiForSystem = GetDpiForSystem(v57, v23);
      v61 = (unsigned int)*(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4);
      if ( *((_DWORD *)v58 + 18) <= (unsigned int)v61 )
      {
        v63 = GetDpiForSystem(v61, v60);
        v62 = *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v63) + 4);
      }
      else
      {
        v62 = *((_DWORD *)**a1 + 18);
      }
      *((_DWORD *)**a1 + 18) = v62;
      *((_DWORD *)**a1 + 18) += 2;
    }
    else
    {
      v64 = GetDpiForSystem(v57, v23);
      *((_DWORD *)v58 + 18) += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v64) + 4) + 2;
    }
    goto LABEL_69;
  }
  *((_DWORD *)v57 + 18) += 2;
LABEL_70:
  if ( *((_DWORD *)**a1 + 18) )
    *((_DWORD *)**a1 + 18) += 2;
  if ( v45 )
  {
    if ( *(_DWORD *)((**a1)[5] + 44) )
    {
      if ( (**(_DWORD **)(**a1)[11] & 0x4000) != 0 )
      {
        v65 = 0;
        for ( i = (__int64 *)(**a1)[11];
              v65 < *(_DWORD *)((**a1)[5] + 44);
              *(_DWORD *)(v67 + 64) = *((_DWORD *)**a1 + 16) - *(_DWORD *)(v67 + 72) - *(_DWORD *)(v67 + 64) )
        {
          ++v65;
          v67 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFont(DCEx);
  _ReleaseDC(DCEx);
  *((_DWORD *)**a1 + 17) = v71 - a4;
  if ( a7 )
    *a7 = v69;
  return *((unsigned int *)**a1 + 17);
}
