/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C00483B0
 * Callers:
 *     GreDCSelectPen @ 0x1C0005440 (GreDCSelectPen.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0016D9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C001A060 (GreCreatePatternBrushInternal.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001BD04 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001BD48 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001CC00 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C001D614 (GreSetBitmapOwnerEx.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00274B0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C002B5B0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     EngDeletePalette @ 0x1C002D390 (EngDeletePalette.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C004344C (--1SURFREF@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0046684 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0059910 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C005A1F0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006C084 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C006DCE4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C009DC40 (vDynamicConvertNewSurfaceDCs.c)
 *     EngAssociateSurface @ 0x1C00A3DA0 (EngAssociateSurface.c)
 *     EngModifySurface @ 0x1C00A3E40 (EngModifySurface.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00C1250 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     bDeletePalette @ 0x1C00CB0A0 (bDeletePalette.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00D0240 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00D4158 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C017E290 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C017E448 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0181920 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01828EC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0186AB8 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bDfbSurfacesMigrated @ 0x1C0186C20 (bDfbSurfacesMigrated.c)
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C018B320 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C018C5B0 (--1UMPDREF@@QEAA@XZ.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C018EB0C (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198EC0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198FBC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C019925C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1C031DE4C (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C031FEE0 (bInitBMOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(int *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // edx
  _BOOL8 v7; // rcx
  int v8; // esi
  unsigned __int16 *v10; // rsi
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // r8
  _DWORD *v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // r10
  unsigned __int16 *v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]

  if ( a2 )
    *a2 = 0;
  v4 = *a1;
  v5 = 0;
  v6 = *a1;
  v25 = 0LL;
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)v4 | (v6 >> 8) & 0xFF0000, 0, 0, 1);
  v8 = v26;
  if ( v26 )
  {
    v10 = v25;
    if ( a2 )
    {
      v7 = (*((_BYTE *)v25 + 15) & 8) != 0;
      *a2 = v7;
    }
    v11 = *((_BYTE *)v10 + 14);
    v5 = a1[2];
    if ( v11 == 5 )
    {
      TrackObjectReferenceDecrement(
        0LL,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a1 + 85));
    }
    else if ( v11 == 16 )
    {
      TrackObjectReferenceDecrement(
        2LL,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a1 + 17));
    }
    --a1[2];
    v12 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    v13 = *(_QWORD *)(v12 + 8008);
    v14 = SGDGetSessionState(v12);
    v15 = *(_DWORD *)v10 & 0xFFFFFF;
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 8008LL);
    if ( v15 >= 0x10000 )
    {
      if ( *(_DWORD *)v16 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v16 + 16), *v10, 1)
             + 13) == HIWORD(v15) )
          v15 = (unsigned __int16)v15;
      }
      else
      {
        v15 = *v10;
      }
    }
    v17 = *(_QWORD *)(v16 + 16);
    v18 = *(_DWORD *)(v17 + 2056);
    if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16)
      || (v15 >= v18
        ? (v19 = *(_QWORD *)(v17 + 8LL * (((v15 - v18) >> 16) + 1) + 8), v15 += -65536 * ((v15 - v18) >> 16) - v18)
        : (v19 = *(_QWORD *)(v17 + 8)),
          v15 >= *(_DWORD *)(v19 + 20)) )
    {
      v20 = 0LL;
    }
    else
    {
      v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                       + 16LL * (unsigned __int8)v15
                       + 8);
    }
    v21 = (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000;
    if ( v21 >= 0x10000 )
    {
      if ( *(_DWORD *)v13 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v13 + 16),
                                    (unsigned __int16)*v20,
                                    1)
             + 13) == HIWORD(v21) )
          v21 = (unsigned __int16)v21;
      }
      else
      {
        v21 = (unsigned __int16)*v20;
      }
    }
    v22 = *(_QWORD *)(v13 + 16);
    v23 = *(_DWORD *)(v22 + 2056);
    if ( v21 < v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
    {
      if ( v21 >= v23 )
      {
        v24 = *(_QWORD *)(v22 + 8LL * (((v21 - v23) >> 16) + 1) + 8);
        v21 += -65536 * ((v21 - v23) >> 16) - v23;
      }
      else
      {
        v24 = *(_QWORD *)(v22 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v24 + 24LL * v21 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v21 >> 8)) + 16LL * (unsigned __int8)v21,
        0LL);
      KeLeaveCriticalRegion();
    }
    v8 = 0;
    v26 = 0;
    v25 = 0LL;
    KeLeaveCriticalRegion();
  }
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
  return v5;
}
