/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C0032310
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteDCInternal @ 0x1C0007A80 (bDeleteDCInternal.c)
 *     bDeleteBrush @ 0x1C001C340 (bDeleteBrush.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002B9F0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002FEF0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00319D0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0034C5C (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0034CB0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0038BA4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C0082990 (bDeletePalette.c)
 *     HmgFreeObjectAttr @ 0x1C009AF04 (HmgFreeObjectAttr.c)
 *     bDeleteFont @ 0x1C00AC43C (bDeleteFont.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00C7C50 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C8F1C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CA60 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(struct HOBJ__ *a1)
{
  unsigned int v3; // r12d
  int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int v8; // r15d
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r10
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ecx
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v21; // r13
  GdiHandleManager *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r12
  unsigned int v25; // esi
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned int v31; // ecx
  char v32; // al
  int v33; // edx
  GdiHandleManager *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdx
  GdiHandleManager *v42; // r13
  unsigned int v43; // eax
  __int64 v44; // r14
  unsigned int v45; // r8d
  int v46; // r12d
  unsigned int v47; // esi
  __int64 v48; // rcx
  __int64 v49; // r10
  __int64 v50; // rbx
  unsigned int v51; // eax
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  REGION *v55; // rdx
  int v56; // ebx
  __int64 v57; // [rsp+30h] [rbp-69h] BYREF
  int v58; // [rsp+38h] [rbp-61h]
  int v59; // [rsp+3Ch] [rbp-5Dh]
  REGION *v60[7]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v61[32]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v62; // [rsp+A0h] [rbp+7h]
  __int64 v63; // [rsp+108h] [rbp+6Fh]
  __int64 v64; // [rsp+110h] [rbp+77h] BYREF
  __int64 v65; // [rsp+118h] [rbp+7Fh]

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (unsigned int)a1 >> 16;
  v4 = BYTE2(a1) & 0x1F;
  v5 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000) >> 16 )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)a1;
    }
  }
  v6 = 0;
  v7 = *((_QWORD *)gpHandleManager + 2);
  v8 = 1;
  v9 = *(_DWORD *)(v7 + 2056);
  if ( v5 < v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
  {
    v10 = ((v5 - v9) >> 16) + 1;
    if ( v5 < v9 )
      v10 = 0LL;
    v11 = *(_QWORD *)(v7 + 8 * v10 + 8);
    if ( (_DWORD)v10 )
      v5 += ((1 - (_DWORD)v10) << 16) - v9;
    v7 = 0LL;
    if ( v5 < *(_DWORD *)(v11 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                   + 16LL * (unsigned __int8)v5
                   + 8) )
    {
      v7 = *(_QWORD *)v11 + 24LL * v5;
    }
    if ( v7
      && *(unsigned __int8 *)(v7 + 14) == v4
      && *(_WORD *)(v7 + 12) == (_WORD)v3
      && (*(_DWORD *)(v7 + 8) & 0xFFFFFFFE) == 0 )
    {
      LOBYTE(v6) = a1 != 0LL;
      return v6;
    }
  }
  if ( v4 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v60, (HRGN)a1, 0, 0);
    if ( !v60[0] || *((_DWORD *)v60[0] + 8) )
      goto LABEL_111;
    v18 = *(_QWORD *)v60[0];
    v65 = *(_QWORD *)v60[0];
    v19 = 0LL;
    v64 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v64);
    if ( !IsThreadCrossSessionAttached()
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v21 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v21 = 0LL;
    }
    v22 = gpHandleManager;
    v58 = 1;
    v23 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)v18 | ((unsigned int)v18 >> 8) & 0xFF0000);
    v24 = *((_QWORD *)v22 + 2);
    v25 = v23;
    v26 = *(_DWORD *)(v24 + 2056);
    if ( v23 >= v26 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
      goto LABEL_107;
    v27 = ((v23 - v26) >> 16) + 1;
    if ( v23 < v26 )
      v27 = 0LL;
    v28 = *(_QWORD *)(v24 + 8 * v27 + 8);
    if ( (_DWORD)v27 )
      v25 = ((1 - (_DWORD)v27) << 16) - v26 + v23;
    v29 = 0LL;
    if ( v25 < *(_DWORD *)(v28 + 20) )
    {
      v63 = *(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v25 >> 8)) + 16LL * (unsigned __int8)v25;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v63, 0LL);
      if ( GdiHandleEntryTable::GetEntryObject((GdiHandleEntryTable *)v28, v25) )
      {
        v30 = 24LL * v25;
        *(_DWORD *)(v30 + *(_QWORD *)v28 + 8) |= 1u;
        v29 = v30 + *(_QWORD *)v28;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v63, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v57 = v29;
    if ( !v29 )
    {
LABEL_107:
      KeLeaveCriticalRegion();
      goto LABEL_108;
    }
    _m_prefetchw((const void *)(v29 + 8));
    v59 = *(_DWORD *)(v29 + 8);
    v31 = v59 & 0xFFFFFFFE;
    if ( (v59 & 0xFFFFFFFE) != (v64 & 0xFFFFFFFC) && v31 && (!v21 || v31 != *(_DWORD *)(v21 + 8)) )
      goto LABEL_73;
    v32 = *(_BYTE *)(v29 + 15);
    if ( (v32 & 0x20) != 0 )
      goto LABEL_73;
    if ( (v32 & 0x40) == 0 )
    {
LABEL_75:
      if ( *(_BYTE *)(v29 + 14) != 4 || *(_WORD *)(v29 + 12) != WORD1(v65) )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v57);
      if ( !v58 )
        goto LABEL_108;
      v42 = gpHandleManager;
      v43 = GdiHandleManager::DecodeIndex(
              (GdiHandleEntryDirectory **)gpHandleManager,
              (unsigned __int16)*(_DWORD *)v60[0] | (*(_DWORD *)v60[0] >> 8) & 0xFF0000u);
      v44 = *((_QWORD *)v42 + 2);
      v45 = v43;
      v46 = *(unsigned __int16 *)(v44 + 2);
      v47 = *(_DWORD *)(v44 + 2056);
      if ( v43 >= v47 + ((v46 + 0xFFFF) << 16) )
      {
        v50 = 0LL;
      }
      else
      {
        v48 = ((v43 - v47) >> 16) + 1;
        if ( v43 < v47 )
          v48 = 0LL;
        v49 = *(_QWORD *)(v44 + 8 * v48 + 8);
        if ( (_DWORD)v48 )
          v43 += ((1 - (_DWORD)v48) << 16) - v47;
        v50 = 0LL;
        if ( v43 < *(_DWORD *)(v49 + 20)
          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                       + 16LL * (unsigned __int8)v43
                       + 8) )
        {
          v50 = *(_QWORD *)v49 + 24LL * v43;
        }
      }
      v51 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v42, v45);
      v52 = v51;
      if ( v51 >= v47 + ((v46 + 0xFFFF) << 16) )
        goto LABEL_95;
      v53 = ((v51 - v47) >> 16) + 1;
      if ( v51 < v47 )
        v53 = 0LL;
      v54 = *(_QWORD *)(v44 + 8 * v53 + 8);
      if ( (_DWORD)v53 )
        v52 = ((1 - (_DWORD)v53) << 16) - v47 + v51;
      if ( (unsigned int)v52 >= *(_DWORD *)(v54 + 20) )
