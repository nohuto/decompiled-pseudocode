/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0
 * Callers:
 *     NtGdiGetPixel @ 0x1C00054A0 (NtGdiGetPixel.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0007488 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0008058 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetBoundsRect @ 0x1C0009698 (GreGetBoundsRect.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C0013394 (GreCreateBitmapFromDxSurface.c)
 *     ?GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0025810 (-GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00271A0 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     NtGdiGetDCObject @ 0x1C004CC30 (NtGdiGetDCObject.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C004D014 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C004D240 (GreExtSelectClipRgnInternal.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005C120 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C007FD18 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreDrawStream @ 0x1C0082A90 (GreDrawStream.c)
 *     GreRectVisible @ 0x1C0086F6C (GreRectVisible.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     GreGetAppClipBox @ 0x1C008C244 (GreGetAppClipBox.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00CCD30 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreGetDIBColorTable @ 0x1C00CF020 (GreGetDIBColorTable.c)
 *     GreRealizeDefaultPalette @ 0x1C00FA71C (GreRealizeDefaultPalette.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026AB80 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C026ADA0 (GreWindowResizeComplete.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0270FC8 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027790C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?GreDrawEscape@@YAHPEAUHDC__@@HAEBV?$umptr_r@D@@@Z @ 0x1C0277ED8 (-GreDrawEscape@@YAHPEAUHDC__@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279D88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreDeleteWnd @ 0x1C028A9D0 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029CEC0 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029D0EC (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A6870 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A6AD0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C02A6DE0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02A6FC0 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A7240 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A7460 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A76B0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C02A78E0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C02A7B60 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A7E30 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C02A8100 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A8400 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A8660 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A8890 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A8AF0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02AABB4 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02AB5A0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02ABB30 (NtGdiFrameRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1C02AC3F0 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1C02AC640 (NtGdiPtVisible.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02ACE70 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02D03B0 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C02D18C8 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     GreRealizePalette @ 0x1C02D3600 (GreRealizePalette.c)
 *     GreSetDIBColorTable @ 0x1C02D3CA0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02D3F08 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02D47D0 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D8C50 (NtGdiSetPixel.c)
 *     ?GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D9630 (-GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02D9CB8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02D9DF4 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02D9FD0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0050D28 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0052680 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5A50 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A8DD8 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r8
  SURFACE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rdi
  struct SURFACE *v21; // rax
  __int64 v22; // rbp
  struct SURFACE *v23; // rbx
  Gre::Base *v24; // rcx
  struct Gre::Base::SESSION_GLOBALS *v25; // rbx
  char v26; // di
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[4]; // [rsp+30h] [rbp-38h] BYREF
  int v30; // [rsp+34h] [rbp-34h] BYREF
  DC *v31[3]; // [rsp+38h] [rbp-30h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 && *((_BYTE *)this + 49) )
  {
    v7 = *((_DWORD *)this + 6);
    v8 = *(_QWORD *)(v1 + 48);
    if ( (v7 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 49) )
      {
        if ( (v7 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v7 = *((_DWORD *)this + 6);
        }
        if ( (v7 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x2000u;
          v7 = *((_DWORD *)this + 6);
        }
        v9 = *((_QWORD *)this + 4);
        if ( v9 && *((_BYTE *)this + 49) && (v7 & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(v9 + 44) & 1) == 0 )
          {
            v10 = *(SURFACE **)(v9 + 496);
            if ( v10 )
              SURFACE::bUnMap(v10, this, (struct DC *)v9);
          }
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~1u;
          v11 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v11 + 36) & 0x4000) != 0 && *(_QWORD *)(v11 + 472) && *(_DWORD *)(v11 + 488) )
            GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v8 + 2528));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    v12 = *((_QWORD *)this + 4);
    if ( v12 && *((_BYTE *)this + 48) )
    {
      *(_DWORD *)(v12 + 40) &= ~2u;
      *((_BYTE *)this + 48) = 0;
    }
    v13 = *((_QWORD *)this + 4);
    if ( v13 )
    {
      if ( *((_DWORD *)this + 10) && (*(_DWORD *)(v13 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKOBJ *)((char *)this + 32));
        *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~2u;
        *((_DWORD *)this + 10) = 0;
      }
      v14 = (__int64 *)*((_QWORD *)this + 4);
      v15 = *((unsigned int *)this + 11);
      v30 = 0;
      v16 = *v14;
      HmgDecrementExclusiveReferenceCountEx(v14, v15, &v30);
      if ( v30 )
        GrepDeleteDC(v16, 0x2000000LL);
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = *((_DWORD *)this + 6);
  if ( (v3 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v5 = *ThreadWin32Thread;
      if ( v5 )
      {
        *(_QWORD *)(v5 + 320) = 0LL;
        *(_QWORD *)(v5 + 312) = 0LL;
      }
    }
  }
  else if ( (v3 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 8) != 0 )
    *((_DWORD *)this + 6) = v6 & 0xFFFFFFF7;
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 8) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v31, *((HDC *)this + 9));
    LOBYTE(v17) = 5;
    v18 = HmgShareLock(*((_QWORD *)this + 7), v17);
    LOBYTE(v19) = 5;
    v20 = (__int64 *)v18;
    v21 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 8), v19);
    v22 = *v20;
    v23 = v21;
    DC::pSurface(v31[0], v21);
    DEC_SHARE_REF_CNT(v20);
    DEC_SHARE_REF_CNT(v23);
    GreDereferenceObject(v22, 1LL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    if ( this != (DEVLOCKOBJ *)-28LL )
    {
      v24 = v31[0];
      *((_DWORD *)v31[0] + 9) |= *((_DWORD *)this + 7);
    }
    v25 = Gre::Base::Globals(v24);
    if ( (*((_DWORD *)v31[0] + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v25 + 15)) )
      {
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v25 + 15));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v25 + 15));
        v26 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v29);
      v27 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v27 )
        SURFACE::bDeleteSurface(v27, 0LL, 1LL);
      *((_QWORD *)v31[0] + 63) = 0LL;
      DC::vClearRendering(v31[0]);
      *((_QWORD *)this + 8) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v29);
      if ( v26 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v25 + 15));
      }
    }
    else
    {
      v28 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v28 )
        SURFACE::bDeleteSurface(v28, 0LL, 1LL);
      *((_QWORD *)v31[0] + 63) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v25 + 10));
    if ( v31[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v31);
  }
}
