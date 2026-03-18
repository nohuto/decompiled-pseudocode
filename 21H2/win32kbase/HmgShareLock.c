/*
 * XREFs of HmgShareLock @ 0x1C0021AA0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB8C8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBAC4 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBBCC (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLock(unsigned int a1, char a2)
{
  _DWORD *v3; // r14
  __int16 v4; // ebx^2
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // r8
  GdiHandleManager *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned int v22; // r9d
  __int64 v23; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+38h] [rbp-30h]

  v3 = 0LL;
  v4 = HIWORD(a1);
  v27 = 0LL;
  v28 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v28 )
    return v5;
  v6 = (_DWORD *)v27;
  if ( *(_BYTE *)(v27 + 14) == a2 && *(_WORD *)(v27 + 12) == v4 )
  {
    v7 = gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v27 & 0xFFFFFF);
    v9 = *((_QWORD *)v7 + 2);
    v10 = v8;
    v11 = *(_DWORD *)(v9 + 2056);
    if ( v8 < v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      if ( v8 >= v11 )
      {
        v12 = *(_QWORD *)(v9 + 8LL * (((v8 - v11) >> 16) + 1) + 8);
        v10 = -65536 * ((v8 - v11) >> 16) - v11 + v8;
      }
      else
      {
        v12 = *(_QWORD *)(v9 + 8);
      }
      if ( (unsigned int)v10 < *(_DWORD *)(v12 + 20) )
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
    }
    ++*(_DWORD *)(v5 + 8);
    if ( a2 == 5 )
    {
      v25 = *(_QWORD *)(v5 + 680);
      v26 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_11;
      v25 = *(_QWORD *)(v5 + 136);
      v26 = 2LL;
    }
    TrackObjectReferenceIncrement(v26, v25);
  }
LABEL_11:
  v13 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex(gpHandleManager, *v6 & 0xFFFFFF);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    if ( v14 >= v17 )
    {
      v18 = *(_QWORD *)(v15 + 8LL * (((v14 - v17) >> 16) + 1) + 8);
      v16 = -65536 * ((v14 - v17) >> 16) - v17 + v14;
    }
    else
    {
      v18 = *(_QWORD *)(v15 + 8);
    }
    if ( (unsigned int)v16 < *(_DWORD *)(v18 + 20) )
      v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  }
  v19 = GdiHandleManager::DecodeIndex(v13, (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000);
  v20 = *((_QWORD *)v13 + 2);
  v21 = v19;
  v22 = *(_DWORD *)(v20 + 2056);
  if ( v19 < v22 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
  {
    if ( v19 >= v22 )
    {
      v23 = *(_QWORD *)(v20 + 8LL * (((v19 - v22) >> 16) + 1) + 8);
      v21 = -65536 * ((v19 - v22) >> 16) - v22 + v19;
    }
    else
    {
      v23 = *(_QWORD *)(v20 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v23 + 24 * v21 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v21 >> 8)) + 16LL * (unsigned __int8)v21,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v5;
}