LABEL_95:
        v55 = 0LL;
      else
        v55 = *(REGION **)(*(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * (v52 >> 8)) + 16LL * (unsigned __int8)v52 + 8);
      if ( v55 != v60[0] )
        v50 = 0LL;
      v19 = *(_QWORD *)(v50 + 16);
      if ( v19 )
      {
        v56 = bPEBCacheHandle(2LL, v19, v50, &v57, v60);
        if ( v56 )
          goto LABEL_103;
      }
      else
      {
        v56 = 0;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v57);
LABEL_103:
      if ( v58 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v57);
      if ( v56 )
        goto LABEL_112;
LABEL_108:
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v60) )
      {
        REGION::vDeleteREGION(v60[0]);
        v60[0] = 0LL;
        if ( v19 )
          HmgFreeObjectAttr(v19);
        goto LABEL_112;
      }
LABEL_111:
      v8 = 0;
LABEL_112:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v60);
      return v8;
    }
    v33 = *(_DWORD *)v29;
    v34 = gpHandleManager;
    v35 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v33 & 0xFFFFFF);
    v36 = *((_QWORD *)v34 + 2);
    v37 = v35;
    v38 = *(_DWORD *)(v36 + 2056);
    if ( v35 >= v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
      goto LABEL_70;
    v39 = ((v35 - v38) >> 16) + 1;
    if ( v35 < v38 )
      v39 = 0LL;
    v40 = *(_QWORD *)(v36 + 8 * v39 + 8);
    if ( (_DWORD)v39 )
      v37 = ((1 - (_DWORD)v39) << 16) - v38 + v35;
    if ( (unsigned int)v37 >= *(_DWORD *)(v40 + 20) )
LABEL_70:
      v41 = 0LL;
    else
      v41 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * (v37 >> 8)) + 16LL * (unsigned __int8)v37 + 8);
    if ( !*(_WORD *)(v41 + 12) || *(struct _KTHREAD **)(v41 + 16) != KeGetCurrentThread() )
    {
LABEL_73:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v57);
      if ( !v58 )
        goto LABEL_108;
    }
    v29 = v57;
    goto LABEL_75;
  }
  v12 = v4 - 1;
  if ( !v12 )
    return bDeleteDCInternal((HDC)a1);
  v13 = v12 - 4;
  if ( v13 )
  {
    v14 = v13 - 3;
    if ( v14 )
    {
      v15 = v14 - 2;
      if ( v15 )
      {
        if ( v15 == 6 )
          return bDeleteBrush(a1, 0, 0);
        else
          return 0LL;
      }
      else
      {
        return bDeleteFont(a1, 0LL);
      }
    }
    else
    {
      return bDeletePalette(a1, 0LL, 0LL);
    }
  }
  else
  {
    v16 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v16,
        (unsigned int)&LockAcquireShared,
        v7,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v61);
    v62 = 0LL;
    v62 = HmgShareLockCheckIgnoreStockBit((unsigned int)a1, 5);
    if ( v62 )
      v6 = SURFREF::bDeleteSurface(v61, 0LL);
    SURFREF::~SURFREF((SURFREF *)v61);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
    return v6;
  }
}
