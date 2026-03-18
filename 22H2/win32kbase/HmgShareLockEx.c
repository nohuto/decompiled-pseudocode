/*
 * XREFs of HmgShareLockEx @ 0x1C0041D30
 * Callers:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0062100 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreMarkDCUnreadable @ 0x1C00C2748 (GreMarkDCUnreadable.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0157DA8 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C170 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitICM @ 0x1C02DDB24 (bInitICM.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgShareLockEx(unsigned int a1, char a2, int a3)
{
  __int16 v3; // ebx^2
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ebp
  _DWORD *v9; // r14
  GdiHandleManager *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // rcx
  GdiHandleManager *v17; // rsi
  GdiHandleManager *v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned int v22; // r9d
  __int64 v23; // r8
  _DWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+38h] [rbp-30h]

  v3 = HIWORD(a1);
  v30 = 0LL;
  v31 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v30, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, a3);
  v7 = v31;
  if ( v31 )
  {
    v9 = (_DWORD *)v30;
    if ( *(_BYTE *)(v30 + 14) == a2 && *(_WORD *)(v30 + 12) == v3 )
    {
      v10 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 8008LL);
      v11 = GdiHandleManager::DecodeIndex(v10, *v9 & 0xFFFFFF);
      v12 = *((_QWORD *)v10 + 2);
      v13 = v11;
      v14 = *(_DWORD *)(v12 + 2056);
      v6 = v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16);
      if ( v11 < (unsigned int)v6 )
      {
        if ( v11 >= v14 )
        {
          v6 = ((v11 - v14) >> 16) + 1;
          v15 = *(_QWORD *)(v12 + 8 * v6 + 8);
          v13 = -65536 * ((v11 - v14) >> 16) - v14 + v11;
        }
        else
        {
          v15 = *(_QWORD *)(v12 + 8);
        }
        if ( (unsigned int)v13 < *(_DWORD *)(v15 + 20) )
        {
          v6 = 2LL * (unsigned __int8)v13;
          v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
        }
      }
      ++*(_DWORD *)(v5 + 8);
      if ( a2 == 5 )
      {
        TrackObjectReferenceIncrement(
          0LL,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 680));
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(
          2LL,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 136));
      }
    }
    v16 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
    v17 = *(GdiHandleManager **)(v16 + 8008);
    v18 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v16) + 24) + 8008LL);
    v19 = GdiHandleManager::DecodeIndex(v18, *v9 & 0xFFFFFF);
    v20 = *((_QWORD *)v18 + 2);
    v21 = v19;
    v22 = *(_DWORD *)(v20 + 2056);
    if ( v19 >= v22 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16)
      || (v19 >= v22
        ? (v23 = *(_QWORD *)(v20 + 8LL * (((v19 - v22) >> 16) + 1) + 8), v21 = -65536 * ((v19 - v22) >> 16) - v22 + v19)
        : (v23 = *(_QWORD *)(v20 + 8)),
          (unsigned int)v21 >= *(_DWORD *)(v23 + 20)) )
    {
      v24 = 0LL;
    }
    else
    {
      v24 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v21 >> 8)) + 16LL * (unsigned __int8)v21 + 8);
    }
    v25 = GdiHandleManager::DecodeIndex(v17, (unsigned __int16)*v24 | (*v24 >> 8) & 0xFF0000);
    v26 = *((_QWORD *)v17 + 2);
    v27 = v25;
    v28 = *(_DWORD *)(v26 + 2056);
    if ( v25 < v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
    {
      if ( v25 >= v28 )
      {
        v29 = *(_QWORD *)(v26 + 8LL * (((v25 - v28) >> 16) + 1) + 8);
        v27 = -65536 * ((v25 - v28) >> 16) - v28 + v25;
      }
      else
      {
        v29 = *(_QWORD *)(v26 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v29 + 24 * v27 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v27 >> 8)) + 16LL * (unsigned __int8)v27,
        0LL);
      KeLeaveCriticalRegion();
    }
    v7 = 0;
    v31 = 0;
    v30 = 0LL;
    KeLeaveCriticalRegion();
  }
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
  return v5;
}
