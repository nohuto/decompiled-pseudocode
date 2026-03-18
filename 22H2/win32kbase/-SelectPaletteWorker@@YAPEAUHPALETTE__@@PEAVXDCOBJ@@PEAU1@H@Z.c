/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectPalette @ 0x1C003A9E0 (GreSelectPalette.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000B774 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000B7FC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C000C5E0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  int v3; // r13d
  int *v6; // r15
  struct _ERESOURCE *v7; // rbx
  _DWORD *v8; // r14
  int *v9; // rsi
  __int64 v10; // rcx
  _DWORD *v11; // r15
  GdiHandleManager *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rcx
  GdiHandleManager *v19; // r13
  GdiHandleManager *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // r8
  _DWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int v30; // r9d
  __int64 v31; // rdx
  HPALETTE v32; // rdi
  int v33; // eax
  unsigned int v34; // edx
  _DWORD *v35; // r15
  char v36; // al
  __int64 v37; // rcx
  GdiHandleManager *v38; // rbp
  GdiHandleManager *v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // rdx
  unsigned int v43; // r9d
  __int64 v44; // r8
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  unsigned int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // r8d
  __int64 v53; // r15
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // [rsp+30h] [rbp-58h] BYREF
  int v63; // [rsp+38h] [rbp-50h]
  int *v64; // [rsp+90h] [rbp+8h] BYREF
  __int64 v65; // [rsp+98h] [rbp+10h] BYREF
  int v66; // [rsp+A0h] [rbp+18h]

  v66 = a3;
  v3 = a3;
  v6 = *(int **)(SGDGetSessionState(a1) + 24);
  v64 = v6;
  v7 = (struct _ERESOURCE *)*((_QWORD *)v6 + 5);
  if ( v7 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v9 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v62, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v63 )
  {
    v11 = (_DWORD *)v62;
    if ( *(_BYTE *)(v62 + 14) == 8 && *(_WORD *)(v62 + 12) == WORD1(a2) )
    {
      v12 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v10) + 24) + 8008LL);
      v13 = GdiHandleManager::DecodeIndex(v12, *v11 & 0xFFFFFF);
      v14 = *((_QWORD *)v12 + 2);
      v15 = v13;
      v16 = *(_DWORD *)(v14 + 2056);
      v10 = v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16);
      if ( v13 < (unsigned int)v10 )
      {
        if ( v13 >= v16 )
        {
          v10 = ((v13 - v16) >> 16) + 1;
          v17 = *(_QWORD *)(v14 + 8 * v10 + 8);
          v15 = -65536 * ((v13 - v16) >> 16) - v16 + v13;
        }
        else
        {
          v17 = *(_QWORD *)(v14 + 8);
        }
        if ( (unsigned int)v15 < *(_DWORD *)(v17 + 20) )
        {
          v10 = 2LL * (unsigned __int8)v15;
          v9 = *(int **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
        }
      }
      ++v9[2];
    }
    v18 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
    v19 = *(GdiHandleManager **)(v18 + 8008);
    v20 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v18) + 24) + 8008LL);
    v21 = GdiHandleManager::DecodeIndex(v20, *v11 & 0xFFFFFF);
    v22 = *((_QWORD *)v20 + 2);
    v23 = v21;
    v24 = *(_DWORD *)(v22 + 2056);
    if ( v21 >= v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16)
      || (v21 >= v24
        ? (v25 = *(_QWORD *)(v22 + 8LL * (((v21 - v24) >> 16) + 1) + 8), v23 = -65536 * ((v21 - v24) >> 16) - v24 + v21)
        : (v25 = *(_QWORD *)(v22 + 8)),
          (unsigned int)v23 >= *(_DWORD *)(v25 + 20)) )
    {
      v26 = 0LL;
    }
    else
    {
      v26 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * (v23 >> 8)) + 16LL * (unsigned __int8)v23 + 8);
    }
    v27 = GdiHandleManager::DecodeIndex(v19, (unsigned __int16)*v26 | (*v26 >> 8) & 0xFF0000);
    v28 = *((_QWORD *)v19 + 2);
    v29 = v27;
    v30 = *(_DWORD *)(v28 + 2056);
    if ( v27 < v30 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
    {
      if ( v27 >= v30 )
      {
        v31 = *(_QWORD *)(v28 + 8LL * (((v27 - v30) >> 16) + 1) + 8);
        v29 = -65536 * ((v27 - v30) >> 16) - v30 + v27;
      }
      else
      {
        v31 = *(_QWORD *)(v28 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v31 + 24 * v29 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * (v29 >> 8)) + 16LL * (unsigned __int8)v29,
        0LL);
      KeLeaveCriticalRegion();
    }
    v63 = 0;
    v62 = 0LL;
    KeLeaveCriticalRegion();
    v6 = v64;
    v3 = v66;
  }
  v64 = v9;
  if ( !*(_QWORD *)a1 || !v9 || (v9[6] & 0x100) == 0 )
  {
    v32 = 0LL;
    goto LABEL_27;
  }
  if ( !v3 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v10);
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    *((_QWORD *)v6 + 480) = CurrentProcessWin32Process;
    *((_QWORD *)v6 + 479) = a2;
  }
  v32 = *(HPALETTE *)(*(_QWORD *)a1 + 80LL);
  if ( v32 == a2 )
  {
LABEL_27:
    if ( !v9 )
      goto LABEL_41;
    goto LABEL_28;
  }
  v65 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  if ( v9 != *(int **)(*(_QWORD *)(SGDGetSessionState(v10) + 24) + 6000LL) )
  {
    v53 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( *((_QWORD *)v9 + 6) != v53 )
    {
      if ( v9[14] )
      {
        v32 = 0LL;
        goto LABEL_28;
      }
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v64);
      *((_QWORD *)v9 + 6) = v53;
    }
  }
  GreAcquireHmgrSemaphore();
  XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v65, a1);
  *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
  *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v9;
  v54 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  *(_DWORD *)(v54 + 152) |= 0xFu;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) && v9 != *(int **)(*(_QWORD *)(SGDGetSessionState(v54) + 24) + 6000LL) )
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 176LL) = a2;
  XEPALOBJ::vAddToList((XEPALOBJ *)&v64, a1);
  GreReleaseHmgrSemaphore(v56, v55, v57, v58);
