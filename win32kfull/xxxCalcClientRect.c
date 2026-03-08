/*
 * XREFs of xxxCalcClientRect @ 0x1C00AAA20
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0149E06 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     NtUserUpdateClientRect @ 0x1C01E0420 (NtUserUpdateClientRect.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     GetCaptionHeight @ 0x1C0044AA4 (GetCaptionHeight.c)
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A8678 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00D902C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C07C0 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxMenuBarCompute @ 0x1C023BEA8 (xxxMenuBarCompute.c)
 */

_QWORD *__fastcall xxxCalcClientRect(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // esi
  int v11; // edi
  char v12; // dl
  _DWORD *v13; // rax
  int v14; // esi
  int v15; // edi
  int v16; // r13d
  int v17; // r12d
  __int64 v18; // rax
  int v19; // r12d
  int v20; // esi
  int v21; // edi
  _DWORD *v22; // rax
  int v23; // esi
  int v24; // edi
  int v25; // r13d
  int v26; // r12d
  __int64 v27; // rcx
  int v28; // r15d
  __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // edi
  __int64 v32; // rax
  unsigned int v33; // r12d
  int v34; // eax
  int v35; // r13d
  int v36; // esi
  int v37; // r8d
  int DpiDependentMetric; // eax
  int v39; // r13d
  signed int v40; // esi
  signed int v41; // edi
  signed int v42; // r12d
  signed int v43; // r15d
  __int64 v44; // rdi
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 *v48; // rax
  _QWORD *result; // rax
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  int v52; // r15d
  __int64 v53; // rcx
  int v54; // edx
  int v55; // eax
  int v56; // edi
  int v57; // r15d
  int v58; // esi
  int v59; // edi
  _DWORD *v60; // rax
  int v61; // esi
  int v62; // edi
  int v63; // r12d
  int v64; // r15d
  __int64 v65; // rax
  int v66; // edx
  int WindowDpiLastNotify; // eax
  int v68; // r13d
  int v69; // edx
  __int64 v70; // rdi
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rcx
  void *v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rcx
  void *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // [rsp+38h] [rbp-39h]
  __int64 v86; // [rsp+40h] [rbp-31h]
  __int128 v87; // [rsp+48h] [rbp-29h]
  __int128 v88; // [rsp+48h] [rbp-29h]
  __int64 *v89; // [rsp+58h] [rbp-19h] BYREF
  __int64 v90; // [rsp+60h] [rbp-11h] BYREF
  __int64 v91; // [rsp+68h] [rbp-9h]
  __int128 v92; // [rsp+70h] [rbp-1h] BYREF
  __int64 v93; // [rsp+80h] [rbp+Fh]
  char v94; // [rsp+D8h] [rbp+67h]
  int v97; // [rsp+F0h] [rbp+7Fh]
  int v98; // [rsp+F0h] [rbp+7Fh]
  int v99; // [rsp+F0h] [rbp+7Fh]

  v4 = 0LL;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v89 = (__int64 *)gSmartObjNullRef;
  v90 = *(_QWORD *)(v5 + 1512);
  *(_QWORD *)(v5 + 1512) = &v90;
  v8 = a1[5];
  v93 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v9 = *(_DWORD *)(v8 + 28);
  v10 = *(_DWORD *)(v8 + 24);
  v11 = *(_DWORD *)(v8 + 232);
  v12 = *(_BYTE *)(v8 + 16) & 0xF;
  *(_BYTE *)(v8 + 16) &= 0xF0u;
  v94 = v12;
  v85 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = (_DWORD *)a1[5];
    v14 = v13[6] ^ v10;
    v15 = v13[58] ^ v11;
    v16 = v13[7];
    v17 = v16 ^ v9;
    if ( !v17 )
    {
      if ( v14 )
        goto LABEL_95;
      if ( !v15 )
        goto LABEL_7;
    }
    if ( (v17 & 0xB1CF0000) != 0 )
    {
      v98 = -16;
      goto LABEL_99;
    }
LABEL_95:
    if ( (v14 & 0x4E27A9) != 0 )
    {
      v98 = -20;
      v16 = v13[6];
    }
    else
    {
      if ( (v15 & 0x12C0) == 0 )
        goto LABEL_100;
      v98 = -268435456;
      v16 = v13[58];
    }
LABEL_99:
    DirtyVisRgnTrackers(a1);
    v70 = *a1;
    v72 = (void *)ReferenceDwmApiPort(v71);
    DwmAsyncChildStyleChange(v72, v70, v98, v16);
LABEL_100:
    if ( (v14 & 0x200A0381) != 0 || (v17 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL);
  }
LABEL_7:
  v18 = a1[5];
  v19 = *(_DWORD *)(v18 + 28);
  v20 = *(_DWORD *)(v18 + 24);
  v21 = *(_DWORD *)(v18 + 232);
  *(_BYTE *)(v18 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_11;
  v22 = (_DWORD *)a1[5];
  v23 = v22[6] ^ v20;
  v24 = v22[58] ^ v21;
  v25 = v22[7];
  v26 = v25 ^ v19;
  if ( !v26 )
  {
    if ( v23 )
      goto LABEL_104;
    if ( !v24 )
      goto LABEL_11;
  }
  if ( (v26 & 0xB1CF0000) != 0 )
  {
    v99 = -16;
LABEL_108:
    DirtyVisRgnTrackers(a1);
    v73 = *a1;
    v75 = (void *)ReferenceDwmApiPort(v74);
    DwmAsyncChildStyleChange(v75, v73, v99, v25);
    goto LABEL_109;
  }
LABEL_104:
  if ( (v23 & 0x4E27A9) != 0 )
  {
    v99 = -20;
    v25 = v22[6];
    goto LABEL_108;
  }
  if ( (v24 & 0x12C0) != 0 )
  {
    v99 = -268435456;
    v25 = v22[58];
    goto LABEL_108;
  }
LABEL_109:
  if ( (v26 & 0xC40000) != 0 || (v23 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_11:
  v27 = a1[5];
  if ( (*(_BYTE *)(v27 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
    goto LABEL_43;
  }
  v86 = HIDWORD(*(_QWORD *)a2);
  v87 = *(_OWORD *)a2;
  if ( (*(_BYTE *)(v27 + 30) & 0xC0) == 0xC0 )
  {
    v57 = *(_DWORD *)(v27 + 28);
    v58 = *(_DWORD *)(v27 + 24);
    v59 = *(_DWORD *)(v27 + 232);
    *(_BYTE *)(v27 + 16) |= 8u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_70:
      v28 = GetCaptionHeight((__int64)a1) + DWORD1(v87);
      goto LABEL_14;
    }
    v60 = (_DWORD *)a1[5];
    v61 = v60[6] ^ v58;
    v62 = v60[58] ^ v59;
    v63 = v60[7];
    v64 = v63 ^ v57;
    if ( !v64 )
    {
      if ( v61 )
      {
LABEL_113:
        if ( (v61 & 0x4E27A9) != 0 )
        {
          v85 = -20;
          v63 = v60[6];
        }
        else
        {
          if ( (v62 & 0x12C0) == 0 )
          {
LABEL_118:
            if ( (v64 & 0xC40000) != 0 || (v61 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_70;
          }
          v85 = -268435456;
          v63 = v60[58];
        }
LABEL_117:
        DirtyVisRgnTrackers(a1);
        v76 = *a1;
        v78 = (void *)ReferenceDwmApiPort(v77);
        DwmAsyncChildStyleChange(v78, v76, v85, v63);
        goto LABEL_118;
      }
      if ( !v62 )
        goto LABEL_70;
    }
    if ( (v64 & 0xB1CF0000) != 0 )
      goto LABEL_117;
    goto LABEL_113;
  }
  v28 = HIDWORD(*(_QWORD *)a2);
LABEL_14:
  v29 = a1[5];
  v30 = *(_DWORD *)(v29 + 288) & 0xF;
  if ( v30 == 3 )
  {
    v31 = (*(_DWORD *)(v29 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v29 + 232) & 0x400) != 0 )
  {
    v50 = *(_WORD *)(v29 + 286);
    if ( !v50 )
      v50 = *(_WORD *)(v29 + 284);
    v31 = v50;
  }
  else if ( !v30 && (v65 = *(_QWORD *)(a1[2] + 456)) != 0 && (*(_DWORD *)(**(_QWORD **)(v65 + 8) + 64LL) & 1) != 0 )
  {
    v31 = 96;
  }
  else
  {
    v31 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424) + 284LL);
  }
  v32 = a1[2];
  if ( *(_DWORD *)(v32 + 632) > 0x9900u )
    v33 = 0;
  else
    v33 = *(_DWORD *)(v32 + 648);
  v34 = *(_DWORD *)(v29 + 24);
  v35 = *(_DWORD *)(v29 + 28);
  if ( (v34 & 0x100) != 0 )
    v69 = 2;
  else
    v69 = (v34 & 0x20000) != 0;
  v36 = v69 + 1;
  v37 = v35 & 0xC00000;
  if ( (v35 & 0xC00000) == 0 && (v34 & 1) == 0 )
    v36 = v69;
  if ( (v33 & 0x10000000) != 0 )
  {
    DpiDependentMetric = 0;
  }
  else if ( (v33 & 0x20000000) != 0 )
  {
    DpiDependentMetric = 0;
  }
  else if ( v31 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    DpiDependentMetric = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( v31 == 96 )
  {
    DpiDependentMetric = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(v31) == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v31);
    else
      DpiDependentMetric = GetDpiDependentMetric(29, v31);
    v37 = v35 & 0xC00000;
  }
  if ( (v35 & 0x40000) != 0 || (v39 = v36, DpiDependentMetric > 0) && v37 == 12582912 && (v33 & 0x30000000) == 0 )
    v39 = v36 + DpiDependentMetric + GetResizeBorderWidthForDpiWithAppCompat2(v31, v33);
  v40 = v87 + v39;
  v41 = HIDWORD(v87) - v39;
  LODWORD(v87) = v87 + v39;
  v42 = DWORD2(v87) - v39;
  HIDWORD(v87) = v41;
  v43 = v28 + v39;
  DWORD2(v88) = DWORD2(v87) - v39;
  DWORD1(v88) = v43;
  v97 = v41;
  if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) != 0x40 )
  {
    v44 = a1[21];
    v91 = 0LL;
    if ( v44 != *v89 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v89);
      if ( v44 )
      {
        v89 = *(__int64 **)(v44 + 152);
        ++*((_DWORD *)v89 + 2);
      }
      else
      {
        v89 = (__int64 *)gSmartObjNullRef;
      }
    }
    if ( (v91 || *v89) && (SetOrClrWF(1, a1, 1u, 1), !a3) )
    {
      v79 = v91;
      if ( !v91 )
        v79 = *v89;
      *(_DWORD *)(*(_QWORD *)(v79 + 40) + 40LL) |= 0x200u;
      ThreadLockAlways(v79, &v92);
      v42 = DWORD2(v88);
      v40 = v88;
      v43 += xxxMenuBarCompute((unsigned int)&v89, (_DWORD)a1, v43 - (int)v86, v39, DWORD2(v88) - (int)v88);
      DWORD1(v88) = v43;
      v80 = *(_QWORD *)(*((_QWORD *)&v92 + 1) + 40LL);
      *(_DWORD *)(v80 + 40) &= ~0x200u;
      ThreadUnlock1(v80, v81, v82);
    }
    else
    {
      v42 = DWORD2(v88);
      v40 = v88;
    }
    v41 = HIDWORD(v88);
  }
  v45 = a1[5];
  v46 = 0;
  if ( v43 >= v41 )
    v41 = v43;
  HIDWORD(v88) = v41;
  if ( (*(_BYTE *)(v45 + 21) & 2) != 0 && v40 >= v42 )
  {
    DWORD2(v88) = v40;
  }
  else
  {
    LOBYTE(v46) = v43 >= v97;
    if ( !v46 )
    {
      if ( (*(_BYTE *)(v45 + 25) & 2) != 0 && v42 - v40 >= 4 && v41 - v43 >= 4 )
      {
        SetOrClrWF(1, a1, 0x410u, 1);
        v40 += 2;
        v42 -= 2;
        v43 += 2;
        *(_QWORD *)&v88 = __PAIR64__(v43, v40);
        v41 -= 2;
        *((_QWORD *)&v88 + 1) = __PAIR64__(v41, v42);
      }
      v51 = a1[5];
      if ( (*(_BYTE *)(v51 + 30) & 0x10) != 0
        && ((v66 = *(_DWORD *)(v51 + 288) & 0xF, v66 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v51 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v51 + 232) & 0x400) != 0
          ? (WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1))
          : v66 || (v83 = *(_QWORD *)(a1[2] + 456)) == 0 || (*(_DWORD *)(**(_QWORD **)(v83 + 8) + 64LL) & 1) == 0
          ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424) + 284LL))
          : (WindowDpiLastNotify = 96),
            v68 = GetDpiDependentMetric(1, WindowDpiLastNotify),
            v41 - v43 > v68) )
      {
        SetOrClrWF(1, a1, 4u, 1);
        v52 = a3;
        if ( !a3 )
          HIDWORD(v88) = v41 - v68;
      }
      else
      {
        v52 = a3;
      }
      v53 = a1[5];
      if ( (*(_BYTE *)(v53 + 30) & 0x20) != 0 )
      {
        v54 = *(_DWORD *)(v53 + 288) & 0xF;
        if ( v54 == 3 )
        {
          v55 = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v53 + 232) & 0x400) != 0 )
        {
          v55 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v54 && (v84 = *(_QWORD *)(a1[2] + 456)) != 0 && (*(_DWORD *)(**(_QWORD **)(v84 + 8) + 64LL) & 1) != 0 )
        {
          v55 = 96;
        }
        else
        {
          v55 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424) + 284LL);
        }
        v56 = GetDpiDependentMetric(0, v55);
        if ( v42 - v40 >= v56 )
        {
          SetOrClrWF(1, a1, 2u, 1);
          if ( !v52 )
          {
            if ( ((*(_BYTE *)(a1[5] + 26) & 0x40) != 0) == ((*(_BYTE *)(a1[5] + 25) & 0x40) != 0) )
              DWORD2(v88) = v42 - v56;
            else
              LODWORD(v88) = v56 + v40;
          }
        }
      }
    }
  }
  *(_OWORD *)a2 = v88;
LABEL_43:
  v47 = a1[5];
  if ( v94 != (*(_BYTE *)(v47 + 16) & 0xF) && *(char *)(v47 + 23) < 0 )
    xxxWindowEvent(0x8004u, (struct tagWND *)a1, 0, 0, 1);
  v48 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v48 )
    v4 = *v48;
  if ( v89 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v89 + 2) )
  {
    if ( *((_BYTE *)v89 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v89);
  }
  result = *(_QWORD **)(v4 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v4 + 1512) = result;
  }
  return result;
}
