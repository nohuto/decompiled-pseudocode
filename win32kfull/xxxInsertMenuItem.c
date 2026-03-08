/*
 * XREFs of xxxInsertMenuItem @ 0x1C00A7ADC
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C00A7020 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00A07D4 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNFreeItem @ 0x1C00A25D0 (MNFreeItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A6850 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00A69F0 (MNGetPopupFromMenu.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A8678 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C00E5104 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0234140 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1C023B2B8 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxInsertMenuItem(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned __int16 *a5)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int v10; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdi
  __int64 *v13; // rax
  unsigned int v14; // r12d
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rax
  int v18; // r10d
  __int64 v19; // rcx
  int **v20; // rdi
  __int64 v21; // r15
  int v22; // edx
  unsigned int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rbx
  __int64 *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rbx
  __int64 *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rbx
  __int64 *v47; // rax
  _QWORD *v48; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  size_t v53; // r14
  __int64 v54; // r10
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  char v58; // cl
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rcx
  signed int v62; // eax
  __int64 *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rcx
  unsigned int v67; // r14d
  unsigned __int64 v68; // rdi
  __int64 v69; // r9
  int *v70; // rcx
  __int64 *v71; // [rsp+30h] [rbp-61h] BYREF
  __int64 v72; // [rsp+38h] [rbp-59h] BYREF
  __int64 v73; // [rsp+40h] [rbp-51h]
  _QWORD *v74; // [rsp+48h] [rbp-49h] BYREF
  __int64 v75; // [rsp+50h] [rbp-41h] BYREF
  __int64 v76; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v77; // [rsp+60h] [rbp-31h] BYREF
  __int64 v78; // [rsp+68h] [rbp-29h] BYREF
  __int64 v79; // [rsp+70h] [rbp-21h]
  __int64 *v80; // [rsp+78h] [rbp-19h] BYREF
  __int128 v81; // [rsp+80h] [rbp-11h] BYREF
  __int64 v82; // [rsp+90h] [rbp-1h]
  _BYTE v83[72]; // [rsp+98h] [rbp+7h] BYREF
  int v84; // [rsp+F0h] [rbp+5Fh] BYREF
  char v85; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v86; // [rsp+108h] [rbp+77h]

  v86 = a4;
  v6 = 0LL;
  v7 = 0LL;
  v10 = 1;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  v77 = (__int64 *)gSmartObjNullRef;
  v78 = *(_QWORD *)(v7 + 1512);
  *(_QWORD *)(v7 + 1512) = &v78;
  v12 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v80 = 0LL;
  v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v13 )
    v12 = *v13;
  v74 = (_QWORD *)gSmartObjNullRef;
  v14 = 0;
  v75 = *(_QWORD *)(v12 + 1512);
  *(_QWORD *)(v12 + 1512) = &v75;
  v82 = 0LL;
  v15 = *(__int64 **)a1;
  v81 = 0LL;
  v84 = 0;
  v16 = *v15;
  v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v17 )
    v6 = *v17;
  v71 = (__int64 *)gSmartObjNullRef;
  if ( v16 )
  {
    v71 = *(__int64 **)(v16 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v16 + 152) + 8LL);
  }
  v18 = -1;
  v72 = *(_QWORD *)(v6 + 1512);
  *(_QWORD *)(v6 + 1512) = &v72;
  v19 = *(_QWORD *)(a1 + 16);
  v73 = v19;
  if ( a2 == -1 )
  {
    v20 = 0LL;
  }
  else
  {
    v50 = v79;
    if ( !v79 )
    {
      v19 = v73;
      v50 = *v77;
    }
    v76 = v50;
    if ( !v19 )
      v19 = *v71;
    v20 = (int **)MNLookUpItem(v19, a2, a3, &v76);
    v79 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v77, v76);
    if ( v20 )
    {
      v73 = v79;
      SmartObjStackRefBase<tagMENU>::operator=(&v71, *v77);
      v18 = -1;
    }
    else
    {
      v18 = -1;
      a2 = -1;
    }
  }
  v21 = v86;
  if ( (*(_DWORD *)(*(_QWORD *)(*v71 + 40) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL)
    && ((*(_DWORD *)(v86 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v86 + 72) - 1LL) > 6) )
  {
    v22 = a2;
    v23 = a2;
    if ( v20 && !a3 )
    {
      v60 = v73;
      if ( !v73 )
        v60 = *v71;
      v22 = MNGetpItemIndex(v60, (__int64)v20);
    }
    if ( v22 )
    {
      if ( v22 == v18 )
        v22 = *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL);
      v24 = (unsigned int)(v18 + v22);
      v25 = *(_QWORD *)(*v71 + 88) + 96 * v24;
      if ( !(_DWORD)v24 )
        goto LABEL_22;
      do
      {
        v26 = *(_QWORD *)(*(_QWORD *)v25 + 96LL);
        if ( !v26 )
          break;
        if ( v26 >= 7 )
          break;
        v25 -= 96LL;
        a2 = v24;
        a3 = 1;
        LODWORD(v24) = v18 + v24;
      }
      while ( (_DWORD)v24 );
    }
    else
    {
      if ( *(_QWORD *)(**(_QWORD **)(*v71 + 88) + 96LL) == 1LL )
      {
        v58 = 1;
        a2 = 1;
      }
      else
      {
        v58 = 0;
      }
      v59 = 1;
      if ( !v58 )
        v59 = a3;
      a3 = v59;
    }
    if ( a2 != v23 )
      v20 = (int **)(*(_QWORD *)(*v71 + 88) + 96LL * a2);
  }
LABEL_22:
  if ( *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL) >= *(_DWORD *)(*v71 + 60) )
  {
    if ( !(unsigned int)MNAllocMenuItems((__int64)&v71, 0) )
      goto LABEL_121;
    if ( a2 != -1 )
    {
      v56 = v79;
      if ( !v79 )
        v56 = *v77;
      v57 = v73;
      v76 = v56;
      if ( !v73 )
        v57 = *v71;
      v20 = (int **)MNLookUpItem(v57, a2, a3, &v76);
      v79 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v77, v76);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v71, &v77) )
        goto LABEL_121;
    }
  }
  v27 = v73;
  if ( !v73 )
    v27 = *v71;
  ThreadLock(v27, &v81);
  if ( v20 )
  {
    v51 = v73;
    if ( !v73 )
      v51 = *v71;
    v52 = MNGetPopupFromMenu(v51, &v80);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v74, v52);
    if ( *v74 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v85);
      v61 = v73;
      if ( !v73 )
        v61 = *v71;
      v14 = MNGetpItemIndex(v61, (__int64)v20);
      if ( *(_DWORD *)(*v74 + 80LL) >= v14 )
        ++*(_DWORD *)(*v74 + 80LL);
      if ( (*(_DWORD *)*v74 & 0x20) != 0 && *(_DWORD *)(*v74 + 84LL) >= v14 )
        ++*(_DWORD *)(*v74 + 84LL);
      if ( v80[8] == *(_QWORD *)(*v74 + 16LL) )
      {
        v62 = *((_DWORD *)v80 + 18);
        if ( v62 >= (int)v14 )
          *((_DWORD *)v80 + 18) = v62 + 1;
      }
      v63 = v80;
      if ( v80[10] == *(_QWORD *)(*v74 + 16LL) )
      {
        v64 = *((unsigned int *)v80 + 22);
        if ( (int)v64 >= (int)v14 )
        {
          *((_DWORD *)v80 + 22) = v64 + 1;
          if ( (_DWORD)v64 == v14 )
          {
            v65 = *((unsigned int *)v63 + 23);
            if ( (v65 & 1) != 0 )
              xxxMNSetGapState(v63[10], v64, v65, 0LL);
          }
        }
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v85);
    }
  }
  v31 = ThreadUnlock1(v29, v28, v30);
  v73 = 0LL;
  if ( v31 == *v71
    || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v71), v31)
      ? (__int64 *)(v71 = *(__int64 **)(v31 + 152), ++*((_DWORD *)v71 + 2))
      : (v71 = (__int64 *)gSmartObjNullRef),
        !v73) )
  {
    if ( !*v71 )
    {
LABEL_121:
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v71);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v74);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v77);
      return 0LL;
    }
  }
  ++*(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL);
  if ( v20 )
  {
    v53 = *(_QWORD *)(*v71 + 88) + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL) - 1) - (_QWORD)v20;
    if ( v53 )
    {
      memmove(
        v20[12],
        *v20,
        **(_QWORD **)(*v71 + 88) + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL) - 1) - (_QWORD)*v20);
      memmove(v20 + 12, v20, v53);
      v54 = ((__int64)v20 - *(_QWORD *)(*v71 + 88) + 96) / 96;
      while ( (unsigned int)v54 < *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL) )
      {
        v55 = 96LL * (int)v54;
        *(_QWORD *)(v55 + *(_QWORD *)(*v71 + 88)) = *(_QWORD *)(*v71 + 96) + 112LL * (unsigned int)v54;
        LODWORD(v54) = v54 + 1;
        *(_QWORD *)(*(_QWORD *)(*v71 + 88) + v55 + 8) = *(_QWORD *)(v55 + *(_QWORD *)(*v71 + 88))
                                                      - *(_QWORD *)(*(_QWORD *)(*v71 + 24) + 16LL);
      }
    }
  }
  else
  {
    v20 = (int **)(96LL * *(unsigned int *)(*(_QWORD *)(*v71 + 40) + 44LL) + *(_QWORD *)(*v71 + 88) - 96LL);
  }
  **v20 = 0;
  (*v20)[1] = 0;
  (*v20)[2] = 0;
  *((_QWORD *)*v20 + 2) = 0LL;
  v20[2] = 0LL;
  *((_QWORD *)*v20 + 3) = 0LL;
  *((_QWORD *)*v20 + 4) = 0LL;
  (*v20)[12] = 0;
  *((_QWORD *)*v20 + 7) = 0LL;
  (*v20)[16] = 0;
  (*v20)[17] = 0;
  (*v20)[18] = 0;
  (*v20)[19] = 0;
  *((_QWORD *)*v20 + 12) = 0LL;
  (*v20)[26] = -1;
  *((_QWORD *)*v20 + 5) = 0LL;
  v20[3] = 0LL;
  v20[11] = 0LL;
  v32 = v73;
  if ( !v73 )
    v32 = *v71;
  if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 40LL) & 0x800) != 0 )
  {
    *(_OWORD *)((char *)v20 + 52) = 0LL;
    *(_OWORD *)((char *)v20 + 68) = 0LL;
  }
  if ( (unsigned int)SetLPITEMInfoNoRedraw(&v71, v20, v21, a5, &v84) )
  {
    if ( !v84 )
      goto LABEL_41;
    v33 = v73;
    if ( !v73 )
      v33 = *v71;
    ThreadLock(v33, &v81);
    xxxRedrawForSetLPITEMInfo((__int64 ***)&v71, (__int64)v20);
    v37 = ThreadUnlock1(v35, v34, v36);
    v73 = 0LL;
    if ( v37 != *v71 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v71);
      if ( v37 )
      {
        v71 = *(__int64 **)(v37 + 152);
        ++*((_DWORD *)v71 + 2);
      }
      else
      {
        v71 = (__int64 *)gSmartObjNullRef;
      }
      v38 = v73;
      if ( v73 )
        goto LABEL_43;
    }
    if ( *v71 )
    {
LABEL_41:
      v38 = v73;
      if ( !v73 )
        v38 = *v71;
LABEL_43:
      if ( (unsigned int)MNGetpItemIndex(v38, (__int64)v20) != -1 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*v71 + 40) + 40LL) & 0x20) != 0
          || (v39 = **v20, (v39 & 0x2000) != 0) && (v39 & 4) == 0 )
        {
          **v20 |= 0x6000u;
          v70 = v20[2];
          if ( v70 )
            MakeMenuRtoL(v70, 1LL);
        }
      }
      goto LABEL_46;
    }
  }
  else
  {
    if ( *v74 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v83, *v74);
      MNDeleteAdjustIndexes(v80, v83, v14);
    }
    v66 = v73;
    if ( !v73 )
      v66 = *v71;
    MNFreeItem(v66, v20, 1);
    v67 = 96 * *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL) + *(_DWORD *)(*v71 + 88) - (_DWORD)v20 - 96;
    if ( 96 * *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL) + *(_DWORD *)(*v71 + 88) - (_DWORD)v20 != 96 )
    {
      memmove(
        *v20,
        v20[12],
        (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL)
                     + **(_DWORD **)(*v71 + 88)
                     - *((_DWORD *)v20 + 24)));
      memmove(v20, v20 + 12, v67);
      v68 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v20 - *(_QWORD *)(*v71 + 88)) >> 5);
      while ( (unsigned int)v68 < *(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL) - 1 )
      {
        v69 = 96LL * (int)v68;
        *(_QWORD *)(v69 + *(_QWORD *)(*v71 + 88)) = *(_QWORD *)(*v71 + 96) + 112LL * (unsigned int)v68;
        LODWORD(v68) = v68 + 1;
        *(_QWORD *)(*(_QWORD *)(*v71 + 88) + v69 + 8) = *(_QWORD *)(v69 + *(_QWORD *)(*v71 + 88))
                                                      - *(_QWORD *)(*(_QWORD *)(*v71 + 24) + 16LL);
      }
    }
    --*(_DWORD *)(*(_QWORD *)(*v71 + 40) + 44LL);
  }
  v10 = 0;
LABEL_46:
  v40 = 0LL;
  v41 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v41 )
    v40 = *v41;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v71);
  v42 = *(_QWORD **)(v40 + 1512);
  if ( v42 )
    *(_QWORD *)(v40 + 1512) = *v42;
  v43 = 0LL;
  v44 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v44 )
    v43 = *v44;
  if ( v74 != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v74 + 2) )
  {
    if ( *((_BYTE *)v74 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v74);
  }
  v45 = *(_QWORD **)(v43 + 1512);
  if ( v45 )
    *(_QWORD *)(v43 + 1512) = *v45;
  v46 = 0LL;
  v47 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v47 )
    v46 = *v47;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v77);
  v48 = *(_QWORD **)(v46 + 1512);
  if ( v48 )
    *(_QWORD *)(v46 + 1512) = *v48;
  return v10;
}
