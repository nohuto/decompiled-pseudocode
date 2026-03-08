/*
 * XREFs of HmgShareLockCheckIgnoreStockBit @ 0x1C009B410
 * Callers:
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 *     EngLockSurface @ 0x1C0044C20 (EngLockSurface.c)
 *     EngAssociateSurface @ 0x1C00A3DA0 (EngAssociateSurface.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall HmgShareLockCheckIgnoreStockBit(unsigned int a1, char a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  int v6; // edi
  _DWORD *v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // r8
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
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
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+38h] [rbp-30h]

  v30 = 0LL;
  v31 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v30, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  v6 = v31;
  if ( v31 )
  {
    v7 = (_DWORD *)v30;
    if ( *(_BYTE *)(v30 + 14) == a2 && ((HIWORD(a1) ^ *(unsigned __int16 *)(v30 + 12)) & 0xFFFFFF7F) == 0 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 8008LL);
      v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v8, *v7 & 0xFFFFFF);
      v10 = *(_QWORD *)(v8 + 16);
      v11 = v9;
      v12 = *(_DWORD *)(v10 + 2056);
      v5 = v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
      if ( v9 >= (unsigned int)v5
        || (v9 >= v12
          ? (v5 = ((v9 - v12) >> 16) + 1,
             v13 = *(_QWORD *)(v10 + 8 * v5 + 8),
             v11 = -65536 * ((v9 - v12) >> 16) - v12 + v9)
          : (v13 = *(_QWORD *)(v10 + 8)),
            (unsigned int)v11 >= *(_DWORD *)(v13 + 20)) )
      {
        v4 = 0LL;
      }
      else
      {
        v5 = (unsigned int)v11;
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
      }
      ++*(_DWORD *)(v4 + 8);
      if ( a2 == 5 )
      {
        v14 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 680);
        v5 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
        if ( v14 )
        {
          v5 = *(_QWORD *)(v5 + 8040);
          if ( v5 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v5,
              v14,
              1);
        }
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(
          2LL,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 136));
      }
    }
    v15 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v16 = *(_QWORD *)(v15 + 8008);
    v17 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v15) + 24) + 8008LL);
    v18 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v17, *v7 & 0xFFFFFF);
    v19 = *(_QWORD *)(v17 + 16);
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
    v24 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v16,
            (unsigned __int16)*v23 | (*v23 >> 8) & 0xFF0000u);
    v25 = *(_QWORD *)(v16 + 16);
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
    v6 = 0;
    v31 = 0;
    v30 = 0LL;
    KeLeaveCriticalRegion();
  }
  if ( v6 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
  return v4;
}
