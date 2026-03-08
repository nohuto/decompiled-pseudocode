/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440
 * Callers:
 *     HmgUnlock @ 0x1C0009E98 (HmgUnlock.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0019970 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001BBAC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C2B0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C001D290 (HmgLockAndModifyHandleType.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgMarkUndeletable @ 0x1C003EA00 (HmgMarkUndeletable.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00438B0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     HmgReplaceObject @ 0x1C0045470 (HmgReplaceObject.c)
 *     HmgRemoveObject @ 0x1C0045C70 (HmgRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0049850 (DEC_SHARE_REF_CNT.c)
 *     HmgLock @ 0x1C0049C00 (HmgLock.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C004AED0 (HmgLockEx.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetBounds @ 0x1C004D5B0 (GreGetBounds.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004E8F0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     bDeleteRegion @ 0x1C0053FA0 (bDeleteRegion.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     HmgFree @ 0x1C0059850 (HmgFree.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0093290 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C009B410 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgShareLock @ 0x1C00A3060 (HmgShareLock.c)
 *     HmgMarkLazyDelete @ 0x1C00A3410 (HmgMarkLazyDelete.c)
 *     GreSetBitmapOwner @ 0x1C00A5460 (GreSetBitmapOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00A7AF0 (HmgShareUnlockRemoveObject.c)
 *     HmgLockIgnoreOwner @ 0x1C00A93E0 (HmgLockIgnoreOwner.c)
 *     HmgMarkDeletable @ 0x1C00AD0E0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00BC754 (HmgShareLockIgnoreStockBit.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEB84 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEC7C (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DED6C (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     GreSetSolidBrushLight @ 0x1C017E620 (GreSetSolidBrushLight.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0185B1C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgMarkUnXferable @ 0x1C0186000 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C01860C0 (HmgMarkXferable.c)
 *     HmgSwapLockedHandleContents @ 0x1C0186370 (HmgSwapLockedHandleContents.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198EC0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198FBC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C004A620 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *v2; // rsi
  __int64 v3; // rcx
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // r10
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r9d
  GdiHandleEntryTable *v15; // rcx

  v2 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
  v4 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 8008LL);
  v5 = GdiHandleManager::DecodeIndex(v4, **(_DWORD **)this & 0xFFFFFF);
  v6 = *((_QWORD *)v4 + 2);
  v7 = v5;
  v8 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16)
    || (v5 >= v8
      ? (v9 = *(_QWORD *)(v6 + 8LL * (((v5 - v8) >> 16) + 1) + 8), v7 = -65536 * ((v5 - v8) >> 16) - v8 + v5)
      : (v9 = *(_QWORD *)(v6 + 8)),
        v7 >= *(_DWORD *)(v9 + 20)) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8);
  }
  v11 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)*v10 | (*v10 >> 8) & 0xFF0000);
  v12 = *((_QWORD *)v2 + 2);
  v13 = v11;
  v14 = *(_DWORD *)(v12 + 2056);
  if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v14 )
    {
      v15 = *(GdiHandleEntryTable **)(v12 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
      v13 = -65536 * ((v11 - v14) >> 16) - v14 + v11;
    }
    else
    {
      v15 = *(GdiHandleEntryTable **)(v12 + 8);
    }
    GdiHandleEntryTable::ReleaseEntryLock(v15, v13);
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
