/*
 * XREFs of HmgShareLockEx @ 0x1C0048840
 * Callers:
 *     GreMarkDCUnreadable @ 0x1C0010A28 (GreMarkDCUnreadable.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00274B0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0184A08 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198EC0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198FBC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitICM @ 0x1C031D1E8 (bInitICM.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgShareLockEx(unsigned int a1, char a2, int a3)
{
  __int16 v3; // ebx^2
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ebp
  _DWORD *v8; // r14
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rcx
  GdiHandleManager *v16; // rsi
  GdiHandleManager *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned int v21; // r9d
  __int64 v22; // r8
  _DWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-38h] BYREF
  int v33; // [rsp+38h] [rbp-30h]

  v3 = HIWORD(a1);
  v32 = 0LL;
  v33 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v32, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, a3);
  v7 = v33;
  if ( !v33 )
    goto LABEL_21;
  v8 = (_DWORD *)v32;
  if ( *(_BYTE *)(v32 + 14) == a2 && *(_WORD *)(v32 + 12) == v3 )
  {
    v9 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 8008LL);
    v10 = GdiHandleManager::DecodeIndex(v9, *v8 & 0xFFFFFF);
    v11 = *((_QWORD *)v9 + 2);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 2056);
    v6 = v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16);
    if ( v10 < (unsigned int)v6 )
    {
      if ( v10 >= v13 )
      {
        v6 = ((v10 - v13) >> 16) + 1;
        v14 = *(_QWORD *)(v11 + 8 * v6 + 8);
        v12 = -65536 * ((v10 - v13) >> 16) - v13 + v10;
      }
      else
      {
        v14 = *(_QWORD *)(v11 + 8);
      }
      if ( (unsigned int)v12 < *(_DWORD *)(v14 + 20) )
      {
        v6 = 2LL * (unsigned __int8)v12;
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
      }
    }
    ++*(_DWORD *)(v5 + 8);
    if ( a2 == 5 )
    {
      v30 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 680);
      v31 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_11;
      v30 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 136);
      v31 = 2LL;
    }
    TrackObjectReferenceIncrement(v31, v30);
  }
LABEL_11:
  v15 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  v16 = *(GdiHandleManager **)(v15 + 8008);
  v17 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v15) + 24) + 8008LL);
  v18 = GdiHandleManager::DecodeIndex(v17, *v8 & 0xFFFFFF);
  v19 = *((_QWORD *)v17 + 2);
  v20 = v18;
  v21 = *(_DWORD *)(v19 + 2056);
  if ( v18 >= v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16)
    || (v18 >= v21
      ? (v22 = *(_QWORD *)(v19 + 8LL * (((v18 - v21) >> 16) + 1) + 8), v20 = -65536 * ((v18 - v21) >> 16) - v21 + v18)
      : (v22 = *(_QWORD *)(v19 + 8)),
        (unsigned int)v20 >= *(_DWORD *)(v22 + 20)) )
  {
    v23 = 0LL;
  }
  else
  {
    v23 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
  }
  v24 = GdiHandleManager::DecodeIndex(v16, (unsigned __int16)*v23 | (*v23 >> 8) & 0xFF0000);
  v25 = *((_QWORD *)v16 + 2);
  v26 = v24;
  v27 = *(_DWORD *)(v25 + 2056);
  if ( v24 < v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
  {
    if ( v24 >= v27 )
    {
      v28 = *(_QWORD *)(v25 + 8LL * (((v24 - v27) >> 16) + 1) + 8);
      v26 = -65536 * ((v24 - v27) >> 16) - v27 + v24;
    }
    else
    {
      v28 = *(_QWORD *)(v25 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v28 + 24 * v26 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v26 >> 8)) + 16LL * (unsigned __int8)v26,
      0LL);
    KeLeaveCriticalRegion();
  }
  v7 = 0;
  v33 = 0;
  v32 = 0LL;
  KeLeaveCriticalRegion();
LABEL_21:
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
  return v5;
}
