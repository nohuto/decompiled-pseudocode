/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C0042440
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00604A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0060894 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEAX@Z @ 0x1C00D15A0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEA.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1C00D1600 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXP.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00D24A8 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00D24E0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 *     ??1COLORSPACEREF@@QEAA@XZ @ 0x1C00D325C (--1COLORSPACEREF@@QEAA@XZ.c)
 *     bMigrateSurfaceForConversion @ 0x1C015A1C0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C0043470 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0044470 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(struct OBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  int v4; // edi
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  GdiHandleEntryDirectory **v8; // r14
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // rax
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]

  v1 = *(_DWORD *)a1;
  v18 = 0LL;
  v19 = 0;
  v3 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 0, 0, 1);
  v4 = v19;
  if ( v19 )
  {
    v5 = (_DWORD *)v18;
    v3 = *((_DWORD *)a1 + 2);
    TrackHmgrReferenceDecrement(*(_BYTE *)(v18 + 14), a1);
    --*((_DWORD *)a1 + 2);
    v7 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
    v8 = *(GdiHandleEntryDirectory ***)(v7 + 8008);
    v9 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
    v10 = GdiHandleManager::DecodeIndex(v9, *v5 & 0xFFFFFF);
    v11 = *((_QWORD *)v9 + 2);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 2056);
    if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16)
      || (v10 >= v13
        ? (v14 = *(_QWORD *)(v11 + 8LL * (((v10 - v13) >> 16) + 1) + 8),
           v12 = -65536 * (((unsigned int)v12 - v13) >> 16) - v13 + (unsigned int)v12)
        : (v14 = *(_QWORD *)(v11 + 8)),
          (unsigned int)v12 >= *(_DWORD *)(v14 + 20)) )
    {
      v15 = 0LL;
    }
    else
    {
      v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
    }
    v16 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v8, (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000);
    GdiHandleEntryDirectory::ReleaseEntryLock(v8[2], v16);
    v4 = 0;
    v19 = 0;
    v18 = 0LL;
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  return v3;
}
