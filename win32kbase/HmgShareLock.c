/*
 * XREFs of HmgShareLock @ 0x1C00A3060
 * Callers:
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEB84 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEC7C (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DED6C (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C004ABC0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgShareLock(unsigned int a1, char a2)
{
  __int64 v3; // rsi
  __int16 v4; // ebx^2
  __int64 v5; // rcx
  _DWORD *v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rcx
  GdiHandleManager *v14; // rbp
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rax
  struct OBJECT *v22; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-28h] BYREF
  int v27; // [rsp+38h] [rbp-20h]

  v3 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v4 = HIWORD(a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v27 )
    return v3;
  v6 = (_DWORD *)v26;
  if ( *(_BYTE *)(v26 + 14) == a2 && *(_WORD *)(v26 + 12) == v4 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 8008LL);
    v8 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v7, *v6 & 0xFFFFFF);
    v9 = *(_QWORD *)(v7 + 16);
    v10 = v8;
    v11 = *(_DWORD *)(v9 + 2056);
    v5 = v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16);
    if ( v8 < (unsigned int)v5 )
    {
      if ( v8 >= v11 )
        v5 = ((v8 - v11) >> 16) + 1;
      else
        v5 = 0LL;
      v12 = *(_QWORD *)(v9 + 8 * v5 + 8);
      if ( (_DWORD)v5 )
        v10 = ((1 - (_DWORD)v5) << 16) - v11 + v8;
      if ( (unsigned int)v10 < *(_DWORD *)(v12 + 20) )
      {
        v5 = 2LL * (unsigned __int8)v10;
        v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
      }
    }
    ++*(_DWORD *)(v3 + 8);
    if ( a2 == 5 )
    {
      v24 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v3 + 680);
      v25 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_13;
      v24 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v3 + 136);
      v25 = 2LL;
    }
    TrackObjectReferenceIncrement(v25, v24);
  }
LABEL_13:
  v13 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  v14 = *(GdiHandleManager **)(v13 + 8008);
  v15 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 24) + 8008LL);
  v16 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v15, *v6 & 0xFFFFFF);
  v17 = *(_QWORD *)(v15 + 16);
  v18 = v16;
  v19 = *(_DWORD *)(v17 + 2056);
  if ( v16 >= v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_24;
  v20 = v16 >= v19 ? ((v16 - v19) >> 16) + 1 : 0LL;
  v21 = *(_QWORD *)(v17 + 8 * v20 + 8);
  if ( (_DWORD)v20 )
    v18 = ((1 - (_DWORD)v20) << 16) - v19 + (unsigned int)v18;
  if ( (unsigned int)v18 >= *(_DWORD *)(v21 + 20) )
LABEL_24:
    v22 = 0LL;
  else
    v22 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
  GdiHandleManager::ReleaseEntryLock(v14, v22);
  v26 = 0LL;
  v27 = 0;
  KeLeaveCriticalRegion();
  return v3;
}
