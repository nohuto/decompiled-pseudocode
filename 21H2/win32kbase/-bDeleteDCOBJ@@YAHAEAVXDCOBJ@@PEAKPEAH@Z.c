/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C002DFD0 (bDeleteDCInternalEx.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002E1F0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E400 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C016BE10 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ ***a1, unsigned int *a2, int *a3)
{
  struct HOBJ__ **v3; // r9
  int v4; // r12d
  int v6; // ebx
  unsigned int *v7; // rax
  unsigned int v8; // ebp
  int v9; // eax
  const wchar_t *v10; // rdx
  PERESOURCE v11; // rcx
  struct _ERESOURCE *v12; // rbx
  struct HOBJ__ *v13; // r15
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  GdiHandleManager *v15; // rsi
  unsigned int v16; // ebx
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rsi
  unsigned __int16 *v20; // rdi
  __int64 v21; // r13
  unsigned int v22; // ecx
  char v23; // al
  _DWORD *v24; // r12
  unsigned int v25; // ebx
  __int64 v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // rdx
  char v30; // al
  unsigned int v31; // ebx
  GdiHandleManager *v32; // rdi
  __int64 v33; // rdx
  unsigned int v34; // r9d
  __int64 v35; // r8
  unsigned int v36; // ebx
  __int64 v37; // rdx
  unsigned int v38; // r8d
  __int64 v39; // r10
  int v40; // ecx
  int v41; // r8d
  int v42; // ecx
  int v43; // r8d
  int v45; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // r8d
  GdiHandleManager *v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // r8
  unsigned __int64 v53; // rdx
  unsigned int v54; // r9d
  __int64 v55; // r8
  __int64 v56; // rdx
  char v57; // r8
  __int64 v58; // rdx
  int v59; // r8d
  __int64 v60; // [rsp+30h] [rbp-78h]
  unsigned __int64 v61; // [rsp+38h] [rbp-70h]
  unsigned __int16 *v62; // [rsp+40h] [rbp-68h] BYREF
  int v63; // [rsp+48h] [rbp-60h]
  int v64; // [rsp+4Ch] [rbp-5Ch]
  char v65; // [rsp+B0h] [rbp+8h]
  char v66; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v67; // [rsp+C0h] [rbp+18h]
  __int64 v68; // [rsp+C8h] [rbp+20h] BYREF

  v3 = *a1;
  v4 = 0;
  v6 = 0;
  if ( a2 )
  {
    *((_DWORD *)v3 + 9) |= *a2 & 0x1C00000;
    v7 = a2;
    v3 = *a1;
  }
  else
  {
    v7 = (unsigned int *)v3 + 9;
  }
  v8 = *v7;
  v9 = *((_DWORD *)v3 + 9);
  if ( (v9 & 8) != 0 )
  {
    if ( (v8 & 0x400000) != 0 )
      *((_DWORD *)v3 + 9) = v9 & 0xFFFFFFF7;
    else
      v6 = 1;
  }
  *a3 = v6;
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**a1, 0) )
  {
    EngSetLastError(0x139Fu);
    return 0LL;
  }
  if ( *((_WORD *)*a1 + 6) > 1u && (v8 & 0x1C00000) == 0 )
  {
    EngSetLastError(0xAAu);
    return 0LL;
  }
  if ( v6 )
  {
    if ( (v8 & 0x1000000) != 0 )
      v4 = 1;
    XDCOBJ::bCleanDC((XDCOBJ *)a1, v4);
    return 1LL;
  }
  v10 = L"ghsemDynamicModeChange";
  v11 = (PERESOURCE)*((unsigned int *)(*a1)[6] + 10);
  if ( (char)v11 < 0 )
  {
    v65 = 0;
    v66 = 0;
  }
  else
  {
    v11 = ghsemDynamicModeChange;
    v65 = 1;
    v66 = 1;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange, L"ghsemDynamicModeChange");
      v10 = L"ghsemDynamicModeChange";
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (_DWORD)v11,
        (unsigned int)&LockAcquireShared,
        (_DWORD)a3,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
  }
  v12 = ghsemHmgr;
  v13 = **a1;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v11);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v12);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      (unsigned int)L"ghsemHmgr",
      (_DWORD)v10,
      (_DWORD)a3,
      (_DWORD)ghsemHmgr,
      17,
      (__int64)L"ghsemHmgr");
  v68 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v68, v10, a3);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v45 = gSessionId,
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v45 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v60 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v60 = 0LL;
  }
  v15 = gpHandleManager;
  v16 = (unsigned __int16)v13 | ((unsigned int)v13 >> 8) & 0xFF0000;
  v63 = 1;
  if ( v16 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v13,
                                  1)
           + 13) == ((unsigned __int16)v13 | ((unsigned int)v13 >> 8) & 0xFF0000) >> 16 )
        v16 = (unsigned __int16)v13;
    }
    else
    {
      v16 = (unsigned __int16)v13;
    }
  }
  v17 = *((_QWORD *)v15 + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v16 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_132;
  if ( v16 >= v18 )
  {
    v19 = *(_QWORD *)(v17 + 8LL * (((v16 - v18) >> 16) + 1) + 8);
    v16 += -65536 * ((v16 - v18) >> 16) - v18;
  }
  else
  {
    v19 = *(_QWORD *)(v17 + 8);
  }
  v20 = 0LL;
  if ( v16 >= *(_DWORD *)(v19 + 20) )
    goto LABEL_132;
  v21 = 16LL * (unsigned __int8)v16;
  v61 = 8 * ((unsigned __int64)v16 >> 8);
  v67 = v21 + *(_QWORD *)(**(_QWORD **)(v19 + 24) + v61);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v67, 0LL);
  if ( v16 < *(_DWORD *)(v19 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + v61) + v21 + 8) )
  {
    *(_DWORD *)(*(_QWORD *)v19 + 24LL * v16 + 8) |= 1u;
    v20 = (unsigned __int16 *)(24LL * v16 + *(_QWORD *)v19);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v67, 0LL);
    KeLeaveCriticalRegion();
  }
  v62 = v20;
  if ( !v20 )
  {
LABEL_132:
    KeLeaveCriticalRegion();
    goto LABEL_133;
  }
  _m_prefetchw(v20 + 4);
  v64 = *((_DWORD *)v20 + 2);
  v22 = v64 & 0xFFFFFFFE;
  if ( (v64 & 0xFFFFFFFE) != (v68 & 0xFFFFFFFC) && v22 && (!v60 || v22 != *(_DWORD *)(v60 + 8))
    || (v23 = *((_BYTE *)v20 + 15), (v23 & 0x20) != 0) )
  {
    v24 = 0LL;
    goto LABEL_100;
  }
  if ( (v23 & 0x40) == 0 )
  {
    v24 = 0LL;
    goto LABEL_33;
  }
  v50 = gpHandleManager;
  v51 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v20 & 0xFFFFFF);
  v52 = *((_QWORD *)v50 + 2);
  v53 = v51;
  v54 = *(_DWORD *)(v52 + 2056);
  if ( v51 >= v54 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16)
    || (v51 >= v54
      ? (v55 = *(_QWORD *)(v52 + 8LL * (((v51 - v54) >> 16) + 1) + 8), v53 = -65536 * ((v51 - v54) >> 16) - v54 + v51)
      : (v55 = *(_QWORD *)(v52 + 8)),
        (unsigned int)v53 >= *(_DWORD *)(v55 + 20)) )
  {
    v24 = 0LL;
    v56 = 0LL;
  }
  else
  {
    v24 = 0LL;
    v56 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * (v53 >> 8)) + 16LL * (unsigned __int8)v53 + 8);
  }
  if ( !*(_WORD *)(v56 + 12) || *(struct _KTHREAD **)(v56 + 16) != KeGetCurrentThread() )
  {
LABEL_100:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
    if ( v63 )
      goto LABEL_101;
LABEL_133:
    GreReleaseHmgrSemaphore(v48, v47, v49);
    EngSetLastError(0xAAu);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v66, v58, v59);
    return 0LL;
  }
