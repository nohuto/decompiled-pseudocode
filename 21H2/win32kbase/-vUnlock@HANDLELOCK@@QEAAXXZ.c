/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgReplaceObject @ 0x1C001EB90 (HmgReplaceObject.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0062FA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C0063C80 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C00645F0 (HmgLockAndModifyHandleType.c)
 *     HmgMarkLazyDelete @ 0x1C0088DC0 (HmgMarkLazyDelete.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgLockIgnoreOwner @ 0x1C008F1A0 (HmgLockIgnoreOwner.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00979E0 (HmgShareUnlockRemoveObject.c)
 *     GreSetSolidBrushLight @ 0x1C00989A0 (GreSetSolidBrushLight.c)
 *     HmgMarkDeletable @ 0x1C0099BD0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AE0E0 (HmgShareLockIgnoreStockBit.c)
 *     HmgUnlock @ 0x1C00B05A8 (HmgUnlock.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00CB950 (HmgIncrementShareReferenceCount.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C00CC094 (--1UMPDREF@@QEAA@XZ.c)
 *     HmgSwapLockedHandleContents @ 0x1C00CCC50 (HmgSwapLockedHandleContents.c)
 *     HmgMarkUnXferable @ 0x1C00CD290 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00CD350 (HmgMarkXferable.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB8C8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBAC4 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBBCC (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C016BE10 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0022C00 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rsi
  _DWORD *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // r9d
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v4 = *((_QWORD *)v2 + 2);
  v11 = 0LL;
  v10 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v4, v3, &v11, &v10)
    && v10 < *((_DWORD *)v11 + 5) )
  {
    v5 = *(_DWORD **)(*(_QWORD *)(**((_QWORD **)v11 + 3) + 8 * ((unsigned __int64)v10 >> 8))
                    + 16LL * (unsigned __int8)v10
                    + 8);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)*v5 | (*v5 >> 8) & 0xFF0000);
  v7 = *(_DWORD *)(v4 + 2056);
  v8 = v6;
  if ( v6 < v7 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    if ( v6 >= v7 )
    {
      v9 = *(_QWORD *)(v4 + 8LL * (((v6 - v7) >> 16) + 1) + 8);
      v8 = -65536 * ((v6 - v7) >> 16) - v7 + v6;
    }
    else
    {
      v9 = *(_QWORD *)(v4 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v9 + 24 * v8 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
