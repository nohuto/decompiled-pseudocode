/*
 * XREFs of EngLockSurface @ 0x1C0044C20
 * Callers:
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C000A360 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C018BB00 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C004A620 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C009B410 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // eax
  SURFOBJ *v4; // rsi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx
  _DWORD *v6; // r14
  char v7; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rbp
  __int64 v9; // rcx
  GdiHandleManager *v10; // rbp
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  _DWORD *v18; // rdx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // rbp
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF
  struct GdiHandleEntryTable *v28; // [rsp+80h] [rbp+18h] BYREF

  v1 = HmgShareLockCheckIgnoreStockBit(hsurf, 5);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  HmgIncrementShareReferenceCount(v1);
  v3 = *(_DWORD *)v2;
  v25 = 0LL;
  v4 = (SURFOBJ *)(v2 + 24);
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 1);
  if ( v26 )
  {
    v6 = (_DWORD *)v25;
    v7 = *(_BYTE *)(v25 + 14);
    if ( v7 == 5 )
    {
      v8 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v2 + 680);
      v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v5) + 24);
      if ( v8 )
      {
        v5 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v5 + 1005);
        if ( v5 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v5, v8, 0);
      }
    }
    else if ( v7 == 16 )
    {
      TrackObjectReferenceDecrement(2LL, *(_QWORD *)(v2 + 136));
    }
    --*(_DWORD *)(v2 + 8);
    v9 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v10 = *(GdiHandleManager **)(v9 + 8008);
    v11 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v9) + 24) + 8008LL);
    v12 = GdiHandleManager::DecodeIndex(v11, *v6 & 0xFFFFFF);
    v13 = *((_QWORD *)v11 + 2);
    v14 = v12;
    v15 = *(_DWORD *)(v13 + 2056);
    if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
      goto LABEL_26;
    if ( v12 >= v15 )
      v16 = ((v12 - v15) >> 16) + 1;
    else
      v16 = 0LL;
    v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
    if ( (_DWORD)v16 )
      v14 = ((1 - (_DWORD)v16) << 16) - v15 + v12;
    if ( (unsigned int)v14 >= *(_DWORD *)(v17 + 20) )
LABEL_26:
      v18 = 0LL;
    else
      v18 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
    v19 = GdiHandleManager::DecodeIndex(v10, (unsigned __int16)*v18 | (*v18 >> 8) & 0xFF0000);
    v20 = GdiHandleManager::DecodeIndex(v10, v19);
    v21 = *((_QWORD *)v10 + 2);
    GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v21, v20, &v28, &v27);
    v22 = *(_DWORD *)(v21 + 2056);
    if ( v19 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    {
      if ( v19 >= v22 )
        v23 = ((v19 - v22) >> 16) + 1;
      else
        v23 = 0LL;
      if ( (_DWORD)v23 )
        v19 += ((1 - (_DWORD)v23) << 16) - v22;
      GdiHandleEntryTable::ReleaseEntryLock(*(GdiHandleEntryTable **)(v21 + 8 * v23 + 8), v19);
    }
    KeLeaveCriticalRegion();
  }
  return v4;
}