LABEL_101:
  v20 = v62;
LABEL_33:
  v25 = *(_DWORD *)v20 & 0xFFFFFF;
  if ( v25 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v20,
                                  1)
           + 13) == HIWORD(v25) )
        v25 = (unsigned __int16)v25;
    }
    else
    {
      v25 = *v20;
    }
  }
  v26 = *((_QWORD *)gpHandleManager + 2);
  v27 = *(_DWORD *)(v26 + 2056);
  if ( v25 >= v27 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16)
    || (v25 >= v27
      ? (v28 = *(_QWORD *)(v26 + 8LL * (((v25 - v27) >> 16) + 1) + 8), v25 += -65536 * ((v25 - v27) >> 16) - v27)
      : (v28 = *(_QWORD *)(v26 + 8)),
        v25 >= *(_DWORD *)(v28 + 20)) )
  {
    v29 = 0LL;
  }
  else
  {
    v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                    + 16LL * (unsigned __int8)v25
                    + 8);
  }
  if ( *((_BYTE *)v20 + 14) != 1 || v20[6] != WORD1(v13) )
    goto LABEL_130;
  if ( *(_WORD *)(v29 + 12) != 1 || *(_DWORD *)(v29 + 8) )
  {
    *((_BYTE *)v20 + 15) |= 8u;
LABEL_130:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
    if ( v63 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
    goto LABEL_133;
  }
  v30 = *((_BYTE *)v20 + 15);
  if ( (v30 & 1) != 0 )
    goto LABEL_130;
  *((_BYTE *)v20 + 15) = v30 | 0x40;
  v31 = *(_DWORD *)v20 & 0xFFFFFF;
  if ( v31 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v20,
                                  1)
           + 13) == HIWORD(v31) )
        v31 = (unsigned __int16)v31;
    }
    else
    {
      v31 = *v20;
    }
  }
  v32 = gpHandleManager;
  v33 = *((_QWORD *)gpHandleManager + 2);
  v34 = *(_DWORD *)(v33 + 2056);
  if ( v31 < v34 + ((*(unsigned __int16 *)(v33 + 2) + 0xFFFF) << 16) )
  {
    if ( v31 >= v34 )
    {
      v35 = *(_QWORD *)(v33 + 8LL * (((v31 - v34) >> 16) + 1) + 8);
      v31 += -65536 * ((v31 - v34) >> 16) - v34;
    }
    else
    {
      v35 = *(_QWORD *)(v33 + 8);
    }
    if ( v31 < *(_DWORD *)(v35 + 20) )
      v24 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v31 >> 8))
                       + 16LL * (unsigned __int8)v31
                       + 8);
  }
  v36 = (unsigned __int16)*v24 | (*v24 >> 8) & 0xFF0000;
  if ( v36 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v24,
                                  1)
           + 13) == HIWORD(v36) )
        v36 = (unsigned __int16)v36;
      else
        GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v32 + 2), (unsigned __int16)v36, v57);
    }
    else
    {
      v36 = (unsigned __int16)*v24;
    }
  }
  v37 = *((_QWORD *)v32 + 2);
  v38 = *(_DWORD *)(v37 + 2056);
  if ( v36 < v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
  {
    if ( v36 >= v38 )
    {
      v39 = *(_QWORD *)(v37 + 8LL * (((v36 - v38) >> 16) + 1) + 8);
      v36 += -65536 * ((v36 - v38) >> 16) - v38;
    }
    else
    {
      v39 = *(_QWORD *)(v37 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v39 + 24LL * v36 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v36 >> 8)) + 16LL * (unsigned __int8)v36,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v40, (unsigned int)&LockRelease, v41, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  XDCOBJ::bCleanDC((XDCOBJ *)a1, HIBYTE(v8) & 1);
  if ( v65 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v42,
        (unsigned int)&LockRelease,
        v43,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  vDeleteDCInternalWorker((struct XDCOBJ *)a1, (v8 >> 23) & 1);
  return 1LL;
}
