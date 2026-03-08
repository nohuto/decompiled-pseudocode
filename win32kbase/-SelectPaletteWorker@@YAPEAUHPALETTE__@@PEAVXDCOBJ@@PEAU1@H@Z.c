/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0093290
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000A224 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000A2AC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0019F20 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  int v3; // r13d
  __int64 v6; // rcx
  int *v7; // r15
  struct _ERESOURCE *v8; // rbx
  _DWORD *v9; // r14
  int *v10; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // r15
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // r8
  _DWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned int v31; // r9d
  __int64 v32; // rdx
  HPALETTE v33; // rdi
  int v34; // eax
  unsigned int v35; // edx
  _DWORD *v36; // r15
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // rsi
  unsigned int v41; // eax
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  unsigned int v44; // r9d
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // r8d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v56; // rcx
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // [rsp+30h] [rbp-58h] BYREF
  int v64; // [rsp+38h] [rbp-50h]
  int *v65; // [rsp+90h] [rbp+8h] BYREF
  __int64 v66; // [rsp+98h] [rbp+10h] BYREF
  int v67; // [rsp+A0h] [rbp+18h]

  v67 = a3;
  v3 = a3;
  v7 = *(int **)(SGDGetSessionState(a1) + 24);
  v65 = v7;
  v8 = (struct _ERESOURCE *)*((_QWORD *)v7 + 5);
  if ( v8 )
  {
    PsEnterPriorityRegion(v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  v9 = 0LL;
  v63 = 0LL;
  v64 = 0;
  v10 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v63, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v64 )
  {
    v12 = (_DWORD *)v63;
    if ( *(_BYTE *)(v63 + 14) == 8 && *(_WORD *)(v63 + 12) == WORD1(a2) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v11) + 24) + 8008LL);
      v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v13, *v12 & 0xFFFFFF);
      v15 = *(_QWORD *)(v13 + 16);
      v16 = v14;
      v17 = *(_DWORD *)(v15 + 2056);
      v11 = v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16);
      if ( v14 < (unsigned int)v11 )
      {
        if ( v14 >= v17 )
        {
          v11 = ((v14 - v17) >> 16) + 1;
          v18 = *(_QWORD *)(v15 + 8 * v11 + 8);
          v16 = -65536 * ((v14 - v17) >> 16) - v17 + v14;
        }
        else
        {
          v18 = *(_QWORD *)(v15 + 8);
        }
        if ( (unsigned int)v16 < *(_DWORD *)(v18 + 20) )
        {
          v11 = 2LL * (unsigned __int8)v16;
          v10 = *(int **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
        }
      }
      ++v10[2];
    }
    v19 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
    v20 = *(_QWORD *)(v19 + 8008);
    v21 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v19) + 24) + 8008LL);
    v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v21, *v12 & 0xFFFFFF);
    v23 = *(_QWORD *)(v21 + 16);
    v24 = v22;
    v25 = *(_DWORD *)(v23 + 2056);
    if ( v22 >= v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16)
      || (v22 >= v25
        ? (v26 = *(_QWORD *)(v23 + 8LL * (((v22 - v25) >> 16) + 1) + 8), v24 = -65536 * ((v22 - v25) >> 16) - v25 + v22)
        : (v26 = *(_QWORD *)(v23 + 8)),
          (unsigned int)v24 >= *(_DWORD *)(v26 + 20)) )
    {
      v27 = 0LL;
    }
    else
    {
      v27 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
    }
    v28 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v20,
            (unsigned __int16)*v27 | (*v27 >> 8) & 0xFF0000u);
    v29 = *(_QWORD *)(v20 + 16);
    v30 = v28;
    v31 = *(_DWORD *)(v29 + 2056);
    if ( v28 < v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
    {
      if ( v28 >= v31 )
      {
        v32 = *(_QWORD *)(v29 + 8LL * (((v28 - v31) >> 16) + 1) + 8);
        v30 = -65536 * ((v28 - v31) >> 16) - v31 + v28;
      }
      else
      {
        v32 = *(_QWORD *)(v29 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v32 + 24 * v30 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * (v30 >> 8)) + 16LL * (unsigned __int8)v30,
        0LL);
      KeLeaveCriticalRegion();
    }
    v64 = 0;
    v63 = 0LL;
    KeLeaveCriticalRegion();
    v7 = v65;
    v3 = v67;
  }
  v65 = v10;
  if ( !*(_QWORD *)a1 || !v10 || (v10[6] & 0x100) == 0 )
  {
    v33 = 0LL;
    goto LABEL_27;
  }
  if ( !v3 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    *((_QWORD *)v7 + 480) = CurrentProcessWin32Process;
    *((_QWORD *)v7 + 479) = a2;
  }
  v33 = *(HPALETTE *)(*(_QWORD *)a1 + 80LL);
  if ( v33 == a2 )
  {
LABEL_27:
    if ( !v10 )
      goto LABEL_41;
    goto LABEL_28;
  }
  v66 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  v56 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
  if ( v10 != *(int **)(v56 + 6000) )
  {
    v57 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( *((_QWORD *)v10 + 6) != v57 )
    {
      if ( v10[14] )
      {
        v33 = 0LL;
        goto LABEL_28;
      }
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v65);
      *((_QWORD *)v10 + 6) = v57;
    }
  }
  GreAcquireHmgrSemaphore(v56);
  XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v66, a1);
  *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
  *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v10;
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  *(_DWORD *)(v58 + 152) |= 0xFu;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) && v10 != *(int **)(*(_QWORD *)(SGDGetSessionState(v58) + 24) + 6000LL) )
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 176LL) = a2;
  XEPALOBJ::vAddToList((XEPALOBJ *)&v65, a1);
  GreReleaseHmgrSemaphore(v59);