LABEL_28:
  v33 = *v9;
  v34 = *v9;
  v62 = 0LL;
  v63 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v62, (unsigned __int16)v33 | (v34 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v63 )
    goto LABEL_41;
  v35 = (_DWORD *)v62;
  v36 = *(_BYTE *)(v62 + 14);
  if ( v36 == 5 )
  {
    v60 = *((_QWORD *)v9 + 85);
    v61 = 0LL;
  }
  else
  {
    if ( v36 != 16 )
      goto LABEL_31;
    v60 = *((_QWORD *)v9 + 17);
    v61 = 2LL;
  }
  TrackObjectReferenceDecrement(v61, v60);
LABEL_31:
  --v9[2];
  v37 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
  v38 = *(GdiHandleManager **)(v37 + 8008);
  v39 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v37) + 24) + 8008LL);
  v40 = GdiHandleManager::DecodeIndex(v39, *v35 & 0xFFFFFF);
  v41 = *((_QWORD *)v39 + 2);
  v42 = v40;
  v43 = *(_DWORD *)(v41 + 2056);
  if ( v40 < v43 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
  {
    if ( v40 >= v43 )
    {
      v44 = *(_QWORD *)(v41 + 8LL * (((v40 - v43) >> 16) + 1) + 8);
      v42 = -65536 * ((v40 - v43) >> 16) - v43 + v40;
    }
    else
    {
      v44 = *(_QWORD *)(v41 + 8);
    }
    if ( (unsigned int)v42 < *(_DWORD *)(v44 + 20) )
      v8 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v42 >> 8)) + 16LL * (unsigned __int8)v42 + 8);
  }
  v45 = GdiHandleManager::DecodeIndex(v38, (unsigned __int16)*v8 | (*v8 >> 8) & 0xFF0000);
  v46 = *((_QWORD *)v38 + 2);
  v47 = v45;
  v48 = *(_DWORD *)(v46 + 2056);
  if ( v45 < v48 + ((*(unsigned __int16 *)(v46 + 2) + 0xFFFF) << 16) )
  {
    if ( v45 >= v48 )
    {
      v49 = *(_QWORD *)(v46 + 8LL * (((v45 - v48) >> 16) + 1) + 8);
      v47 = -65536 * ((v45 - v48) >> 16) - v48 + v45;
    }
    else
    {
      v49 = *(_QWORD *)(v46 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v49 + 24 * v47 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * (v47 >> 8)) + 16LL * (unsigned __int8)v47,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
LABEL_41:
  if ( v7 )
  {
    v50 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
    if ( *(_DWORD *)(v50 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v50, (unsigned int)&LockRelease, v51, (_DWORD)v7, (__int64)L"hsem");
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  return v32;
}
