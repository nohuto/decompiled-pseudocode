/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C0024430
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001C9F4 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E010 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001FE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022520 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E884 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     bDeleteDCInternal @ 0x1C00518F0 (bDeleteDCInternal.c)
 *     bDeletePalette @ 0x1C0093780 (bDeletePalette.c)
 *     HmgFreeObjectAttr @ 0x1C00AD9C8 (HmgFreeObjectAttr.c)
 *     bDeleteFont @ 0x1C00BE158 (bDeleteFont.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D8BE8 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HRGN a1)
{
  unsigned int v3; // r15d
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ecx
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _SLIST_ENTRY *Next; // r15
  _DWORD *v19; // rsi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v21; // r14
  __int64 v22; // r14
  GdiHandleManager *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // r9
  unsigned int v26; // edx
  unsigned int v27; // ecx
  GdiHandleEntryTable *v28; // r9
  struct _ENTRY *v29; // rax
  unsigned int v30; // edx
  char v31; // cl
  GdiHandleManager *v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned int v36; // r9d
  __int64 v37; // r8
  __int64 v38; // rdx
  GdiHandleManager *v39; // rbx
  unsigned int v40; // eax
  __int64 v41; // r15
  unsigned int v42; // r9d
  int v43; // r13d
  unsigned int v44; // ebx
  __int64 v45; // r8
  __int64 v46; // r14
  unsigned int v47; // eax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  struct _SLIST_ENTRY *v52; // rdx
  __int64 v53; // rbx
  int v54; // ebx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v56; // r15
  __int64 ProcessWow64Process; // rax
  int v58; // ecx
  unsigned __int64 v59; // rsi
  struct _ENTRY *v60; // [rsp+30h] [rbp-39h] BYREF
  int v61; // [rsp+38h] [rbp-31h]
  int v62; // [rsp+3Ch] [rbp-2Dh]
  __int64 v63; // [rsp+50h] [rbp-19h]
  PSLIST_ENTRY ListEntry[7]; // [rsp+58h] [rbp-11h] BYREF
  char v65; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v66; // [rsp+D8h] [rbp+6Fh] BYREF
  GdiHandleManager *v67; // [rsp+E0h] [rbp+77h]

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
  v6 = 1;
  v7 = *((_QWORD *)gpHandleManager + 2);
  v8 = *(_DWORD *)(v7 + 2056);
  if ( v5 < v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
  {
    if ( v5 >= v8 )
    {
      v7 = *(_QWORD *)(v7 + 8LL * (((v5 - v8) >> 16) + 1) + 8);
      v5 += -65536 * ((v5 - v8) >> 16) - v8;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 8);
    }
    if ( v5 < *(_DWORD *)(v7 + 20) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                     + 16LL * (unsigned __int8)v5
                     + 8) )
      {
        v9 = *(_QWORD *)v7 + 24LL * v5;
        if ( v9 )
        {
          if ( *(unsigned __int8 *)(v9 + 14) == v4
            && *(_WORD *)(v9 + 12) == (_WORD)v3
            && (*(_DWORD *)(v9 + 8) & 0xFFFFFFFE) == 0 )
          {
            return a1 != 0LL;
          }
        }
      }
    }
  }
  if ( v4 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)ListEntry, a1, 0, 0);
    if ( !ListEntry[0] || LODWORD(ListEntry[0][2].Next) )
      goto LABEL_109;
    Next = ListEntry[0]->Next;
    v19 = 0LL;
    v66 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(
                                                                  &v66,
                                                                  v16,
                                                                  v17);
    if ( !IsThreadCrossSessionAttached()
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && (v21 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    {
      v22 = *(_QWORD *)(v21 + 72);
    }
    else
    {
      v22 = 0LL;
    }
    v23 = gpHandleManager;
    v61 = 1;
    v24 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)Next | ((unsigned int)Next >> 8) & 0xFF0000);
    v25 = *((_QWORD *)v23 + 2);
    v26 = v24;
    v27 = *(_DWORD *)(v25 + 2056);
    if ( v24 >= v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16)
      || (v24 >= v27
        ? (GdiHandleEntryTable *)(v28 = *(GdiHandleEntryTable **)(v25 + 8LL * (((v24 - v27) >> 16) + 1) + 8),
                                  v26 = -65536 * ((v24 - v27) >> 16) - v27 + v24)
        : (v28 = *(GdiHandleEntryTable **)(v25 + 8)),
          v29 = GdiHandleEntryTable::AcquireEntryLock(v28, v26, 0),
          (v60 = v29) == 0LL) )
    {
      KeLeaveCriticalRegion();
      goto LABEL_106;
    }
    _m_prefetchw((char *)v29 + 8);
    v62 = *((_DWORD *)v29 + 2);
    v30 = v62 & 0xFFFFFFFE;
    if ( (v62 & 0xFFFFFFFE) != (v66 & 0xFFFFFFFC) && v30 && (!v22 || v30 != *(_DWORD *)(v22 + 8)) )
      goto LABEL_65;
    v31 = *((_BYTE *)v29 + 15);
    if ( (v31 & 0x20) != 0 )
      goto LABEL_65;
    if ( (v31 & 0x40) == 0 )
    {
LABEL_67:
      if ( *((_BYTE *)v29 + 14) != 4 || *((_WORD *)v29 + 6) != WORD1(Next) )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
      if ( !v61 )
        goto LABEL_106;
      v39 = gpHandleManager;
      v67 = gpHandleManager;
      v40 = GdiHandleManager::DecodeIndex(
              (GdiHandleEntryDirectory **)gpHandleManager,
              (unsigned __int16)ListEntry[0]->Next | ((unsigned __int64)ListEntry[0]->Next >> 8) & 0xFF0000);
      v41 = *((_QWORD *)v39 + 2);
      v42 = v40;
      v43 = *(unsigned __int16 *)(v41 + 2);
      v44 = *(_DWORD *)(v41 + 2056);
      if ( v40 >= v44 + ((v43 + 0xFFFF) << 16) )
      {
        v46 = 0LL;
      }
      else
      {
        if ( v40 >= v44 )
        {
          v45 = *(_QWORD *)(v41 + 8LL * (((v40 - v44) >> 16) + 1) + 8);
          v40 += -65536 * ((v40 - v44) >> 16) - v44;
        }
        else
        {
          v45 = *(_QWORD *)(v41 + 8);
        }
        v46 = 0LL;
        if ( v40 < *(_DWORD *)(v45 + 20)
          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v40 >> 8))
                       + 16LL * (unsigned __int8)v40
                       + 8) )
        {
          v46 = *(_QWORD *)v45 + 24LL * v40;
        }
        LOWORD(v43) = *(_WORD *)(v41 + 2);
      }
      v47 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v67, v42);
      v50 = v44 + (((unsigned __int16)v43 + 0xFFFF) << 16);
      v51 = v47;
      if ( v47 >= (unsigned int)v50
        || (v47 >= v44
          ? (v50 = ((v47 - v44) >> 16) + 1,
             v48 = *(_QWORD *)(v41 + 8 * v50 + 8),
             v51 = -65536 * ((v47 - v44) >> 16) - v44 + v47)
          : (v48 = *(_QWORD *)(v41 + 8)),
            (unsigned int)v51 >= *(_DWORD *)(v48 + 20)) )
      {
        v52 = 0LL;
      }
      else
      {
        v50 = 2LL * (unsigned __int8)v51;
        v52 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * (v51 >> 8))
                                      + 16LL * (unsigned __int8)v51
                                      + 8);
      }
      if ( v52 != ListEntry[0] )
        v46 = 0LL;
      v53 = *(_QWORD *)(v46 + 16);
      if ( v53 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v50, v52, v48, v49);
        v56 = CurrentProcessWin32Process;
        if ( !CurrentProcessWin32Process )
          KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v58 = *((_DWORD *)v56 + 73);
        if ( ProcessWow64Process )
          v59 = (unsigned int)__ROR4__(v53, 32 - (v58 & 0x1F));
        else
          v59 = __ROR8__(v53, 64 - (v58 & 0x3Fu));
        v19 = (_DWORD *)(*((unsigned int *)v56 + 73) ^ v59);
        if ( v19 )
        {
          v54 = bPEBCacheHandle(2LL, v19, (_DWORD *)v46, (_DWORD **)&v60, (__int64)ListEntry);
          if ( v54 )
            goto LABEL_101;
        }
        else
        {
          v54 = 0;
        }
      }
      else
      {
        v54 = 0;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
LABEL_101:
      if ( v61 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
      if ( v54 )
        goto LABEL_110;
LABEL_106:
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)ListEntry) )
      {
        REGION::vDeleteREGION(ListEntry[0]);
        ListEntry[0] = 0LL;
        if ( v19 )
          HmgFreeObjectAttr(v19);
        goto LABEL_110;
      }
