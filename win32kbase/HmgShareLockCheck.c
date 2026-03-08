/*
 * XREFs of HmgShareLockCheck @ 0x1C0049E60
 * Callers:
 *     GreDCSelectPen @ 0x1C0005440 (GreDCSelectPen.c)
 *     GreCreatePatternBrushInternal @ 0x1C001A060 (GreCreatePatternBrushInternal.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001BD04 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C001D614 (GreSetBitmapOwnerEx.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00274B0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002D3CC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreDCSelectBrush @ 0x1C00457E0 (GreDCSelectBrush.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C00577F0 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C006DCE4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     GreSetBitmapOwner @ 0x1C00A5460 (GreSetBitmapOwner.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 *     bDeletePalette @ 0x1C00CB0A0 (bDeletePalette.c)
 *     _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00DE6A0 (_lambda_c42d5e148a0c8c495193b965072d0c08_--_lambda_invoker_cdecl_.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x1C00DE830 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C017E290 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C017E448 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0186AB8 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bDfbSurfacesMigrated @ 0x1C0186C20 (bDfbSurfacesMigrated.c)
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     bInitBRUSHOBJ @ 0x1C031D4F4 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C031FEE0 (bInitBMOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall HmgShareLockCheck(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rsi
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rcx
  GdiHandleManager *v14; // rbp
  GdiHandleManager *v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // r8
  _DWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v28; // rbx
  __int64 v29; // [rsp+30h] [rbp-38h] BYREF
  int v30; // [rsp+38h] [rbp-30h]

  v3 = HIWORD(a1);
  v29 = 0LL;
  v30 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v30 )
  {
    v6 = (_DWORD *)v29;
    if ( *(_BYTE *)(v29 + 14) == a2 && *(_WORD *)(v29 + 12) == v3 )
    {
      v7 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 8008LL);
      v8 = GdiHandleManager::DecodeIndex(v7, *v6 & 0xFFFFFF);
      v9 = *((_QWORD *)v7 + 2);
      v10 = v8;
      v11 = *(_DWORD *)(v9 + 2056);
      v5 = v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16);
      if ( v8 < (unsigned int)v5 )
      {
        if ( v8 >= v11 )
        {
          v5 = ((v8 - v11) >> 16) + 1;
          v12 = *(_QWORD *)(v9 + 8 * v5 + 8);
          v10 = -65536 * ((v8 - v11) >> 16) - v11 + v8;
        }
        else
        {
          v12 = *(_QWORD *)(v9 + 8);
        }
        if ( (unsigned int)v10 < *(_DWORD *)(v12 + 20) )
        {
          v5 = 2LL * (unsigned __int8)v10;
          v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
        }
      }
      ++*(_DWORD *)(v4 + 8);
      if ( a2 == 5 )
      {
        v28 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 680);
        v5 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
        if ( v28 )
        {
          v5 = *(_QWORD *)(v5 + 8040);
          if ( v5 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v5,
              v28,
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
    v13 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v14 = *(GdiHandleManager **)(v13 + 8008);
    v15 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v13) + 24) + 8008LL);
    v16 = GdiHandleManager::DecodeIndex(v15, *v6 & 0xFFFFFF);
    v17 = *((_QWORD *)v15 + 2);
    v18 = v16;
    v19 = *(_DWORD *)(v17 + 2056);
    if ( v16 >= v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16)
      || (v16 >= v19
        ? (v20 = *(_QWORD *)(v17 + 8LL * (((v16 - v19) >> 16) + 1) + 8), v18 = -65536 * ((v16 - v19) >> 16) - v19 + v16)
        : (v20 = *(_QWORD *)(v17 + 8)),
          (unsigned int)v18 >= *(_DWORD *)(v20 + 20)) )
    {
      v21 = 0LL;
    }
    else
    {
      v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
    }
    v22 = GdiHandleManager::DecodeIndex(v14, (unsigned __int16)*v21 | (*v21 >> 8) & 0xFF0000);
    v23 = *((_QWORD *)v14 + 2);
    v24 = v22;
    v25 = *(_DWORD *)(v23 + 2056);
    if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    {
      if ( v22 >= v25 )
      {
        v26 = *(_QWORD *)(v23 + 8LL * (((v22 - v25) >> 16) + 1) + 8);
        v24 = -65536 * ((v22 - v25) >> 16) - v25 + v22;
      }
      else
      {
        v26 = *(_QWORD *)(v23 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v26 + 24 * v24 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24,
        0LL);
      KeLeaveCriticalRegion();
    }
    v30 = 0;
    v29 = 0LL;
    KeLeaveCriticalRegion();
  }
  return v4;
}
