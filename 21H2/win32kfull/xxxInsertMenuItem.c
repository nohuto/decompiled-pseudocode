/*
 * XREFs of xxxInsertMenuItem @ 0x1C0065F38
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0064A70 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     MNGetPopupFromMenu @ 0x1C0043DBC (MNGetPopupFromMenu.c)
 *     MNFreeItem @ 0x1C0065704 (MNFreeItem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00C2B30 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01092F4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C024510C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C024568C (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1C0249E28 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxInsertMenuItem(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v8; // r14d
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // rcx
  int **v15; // rsi
  unsigned int v16; // edx
  unsigned int v17; // r9d
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rax
  size_t v40; // r15
  __int64 v41; // r10
  __int64 v42; // r9
  char v43; // cl
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  signed int v49; // eax
  __int64 *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  unsigned int v54; // r15d
  unsigned __int64 v55; // rsi
  __int64 v56; // r9
  int *v57; // rcx
  _QWORD v58[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v59; // [rsp+40h] [rbp-51h]
  __int64 v60; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v61[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 *v62; // [rsp+60h] [rbp-31h] BYREF
  __int64 v63; // [rsp+68h] [rbp-29h] BYREF
  __int64 v64; // [rsp+70h] [rbp-21h]
  __int64 *v65; // [rsp+78h] [rbp-19h] BYREF
  __int128 v66; // [rsp+80h] [rbp-11h] BYREF
  __int64 v67; // [rsp+90h] [rbp-1h]
  _BYTE v68[72]; // [rsp+98h] [rbp+7h] BYREF
  int v69; // [rsp+F0h] [rbp+5Fh] BYREF
  char v70; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v71; // [rsp+108h] [rbp+77h]

  v71 = a4;
  v8 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v62 = (__int64 *)gSmartObjNullRef;
  v10 = 0;
  v65 = 0LL;
  v63 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v63;
  v64 = 0LL;
  v60 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v61);
  v11 = (_QWORD *)*a1;
  v69 = 0;
  v12 = 0;
  v66 = 0LL;
  v67 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v58, *v11);
  v14 = a1[2];
  v59 = v14;
  if ( a2 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    v37 = v64;
    if ( !v64 )
    {
      v14 = v59;
      v37 = *v62;
    }
    v60 = v37;
    if ( !v14 )
      v14 = *(_QWORD *)v58[0];
    v15 = (int **)MNLookUpItem(v14, a2, a3, &v60);
    v64 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v62, v60);
    if ( v15 )
    {
      v59 = v64;
      SmartObjStackRefBase<tagMENU>::operator=(v58, *v62);
    }
    else
    {
      a2 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL)
    && ((*(_DWORD *)(v71 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v71 + 72) - 1LL) > 6) )
  {
    v16 = a2;
    v17 = a2;
    if ( v15 && !a3 )
    {
      v45 = v59;
      if ( !v59 )
        v45 = *(_QWORD *)v58[0];
      v16 = MNGetpItemIndex(v45, v15, v13, a2);
    }
    if ( v16 )
    {
      if ( v16 == -1 )
        v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL);
      v18 = v16 - 1;
      v13 = *(_QWORD *)(*(_QWORD *)v58[0] + 88LL) + 96 * v18;
      if ( !(_DWORD)v18 )
        goto LABEL_14;
      do
      {
        v19 = *(_QWORD *)(*(_QWORD *)v13 + 96LL);
        if ( !v19 )
          break;
        if ( v19 >= 7 )
          break;
        v13 -= 96LL;
        a2 = v18;
        a3 = 1;
        LODWORD(v18) = v18 - 1;
      }
      while ( (_DWORD)v18 );
    }
    else
    {
      if ( *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v58[0] + 88LL) + 96LL) == 1LL )
      {
        v43 = 1;
        a2 = 1;
      }
      else
      {
        v43 = 0;
      }
      v44 = 1;
      if ( !v43 )
        v44 = a3;
      a3 = v44;
    }
    if ( a2 != v17 )
      v15 = (int **)(*(_QWORD *)(*(_QWORD *)v58[0] + 88LL) + 96LL * a2);
  }
LABEL_14:
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL) < *(_DWORD *)(*(_QWORD *)v58[0] + 60LL) )
    goto LABEL_106;
  if ( (unsigned int)MNAllocMenuItems(v58, 0LL, v13) )
  {
    if ( a2 == -1 )
      goto LABEL_106;
    v35 = v64;
    if ( !v64 )
      v35 = *v62;
    v36 = v59;
    v60 = v35;
    if ( !v59 )
      v36 = *(_QWORD *)v58[0];
    v15 = (int **)MNLookUpItem(v36, a2, a3, &v60);
    v64 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v62, v60);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v58, &v62) )
    {
LABEL_106:
      v20 = v59;
      if ( !v59 )
        v20 = *(_QWORD *)v58[0];
      ThreadLock(v20, &v66);
      if ( v15 )
      {
        v38 = v59;
        if ( !v59 )
          v38 = *(_QWORD *)v58[0];
        v39 = MNGetPopupFromMenu(v38, &v65);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v61, v39);
        if ( *(_QWORD *)v61[0] )
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v70);
          v48 = v59;
          if ( !v59 )
            v48 = *(_QWORD *)v58[0];
          v12 = MNGetpItemIndex(v48, v15, v46, v47);
          if ( *(_DWORD *)(*(_QWORD *)v61[0] + 80LL) >= v12 )
            ++*(_DWORD *)(*(_QWORD *)v61[0] + 80LL);
          if ( (**(_DWORD **)v61[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v61[0] + 84LL) >= v12 )
            ++*(_DWORD *)(*(_QWORD *)v61[0] + 84LL);
          if ( v65[8] == *(_QWORD *)(*(_QWORD *)v61[0] + 16LL) )
          {
            v49 = *((_DWORD *)v65 + 18);
            if ( v49 >= (int)v12 )
              *((_DWORD *)v65 + 18) = v49 + 1;
          }
          v50 = v65;
          if ( v65[10] == *(_QWORD *)(*(_QWORD *)v61[0] + 16LL) )
          {
            v51 = *((unsigned int *)v65 + 22);
            if ( (int)v51 >= (int)v12 )
            {
              *((_DWORD *)v65 + 22) = v51 + 1;
              if ( (_DWORD)v51 == v12 )
              {
                v52 = *((unsigned int *)v50 + 23);
                if ( (v52 & 1) != 0 )
                  xxxMNSetGapState(v50[10], v51, v52, 0LL);
              }
            }
          }
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v70);
        }
      }
      v24 = ThreadUnlock1(v22, v21, v23);
      v59 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v58, v24);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v58) )
      {
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL);
        if ( v15 )
        {
          v40 = *(_QWORD *)(*(_QWORD *)v58[0] + 88LL)
              + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL) - 1)
              - (_QWORD)v15;
          if ( v40 )
          {
            memmove(
              v15[12],
              *v15,
              **(_QWORD **)(*(_QWORD *)v58[0] + 88LL)
            + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL) - 1)
            - (_QWORD)*v15);
            memmove(v15 + 12, v15, v40);
            v41 = ((__int64)v15 - *(_QWORD *)(*(_QWORD *)v58[0] + 88LL) + 96) / 96;
            while ( (unsigned int)v41 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL) )
            {
              v42 = 96LL * (int)v41;
              *(_QWORD *)(v42 + *(_QWORD *)(*(_QWORD *)v58[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v58[0] + 96LL)
                                                                       + 112LL * (unsigned int)v41;
              LODWORD(v41) = v41 + 1;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 88LL) + v42 + 8) = *(_QWORD *)(v42
                                                                                       + *(_QWORD *)(*(_QWORD *)v58[0] + 88LL))
                                                                           - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 24LL)
                                                                                       + 16LL);
            }
          }
        }
        else
        {
          v15 = (int **)(96LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL)
                       + *(_QWORD *)(*(_QWORD *)v58[0] + 88LL)
                       - 96LL);
        }
        **v15 = 0;
        (*v15)[1] = 0;
        (*v15)[2] = 0;
        *((_QWORD *)*v15 + 2) = 0LL;
        v15[2] = 0LL;
        *((_QWORD *)*v15 + 3) = 0LL;
        *((_QWORD *)*v15 + 4) = 0LL;
        (*v15)[12] = 0;
        *((_QWORD *)*v15 + 7) = 0LL;
        (*v15)[16] = 0;
        (*v15)[17] = 0;
        (*v15)[18] = 0;
        (*v15)[19] = 0;
        *((_QWORD *)*v15 + 12) = 0LL;
        (*v15)[26] = -1;
        *((_QWORD *)*v15 + 5) = 0LL;
        v15[3] = 0LL;
        v15[11] = 0LL;
        if ( (unsigned int)MNIsUAHMenu() )
        {
          *(_OWORD *)((char *)v15 + 52) = 0LL;
          *(_OWORD *)((char *)v15 + 68) = 0LL;
        }
        if ( (unsigned int)SetLPITEMInfoNoRedraw((unsigned int)v58, (_DWORD)v15, v71, a5, (__int64)&v69) )
        {
          if ( !v69 )
            goto LABEL_28;
          v27 = v59;
          if ( !v59 )
            v27 = *(_QWORD *)v58[0];
          ThreadLock(v27, &v66);
          xxxRedrawForSetLPITEMInfo(v58, v15);
          v31 = ThreadUnlock1(v29, v28, v30);
          v59 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v58, v31);
          if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v58) )
          {
LABEL_28:
            v32 = v59;
            if ( !v59 )
              v32 = *(_QWORD *)v58[0];
            if ( (unsigned int)MNGetpItemIndex(v32, v15, v25, v26) != -1 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 40LL) & 0x20) != 0
                || (v33 = **v15, (v33 & 0x2000) != 0) && (v33 & 4) == 0 )
              {
                **v15 |= 0x6000u;
                v57 = v15[2];
                if ( v57 )
                  MakeMenuRtoL(v57, 1LL);
              }
            }
            goto LABEL_33;
          }
        }
        else
        {
          if ( *(_QWORD *)v61[0] )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v68);
            MNDeleteAdjustIndexes(v65, v68, v12);
          }
          v53 = v59;
          if ( !v59 )
            v53 = *(_QWORD *)v58[0];
          MNFreeItem(v53, (__int64)v15, 1);
          v54 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL)
              + *(_DWORD *)(*(_QWORD *)v58[0] + 88LL)
              - (_DWORD)v15
              - 96;
          if ( 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL)
             + *(_DWORD *)(*(_QWORD *)v58[0] + 88LL)
             - (_DWORD)v15 != 96 )
          {
            memmove(
              *v15,
              v15[12],
              (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL)
                           + **(_DWORD **)(*(_QWORD *)v58[0] + 88LL)
                           - *((_DWORD *)v15 + 24)));
            memmove(v15, v15 + 12, v54);
            v55 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v15 - *(_QWORD *)(*(_QWORD *)v58[0] + 88LL)) >> 5);
            while ( (unsigned int)v55 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL) - 1 )
            {
              v56 = 96LL * (int)v55;
              *(_QWORD *)(v56 + *(_QWORD *)(*(_QWORD *)v58[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v58[0] + 96LL)
                                                                       + 112LL * (unsigned int)v55;
              LODWORD(v55) = v55 + 1;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 88LL) + v56 + 8) = *(_QWORD *)(v56
                                                                                       + *(_QWORD *)(*(_QWORD *)v58[0] + 88LL))
                                                                           - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 24LL)
                                                                                       + 16LL);
            }
          }
          --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 40LL) + 44LL);
        }
        v8 = 0;
LABEL_33:
        v10 = v8;
      }
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v58);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v61);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v62);
  return v10;
}