LABEL_109:
      v6 = 0;
LABEL_110:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)ListEntry);
      return v6;
    }
    v32 = gpHandleManager;
    v33 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v29 & 0xFFFFFF);
    v34 = *((_QWORD *)v32 + 2);
    v35 = v33;
    v36 = *(_DWORD *)(v34 + 2056);
    if ( v33 >= v36 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16)
      || (v33 >= v36
        ? (v37 = *(_QWORD *)(v34 + 8LL * (((v33 - v36) >> 16) + 1) + 8), v35 = -65536 * ((v33 - v36) >> 16) - v36 + v33)
        : (v37 = *(_QWORD *)(v34 + 8)),
          (unsigned int)v35 >= *(_DWORD *)(v37 + 20)) )
    {
      v38 = 0LL;
    }
    else
    {
      v38 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * (v35 >> 8)) + 16LL * (unsigned __int8)v35 + 8);
    }
    if ( !*(_WORD *)(v38 + 12) || *(struct _KTHREAD **)(v38 + 16) != KeGetCurrentThread() )
    {
LABEL_65:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
      if ( !v61 )
        goto LABEL_106;
    }
    v29 = v60;
    goto LABEL_67;
  }
  v10 = v4 - 1;
  if ( !v10 )
    return bDeleteDCInternal(a1, 0LL, 0LL);
  v11 = v10 - 4;
  if ( v11 )
  {
    v12 = v11 - 3;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 == 6 )
          return bDeleteBrush((HBRUSH)a1);
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
      return bDeletePalette((HPALETTE)a1);
    }
  }
  else
  {
    v14 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v14,
        (unsigned int)&LockAcquireShared,
        v7,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(&v60);
    v15 = 0;
    v63 = 0LL;
    v63 = HmgShareLockCheckIgnoreStockBit((unsigned int)a1, 5);
    if ( v63 )
      v15 = SURFREF::bDeleteSurface((__int64)&v60, 0LL);
    SURFREF::~SURFREF((SURFREF *)&v60);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v65);
    return v15;
  }
}
