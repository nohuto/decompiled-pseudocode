/*
 * XREFs of xxxInsertMenuItem @ 0x1C007929C
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0043140 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0047758 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00478F8 (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0048BE8 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     MNFreeItem @ 0x1C0049080 (MNFreeItem.c)
 *     MNLookUpItem @ 0x1C0061B00 (MNLookUpItem.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C0102A24 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C011E8F8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0249118 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C024988C (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1C024E57C (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxInsertMenuItem(_QWORD *a1, unsigned int a2, int a3, __int64 a4, unsigned __int16 *a5)
{
  unsigned int v9; // esi
  __int64 ThreadWin32Thread; // rax
  int **v11; // rdi
  _QWORD *v12; // rdx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // edx
  unsigned int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int128 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rax
  _QWORD *v38; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  size_t v45; // r14
  __int64 v46; // r10
  __int64 v47; // r9
  char v48; // cl
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  signed int v52; // eax
  __int64 *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned int v57; // r14d
  __int64 v58; // r10
  __int64 v59; // r9
  int *v60; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v63; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v65[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v66; // [rsp+40h] [rbp-51h]
  _QWORD v67[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v68; // [rsp+58h] [rbp-39h] BYREF
  __int64 v69; // [rsp+60h] [rbp-31h] BYREF
  __int64 v70; // [rsp+68h] [rbp-29h]
  __int64 *v71; // [rsp+70h] [rbp-21h] BYREF
  __int128 v72; // [rsp+78h] [rbp-19h] BYREF
  __int64 v73; // [rsp+88h] [rbp-9h]
  char v74[8]; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v75[72]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v76; // [rsp+F0h] [rbp+5Fh] BYREF
  int v77; // [rsp+F8h] [rbp+67h] BYREF

  v9 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v68 = (__int64 *)gSmartObjNullRef;
  v11 = 0LL;
  v71 = 0LL;
  v69 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v69;
  v70 = 0LL;
  v76 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v67, 0LL);
  v12 = (_QWORD *)*a1;
  v77 = 0;
  v13 = 0;
  v72 = 0LL;
  v73 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v65, *v12);
  v14 = a1[2];
  v15 = -1;
  v66 = v14;
  if ( a2 != -1 )
  {
    v42 = v70;
    if ( !v70 )
    {
      v14 = v66;
      v42 = *v68;
    }
    v76 = v42;
    if ( !v14 )
      v14 = *v65[0];
    v11 = (int **)MNLookUpItem(v14, a2, a3, &v76);
    v70 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v68);
    if ( v11 )
    {
      v66 = v70;
      SmartObjStackRefBase<tagMENU>::operator=(v65);
      v15 = -1;
    }
    else
    {
      v15 = -1;
      a2 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL)
    && ((*(_DWORD *)(a4 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(a4 + 72) - 1LL) > 6) )
  {
    v16 = a2;
    v17 = a2;
    if ( v11 && !a3 )
    {
      v50 = v66;
      if ( !v66 )
        v50 = *v65[0];
      v16 = MNGetpItemIndex(v50, (__int64)v11);
    }
    if ( v16 )
    {
      if ( v16 == v15 )
        v16 = *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL);
      v18 = (unsigned int)(v15 + v16);
      v19 = *(_QWORD *)(*v65[0] + 88) + 96 * v18;
      if ( !(_DWORD)v18 )
        goto LABEL_13;
      do
      {
        v20 = *(_QWORD *)(*(_QWORD *)v19 + 96LL);
        if ( !v20 )
          break;
        if ( v20 >= 7 )
          break;
        v19 -= 96LL;
        a2 = v18;
        a3 = 1;
        LODWORD(v18) = v15 + v18;
      }
      while ( (_DWORD)v18 );
    }
    else
    {
      if ( *(_QWORD *)(**(_QWORD **)(*v65[0] + 88) + 96LL) == 1LL )
      {
        v48 = 1;
        a2 = 1;
      }
      else
      {
        v48 = 0;
      }
      v49 = 1;
      if ( !v48 )
        v49 = a3;
      a3 = v49;
    }
    if ( a2 != v17 )
      v11 = (int **)(*(_QWORD *)(*v65[0] + 88) + 96LL * a2);
  }
LABEL_13:
  if ( *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL) >= *(_DWORD *)(*v65[0] + 60) )
  {
    if ( !(unsigned int)MNAllocMenuItems(v65, 0LL) )
      goto LABEL_102;
    if ( a2 != -1 )
    {
      v40 = v70;
      if ( !v70 )
        v40 = *v68;
      v41 = v66;
      v76 = v40;
      if ( !v66 )
        v41 = *v65[0];
      v11 = (int **)MNLookUpItem(v41, a2, a3, &v76);
      v70 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v68);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v65, &v68) )
        goto LABEL_102;
    }
  }
  v21 = v66;
  if ( !v66 )
    v21 = *v65[0];
  v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v23 = &v72;
  *(_QWORD *)&v72 = *(_QWORD *)(v22 + 416);
  *(_QWORD *)(v22 + 416) = &v72;
  *((_QWORD *)&v72 + 1) = v21;
  if ( v21 )
    HMLockObject(v21);
  if ( v11 )
  {
    v43 = v66;
    if ( !v66 )
      v43 = *v65[0];
    v44 = MNGetPopupFromMenu(v43, &v71);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v67, v44);
    if ( *(_QWORD *)v67[0] )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v74);
      v51 = v66;
      if ( !v66 )
        v51 = *v65[0];
      v13 = MNGetpItemIndex(v51, (__int64)v11);
      if ( *(_DWORD *)(*(_QWORD *)v67[0] + 80LL) >= v13 )
        ++*(_DWORD *)(*(_QWORD *)v67[0] + 80LL);
      if ( (**(_DWORD **)v67[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v67[0] + 84LL) >= v13 )
        ++*(_DWORD *)(*(_QWORD *)v67[0] + 84LL);
      if ( v71[8] == *(_QWORD *)(*(_QWORD *)v67[0] + 16LL) )
      {
        v52 = *((_DWORD *)v71 + 18);
        if ( v52 >= (int)v13 )
          *((_DWORD *)v71 + 18) = v52 + 1;
      }
      v53 = v71;
      if ( v71[10] == *(_QWORD *)(*(_QWORD *)v67[0] + 16LL) )
      {
        v54 = *((unsigned int *)v71 + 22);
        if ( (int)v54 >= (int)v13 )
        {
          *((_DWORD *)v71 + 22) = v54 + 1;
          if ( (_DWORD)v54 == v13 )
          {
            v55 = *((unsigned int *)v53 + 23);
            if ( (v55 & 1) != 0 )
              xxxMNSetGapState(v53[10], v54, v55, 0LL);
          }
        }
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v74);
    }
  }
  ThreadUnlock1(v23);
  v66 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v65);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v65) )
    goto LABEL_102;
  ++*(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL);
  v24 = *v65[0];
  if ( v11 )
  {
    v45 = *(_QWORD *)(*v65[0] + 88) + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v24 + 40) + 44LL) - 1) - (_QWORD)v11;
    if ( v45 )
    {
      memmove(
        v11[12],
        *v11,
        **(_QWORD **)(*v65[0] + 88)
      + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL) - 1)
      - (_QWORD)*v11);
      memmove(v11 + 12, v11, v45);
      v46 = ((__int64)v11 - *(_QWORD *)(*v65[0] + 88) + 96) / 96;
      while ( (unsigned int)v46 < *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL) )
      {
        v47 = 96LL * (int)v46;
        *(_QWORD *)(v47 + *(_QWORD *)(*v65[0] + 88)) = *(_QWORD *)(*v65[0] + 96) + 112LL * (unsigned int)v46;
        LODWORD(v46) = v46 + 1;
        *(_QWORD *)(*(_QWORD *)(*v65[0] + 88) + v47 + 8) = *(_QWORD *)(v47 + *(_QWORD *)(*v65[0] + 88))
                                                         - *(_QWORD *)(*(_QWORD *)(*v65[0] + 24) + 16LL);
      }
    }
  }
  else
  {
    v11 = (int **)(96LL * *(unsigned int *)(*(_QWORD *)(*v65[0] + 40) + 44LL) + *(_QWORD *)(v24 + 88) - 96LL);
  }
  **v11 = 0;
  (*v11)[1] = 0;
  (*v11)[2] = 0;
  *((_QWORD *)*v11 + 2) = 0LL;
  v11[2] = 0LL;
  *((_QWORD *)*v11 + 3) = 0LL;
  *((_QWORD *)*v11 + 4) = 0LL;
  (*v11)[12] = 0;
  *((_QWORD *)*v11 + 7) = 0LL;
  (*v11)[16] = 0;
  (*v11)[17] = 0;
  (*v11)[18] = 0;
  (*v11)[19] = 0;
  *((_QWORD *)*v11 + 12) = 0LL;
  (*v11)[26] = -1;
  *((_QWORD *)*v11 + 5) = 0LL;
  v11[3] = 0LL;
  v11[11] = 0LL;
  v25 = v66;
  if ( !v66 )
    v25 = *v65[0];
  if ( (unsigned int)MNIsUAHMenu(v25) )
  {
    *(_OWORD *)((char *)v11 + 52) = 0LL;
    *(_OWORD *)((char *)v11 + 68) = 0LL;
  }
  if ( !(unsigned int)SetLPITEMInfoNoRedraw(v65, (__int64 *)v11, a4, a5, &v77) )
  {
    if ( *(_QWORD *)v67[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v75, *(_QWORD *)v67[0]);
      MNDeleteAdjustIndexes(v71, v75, v13);
    }
    v56 = v66;
    if ( !v66 )
      v56 = *v65[0];
    MNFreeItem(v56, (__int64)v11, 1);
    v57 = 96 * *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL) + *(_DWORD *)(*v65[0] + 88) - (_DWORD)v11 - 96;
    if ( 96 * *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL) + *(_DWORD *)(*v65[0] + 88) - (_DWORD)v11 != 96 )
    {
      memmove(
        *v11,
        v11[12],
        (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL)
                     + **(_DWORD **)(*v65[0] + 88)
                     - *((_DWORD *)v11 + 24)));
      memmove(v11, v11 + 12, v57);
      v58 = ((__int64)v11 - *(_QWORD *)(*v65[0] + 88)) / 96;
      while ( (unsigned int)v58 < *(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL) - 1 )
      {
        v59 = 96LL * (int)v58;
        *(_QWORD *)(v59 + *(_QWORD *)(*v65[0] + 88)) = *(_QWORD *)(*v65[0] + 96) + 112LL * (unsigned int)v58;
        LODWORD(v58) = v58 + 1;
        *(_QWORD *)(*(_QWORD *)(*v65[0] + 88) + v59 + 8) = *(_QWORD *)(v59 + *(_QWORD *)(*v65[0] + 88))
                                                         - *(_QWORD *)(*(_QWORD *)(*v65[0] + 24) + 16LL);
      }
    }
    --*(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 44LL);
    goto LABEL_102;
  }
  if ( v77 )
  {
    v26 = v66;
    if ( !v66 )
      v26 = *v65[0];
    v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v72 = *(_QWORD *)(v27 + 416);
    *(_QWORD *)(v27 + 416) = &v72;
    *((_QWORD *)&v72 + 1) = v26;
    if ( v26 )
      HMLockObject(v26);
    xxxRedrawForSetLPITEMInfo(v65, (__int64)v11);
    ThreadUnlock1(v28);
    v66 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v65);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v65) )
    {
LABEL_102:
      v9 = 0;
      goto LABEL_38;
    }
  }
  v29 = v66;
  if ( !v66 )
    v29 = *v65[0];
  if ( (unsigned int)MNGetpItemIndex(v29, (__int64)v11) != -1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*v65[0] + 40) + 40LL) & 0x20) != 0
      || (v30 = **v11, (v30 & 0x2000) != 0) && (v30 & 4) == 0 )
    {
      **v11 |= 0x6000u;
      v60 = v11[2];
      if ( v60 )
        MakeMenuRtoL(v60, 1LL);
    }
  }
LABEL_38:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v65);
  CurrentThread = KeGetCurrentThread();
  v32 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v33)
    || (CurrentProcess = PsGetCurrentProcess(v35, v34, v36),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v63),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v37 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v37 )
      v32 = *v37;
  }
  if ( v67[0] != gSmartObjNullRef && !--*(_DWORD *)(v67[0] + 8LL) )
  {
    if ( *(_BYTE *)(v67[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v67[0]);
  }
  v38 = *(_QWORD **)(v32 + 1472);
  if ( v38 )
    *(_QWORD *)(v32 + 1472) = *v38;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v68);
  return v9;
}
