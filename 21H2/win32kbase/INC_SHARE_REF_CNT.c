/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C0020410
 * Callers:
 *     EngLockSurface @ 0x1C0020170 (EngLockSurface.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00C9214 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00D9094 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0022C00 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  _DWORD *v4; // rdi
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // r8
  _DWORD *v14; // rdx
  unsigned int v15; // eax
  GdiHandleEntryDirectory *v16; // rcx
  unsigned __int8 v17; // r9
  struct GdiHandleEntryTable *v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+38h] [rbp-20h]
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v23; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = *a1;
  v20 = 0LL;
  v21 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)v1 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v21 )
    return;
  v4 = (_DWORD *)v20;
  v5 = *(_BYTE *)(v20 + 14);
  if ( v5 == 5 )
  {
    v6 = *((_QWORD *)a1 + 85);
    v7 = 0LL;
LABEL_4:
    TrackObjectReferenceIncrement(v7, v6);
    goto LABEL_5;
  }
  if ( v5 == 16 )
  {
    v6 = *((_QWORD *)a1 + 17);
    v7 = 2LL;
    goto LABEL_4;
  }
LABEL_5:
  ++a1[2];
  v8 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *v4 & 0xFFFFFF);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16)
    || (v9 >= v12
      ? (v13 = *(_QWORD *)(v10 + 8LL * (((v9 - v12) >> 16) + 1) + 8), v11 = -65536 * ((v9 - v12) >> 16) - v12 + v9)
      : (v13 = *(_QWORD *)(v10 + 8)),
        (unsigned int)v11 >= *(_DWORD *)(v13 + 20)) )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  }
  v15 = GdiHandleManager::DecodeIndex(v8, (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000);
  v16 = (GdiHandleEntryDirectory *)*((_QWORD *)v8 + 2);
  v23 = 0LL;
  v22 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v16, v15, &v23, &v22) )
  {
    v17 = v22;
    v18 = v23;
    v19 = (unsigned __int64)v22 >> 8;
    *(_DWORD *)(*(_QWORD *)v23 + 24LL * v22 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v18 + 3) + 8 * v19) + 16LL * v17, 0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
}
