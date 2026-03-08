/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C0047B70
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C017F048 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C004A580 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(unsigned int *a1)
{
  unsigned int v1; // eax
  _DWORD *v2; // rbx
  unsigned int v3; // edx
  __int64 v5; // rcx
  _DWORD *v6; // rsi
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  GdiHandleEntryDirectory **v11; // rbp
  GdiHandleManager *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1;
  v19 = 0LL;
  v20 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v19, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v20 )
    return;
  v6 = (_DWORD *)v19;
  v7 = *(_BYTE *)(v19 + 14);
  if ( v7 == 5 )
  {
    v8 = *((_QWORD *)a1 + 85);
    v9 = 0LL;
  }
  else
  {
    if ( v7 != 16 )
      goto LABEL_5;
    v8 = *((_QWORD *)a1 + 17);
    v9 = 2LL;
  }
  TrackObjectReferenceIncrement(v9, v8);
LABEL_5:
  ++a1[2];
  v10 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  v11 = *(GdiHandleEntryDirectory ***)(v10 + 8008);
  v12 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v10) + 24) + 8008LL);
  v13 = GdiHandleManager::DecodeIndex(v12, *v6 & 0xFFFFFF);
  v14 = *((_QWORD *)v12 + 2);
  v15 = v13;
  v16 = *(_DWORD *)(v14 + 2056);
  if ( v13 < v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
  {
    if ( v13 >= v16 )
    {
      v17 = *(_QWORD *)(v14 + 8LL * (((v13 - v16) >> 16) + 1) + 8);
      v15 = -65536 * ((v13 - v16) >> 16) - v16 + v13;
    }
    else
    {
      v17 = *(_QWORD *)(v14 + 8);
    }
    if ( (unsigned int)v15 < *(_DWORD *)(v17 + 20) )
      v2 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
  }
  v18 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v11, (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000);
  GdiHandleEntryDirectory::ReleaseEntryLock(v11[2], v18);
  KeLeaveCriticalRegion();
}
