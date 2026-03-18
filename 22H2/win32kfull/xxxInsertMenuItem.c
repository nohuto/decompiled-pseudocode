/*
 * XREFs of xxxInsertMenuItem @ 0x1C00638F0
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C00635E0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNFreeItem @ 0x1C0062AE0 (MNFreeItem.c)
 *     MNGetpItemIndex @ 0x1C0064060 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00640AC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00645A0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0064740 (MNGetPopupFromMenu.c)
 *     MNLookUpItem @ 0x1C006482C (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C0065078 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C0065458 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0108994 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C023142C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C0231A04 (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1C0238650 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxInsertMenuItem(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
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
  __int64 v18; // r8
  int v19; // r10d
  __int64 v20; // rcx
  int **v21; // rdi
  int v22; // r15d
  unsigned int v23; // edx
  unsigned int v24; // r9d
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rbx
  __int64 *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rbx
  __int64 *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rbx
  __int64 *v49; // rax
  _QWORD *v50; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  size_t v55; // r14
  __int64 v56; // r10
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rcx
  char v60; // cl
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  signed int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rcx
  unsigned int v71; // r14d
  unsigned __int64 v72; // rdi
  __int64 v73; // r9
  int *v74; // rcx
  _DWORD *v75; // [rsp+30h] [rbp-61h] BYREF
  __int64 v76; // [rsp+38h] [rbp-59h] BYREF
  __int64 v77; // [rsp+40h] [rbp-51h]
  _QWORD *v78; // [rsp+48h] [rbp-49h] BYREF
  __int64 v79; // [rsp+50h] [rbp-41h] BYREF
  __int64 v80; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v81; // [rsp+60h] [rbp-31h] BYREF
  __int64 v82; // [rsp+68h] [rbp-29h] BYREF
  __int64 v83; // [rsp+70h] [rbp-21h]
  __int64 v84; // [rsp+78h] [rbp-19h] BYREF
  __int128 v85; // [rsp+80h] [rbp-11h] BYREF
  __int64 v86; // [rsp+90h] [rbp-1h]
  _BYTE v87[72]; // [rsp+98h] [rbp+7h] BYREF
  int v88; // [rsp+F0h] [rbp+5Fh] BYREF
  char v89; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v90; // [rsp+108h] [rbp+77h]

  v90 = a4;
  v6 = 0LL;
  v7 = 0LL;
  v10 = 1;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  v81 = (__int64 *)gSmartObjNullRef;
  v82 = *(_QWORD *)(v7 + 1512);
  *(_QWORD *)(v7 + 1512) = &v82;
  v12 = 0LL;
  v83 = 0LL;
  v80 = 0LL;
  v84 = 0LL;
  v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v13 )
    v12 = *v13;
  v78 = (_QWORD *)gSmartObjNullRef;
  v14 = 0;
  v79 = *(_QWORD *)(v12 + 1512);
  *(_QWORD *)(v12 + 1512) = &v79;
  v86 = 0LL;
  v15 = *(__int64 **)a1;
  v85 = 0LL;
  v88 = 0;
  v16 = *v15;
  v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v17 )
    v6 = *v17;
  v75 = (_DWORD *)gSmartObjNullRef;
  if ( v16 )
  {
    v75 = *(_DWORD **)(v16 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v16 + 152) + 8LL);
  }
  v19 = -1;
  v76 = *(_QWORD *)(v6 + 1512);
  *(_QWORD *)(v6 + 1512) = &v76;
  v20 = *(_QWORD *)(a1 + 16);
  v77 = v20;
  if ( a2 == -1 )
  {
    v21 = 0LL;
  }
  else
  {
    v52 = v83;
    if ( !v83 )
    {
      v20 = v77;
      v52 = *v81;
    }
    v80 = v52;
    if ( !v20 )
      v20 = *(_QWORD *)v75;
    v21 = (int **)MNLookUpItem(v20, a2, a3, &v80);
    v83 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v81, v80);
    if ( v21 )
    {
      v77 = v83;
      SmartObjStackRefBase<tagMENU>::operator=(&v75, *v81);
      v19 = -1;
    }
    else
    {
      v19 = -1;
      a2 = -1;
    }
  }
  v22 = v90;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL)
    && ((*(_DWORD *)(v90 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v90 + 72) - 1LL) > 6) )
  {
    v23 = a2;
    v24 = a2;
    if ( v21 && !a3 )
    {
      v62 = v77;
      if ( !v77 )
        v62 = *(_QWORD *)v75;
      v23 = MNGetpItemIndex(v62, v21, v18, a2);
    }
    if ( v23 )
    {
      if ( v23 == v19 )
        v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL);
      v25 = v19 + v23;
      v18 = *(_QWORD *)(*(_QWORD *)v75 + 88LL) + 96 * v25;
      if ( !(_DWORD)v25 )
        goto LABEL_22;
      do
      {
        v26 = *(_QWORD *)(*(_QWORD *)v18 + 96LL);
        if ( !v26 )
          break;
        if ( v26 >= 7 )
          break;
        v18 -= 96LL;
        a2 = v25;
        a3 = 1;
        LODWORD(v25) = v19 + v25;
      }
      while ( (_DWORD)v25 );
    }
    else
    {
      if ( *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v75 + 88LL) + 96LL) == 1LL )
      {
        v60 = 1;
        a2 = 1;
      }
      else
      {
        v60 = 0;
      }
      v61 = 1;
      if ( !v60 )
        v61 = a3;
      a3 = v61;
    }
    if ( a2 != v24 )
      v21 = (int **)(*(_QWORD *)(*(_QWORD *)v75 + 88LL) + 96LL * a2);
  }
LABEL_22:
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL) >= *(_DWORD *)(*(_QWORD *)v75 + 60LL) )
  {
    if ( !(unsigned int)MNAllocMenuItems(&v75, 0LL, v18) )
      goto LABEL_121;
    if ( a2 != -1 )
    {
      v58 = v83;
      if ( !v83 )
        v58 = *v81;
      v59 = v77;
      v80 = v58;
      if ( !v77 )
        v59 = *(_QWORD *)v75;
      v21 = (int **)MNLookUpItem(v59, a2, a3, &v80);
      v83 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v81, v80);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v75, &v81) )
        goto LABEL_121;
    }
  }
  v27 = v77;
  if ( !v77 )
    v27 = *(_QWORD *)v75;
  ThreadLock(v27, &v85);
  if ( v21 )
  {
    v53 = v77;
    if ( !v77 )
      v53 = *(_QWORD *)v75;
    v54 = MNGetPopupFromMenu(v53, &v84);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v78, v54);
    if ( *v78 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v89);
      v65 = v77;
      if ( !v77 )
        v65 = *(_QWORD *)v75;
      v14 = MNGetpItemIndex(v65, v21, v63, v64);
      if ( *(_DWORD *)(*v78 + 80LL) >= v14 )
        ++*(_DWORD *)(*v78 + 80LL);
      if ( (*(_DWORD *)*v78 & 0x20) != 0 && *(_DWORD *)(*v78 + 84LL) >= v14 )
        ++*(_DWORD *)(*v78 + 84LL);
      if ( *(_QWORD *)(v84 + 64) == *(_QWORD *)(*v78 + 16LL) )
      {
        v66 = *(_DWORD *)(v84 + 72);
        if ( v66 >= (int)v14 )
          *(_DWORD *)(v84 + 72) = v66 + 1;
      }
      v67 = v84;
      if ( *(_QWORD *)(v84 + 80) == *(_QWORD *)(*v78 + 16LL) )
      {
        v68 = *(unsigned int *)(v84 + 88);
        if ( (int)v68 >= (int)v14 )
        {
          *(_DWORD *)(v84 + 88) = v68 + 1;
          if ( (_DWORD)v68 == v14 )
          {
            v69 = *(unsigned int *)(v67 + 92);
            if ( (v69 & 1) != 0 )
              xxxMNSetGapState(*(_QWORD *)(v67 + 80), v68, v69, 0LL);
          }
        }
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v89);
    }
  }
  v31 = ThreadUnlock1(v29, v28, v30);
  v77 = 0LL;
  if ( v31 == *(_QWORD *)v75
    || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v75), v31)
      ? (_DWORD *)(v75 = *(_DWORD **)(v31 + 152), ++v75[2])
      : (v75 = (_DWORD *)gSmartObjNullRef),
        !v77) )
  {
    if ( !*(_QWORD *)v75 )
    {
LABEL_121:
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v75);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v78);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v81);
      return 0LL;
    }
  }
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL);
  if ( v21 )
  {
    v55 = *(_QWORD *)(*(_QWORD *)v75 + 88LL)
        + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL) - 1)
        - (_QWORD)v21;
    if ( v55 )
    {
      memmove(
        v21[12],
        *v21,
        **(_QWORD **)(*(_QWORD *)v75 + 88LL)
      + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL) - 1)
      - (_QWORD)*v21);
      memmove(v21 + 12, v21, v55);
      v56 = ((__int64)v21 - *(_QWORD *)(*(_QWORD *)v75 + 88LL) + 96) / 96;
      while ( (unsigned int)v56 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL) )
      {
        v57 = 96LL * (int)v56;
        *(_QWORD *)(v57 + *(_QWORD *)(*(_QWORD *)v75 + 88LL)) = *(_QWORD *)(*(_QWORD *)v75 + 96LL)
                                                              + 112LL * (unsigned int)v56;
        LODWORD(v56) = v56 + 1;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 88LL) + v57 + 8) = *(_QWORD *)(v57 + *(_QWORD *)(*(_QWORD *)v75 + 88LL))
                                                                  - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 24LL) + 16LL);
      }
    }
  }
  else
  {
    v21 = (int **)(96LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL)
                 + *(_QWORD *)(*(_QWORD *)v75 + 88LL)
                 - 96LL);
  }
  **v21 = 0;
  (*v21)[1] = 0;
  (*v21)[2] = 0;
  *((_QWORD *)*v21 + 2) = 0LL;
  v21[2] = 0LL;
  *((_QWORD *)*v21 + 3) = 0LL;
  *((_QWORD *)*v21 + 4) = 0LL;
  (*v21)[12] = 0;
  *((_QWORD *)*v21 + 7) = 0LL;
  (*v21)[16] = 0;
  (*v21)[17] = 0;
  (*v21)[18] = 0;
  (*v21)[19] = 0;
  *((_QWORD *)*v21 + 12) = 0LL;
  (*v21)[26] = -1;
  *((_QWORD *)*v21 + 5) = 0LL;
  v21[3] = 0LL;
  v21[11] = 0LL;
  v32 = v77;
  if ( !v77 )
    v32 = *(_QWORD *)v75;
  if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 40LL) & 0x800) != 0 )
  {
    *(_OWORD *)((char *)v21 + 52) = 0LL;
    *(_OWORD *)((char *)v21 + 68) = 0LL;
  }
  if ( (unsigned int)SetLPITEMInfoNoRedraw((unsigned int)&v75, (_DWORD)v21, v22, a5, (__int64)&v88) )
  {
    if ( !v88 )
      goto LABEL_41;
    v35 = v77;
    if ( !v77 )
      v35 = *(_QWORD *)v75;
    ThreadLock(v35, &v85);
    xxxRedrawForSetLPITEMInfo(&v75, v21);
    v39 = ThreadUnlock1(v37, v36, v38);
    v77 = 0LL;
    if ( v39 != *(_QWORD *)v75 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v75);
      if ( v39 )
      {
        v75 = *(_DWORD **)(v39 + 152);
        ++v75[2];
      }
      else
      {
        v75 = (_DWORD *)gSmartObjNullRef;
      }
      v40 = v77;
      if ( v77 )
        goto LABEL_43;
    }
    if ( *(_QWORD *)v75 )
    {
LABEL_41:
      v40 = v77;
      if ( !v77 )
        v40 = *(_QWORD *)v75;
LABEL_43:
      if ( (unsigned int)MNGetpItemIndex(v40, v21, v33, v34) != -1 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 40LL) & 0x20) != 0
          || (v41 = **v21, (v41 & 0x2000) != 0) && (v41 & 4) == 0 )
        {
          **v21 |= 0x6000u;
          v74 = v21[2];
          if ( v74 )
            MakeMenuRtoL(v74, 1LL);
        }
      }
      goto LABEL_46;
    }
  }
  else
  {
    if ( *v78 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v87, *v78);
      MNDeleteAdjustIndexes(v84, v87, v14);
    }
    v70 = v77;
    if ( !v77 )
      v70 = *(_QWORD *)v75;
    MNFreeItem(v70, (__int64)v21, 1);
    v71 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL)
        + *(_DWORD *)(*(_QWORD *)v75 + 88LL)
        - (_DWORD)v21
        - 96;
    if ( 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL) + *(_DWORD *)(*(_QWORD *)v75 + 88LL) - (_DWORD)v21 != 96 )
    {
      memmove(
        *v21,
        v21[12],
        (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL)
                     + **(_DWORD **)(*(_QWORD *)v75 + 88LL)
                     - *((_DWORD *)v21 + 24)));
      memmove(v21, v21 + 12, v71);
      v72 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v21 - *(_QWORD *)(*(_QWORD *)v75 + 88LL)) >> 5);
      while ( (unsigned int)v72 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL) - 1 )
      {
        v73 = 96LL * (int)v72;
        *(_QWORD *)(v73 + *(_QWORD *)(*(_QWORD *)v75 + 88LL)) = *(_QWORD *)(*(_QWORD *)v75 + 96LL)
                                                              + 112LL * (unsigned int)v72;
        LODWORD(v72) = v72 + 1;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 88LL) + v73 + 8) = *(_QWORD *)(v73 + *(_QWORD *)(*(_QWORD *)v75 + 88LL))
                                                                  - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 24LL) + 16LL);
      }
    }
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 40LL) + 44LL);
  }
  v10 = 0;
LABEL_46:
  v42 = 0LL;
  v43 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v43 )
    v42 = *v43;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v75);
  v44 = *(_QWORD **)(v42 + 1512);
  if ( v44 )
    *(_QWORD *)(v42 + 1512) = *v44;
  v45 = 0LL;
  v46 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v46 )
    v45 = *v46;
  if ( v78 != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v78 + 2) )
  {
    if ( *((_BYTE *)v78 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v78);
  }
  v47 = *(_QWORD **)(v45 + 1512);
  if ( v47 )
    *(_QWORD *)(v45 + 1512) = *v47;
  v48 = 0LL;
  v49 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v49 )
    v48 = *v49;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v81);
  v50 = *(_QWORD **)(v48 + 1512);
  if ( v50 )
    *(_QWORD *)(v48 + 1512) = *v50;
  return v10;
}