LABEL_28:
  v34 = *v10;
  v35 = *v10;
  v63 = 0LL;
  v64 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v63, (unsigned __int16)v34 | (v35 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v64 )
    goto LABEL_41;
  v36 = (_DWORD *)v63;
  v37 = *(_BYTE *)(v63 + 14);
  if ( v37 == 5 )
  {
    v61 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v10 + 85);
    v62 = 0LL;
  }
  else
  {
    if ( v37 != 16 )
      goto LABEL_31;
    v61 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v10 + 17);
    v62 = 2LL;
  }
  TrackObjectReferenceDecrement(v62, v61);
LABEL_31:
  --v10[2];
  v38 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
  v39 = *(_QWORD *)(v38 + 8008);
  v40 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v38) + 24) + 8008LL);
  v41 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v40, *v36 & 0xFFFFFF);
  v42 = *(_QWORD *)(v40 + 16);
  v43 = v41;
  v44 = *(_DWORD *)(v42 + 2056);
  if ( v41 < v44 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
  {
    if ( v41 >= v44 )
    {
      v45 = *(_QWORD *)(v42 + 8LL * (((v41 - v44) >> 16) + 1) + 8);
      v43 = -65536 * ((v41 - v44) >> 16) - v44 + v41;
    }
    else
    {
      v45 = *(_QWORD *)(v42 + 8);
    }
    if ( (unsigned int)v43 < *(_DWORD *)(v45 + 20) )
      v9 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * (v43 >> 8)) + 16LL * (unsigned __int8)v43 + 8);
  }
  v46 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v39, (unsigned __int16)*v9 | (*v9 >> 8) & 0xFF0000u);
  v47 = *(_QWORD *)(v39 + 16);
  v48 = v46;
  v49 = *(_DWORD *)(v47 + 2056);
  if ( v46 < v49 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16) )
  {
    if ( v46 >= v49 )
    {
      v50 = *(_QWORD *)(v47 + 8LL * (((v46 - v49) >> 16) + 1) + 8);
      v48 = -65536 * ((v46 - v49) >> 16) - v49 + v46;
    }
    else
    {
      v50 = *(_QWORD *)(v47 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v50 + 24 * v48 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v50 + 24) + 8 * (v48 >> 8)) + 16LL * (unsigned __int8)v48,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
LABEL_41:
  if ( v8 )
  {
    v51 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
    if ( *(_DWORD *)(v51 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v51, (unsigned int)&LockRelease, v52, (_DWORD)v8, (__int64)L"hsem");
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion(v54, v53);
  }
  return v33;
}
