/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C003C990 (GreDrawStream.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     NtGdiExtSelectClipRgn @ 0x1C0041BA0 (NtGdiExtSelectClipRgn.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     NtGdiGetPixel @ 0x1C008A200 (NtGdiGetPixel.c)
 *     GreGetDIBColorTable @ 0x1C008A670 (GreGetDIBColorTable.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     GreExtTextOutRect @ 0x1C008AD4C (GreExtTextOutRect.c)
 *     GreGetBoundsRect @ 0x1C008B388 (GreGetBoundsRect.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0090A60 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00CBDF4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GrePolyTextOutW @ 0x1C00E3570 (GrePolyTextOutW.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00E3818 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00EDE70 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0113FC8 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreRealizeDefaultPalette @ 0x1C0116400 (GreRealizeDefaultPalette.c)
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0138E34 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C013E220 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     GreRealizePalette @ 0x1C01470CC (GreRealizePalette.c)
 *     GreExtSelectClipRgnInternal @ 0x1C014CBF4 (GreExtSelectClipRgnInternal.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026DCB8 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C026E008 (GreWindowResizeComplete.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C02735E0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C02792DC (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279E28 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C027A3F4 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C02844B0 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02918A8 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0291ACC (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029A060 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029A2C0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C029A5D0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029A7B0 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029AA30 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029AC40 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C029AE90 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C029B0C0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029B340 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029B610 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C029B8E0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029BBE0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029BE30 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029C060 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029C2B0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029F870 (GreCreateBitmapFromDxSurface.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B4434 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C02B6140 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02B6390 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B6B20 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B8670 (NtGdiExtFloodFill.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02BB108 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02BB240 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02BB3F0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0037530 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00F4808 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C015D9D8 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0299B94 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029C55C (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  HSURF v20; // rbx
  char v21; // bl
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-90h] BYREF
  HSURF *v26; // [rsp+58h] [rbp-70h]
  DC *v27[6]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v28[32]; // [rsp+90h] [rbp-38h] BYREF
  struct SURFACE *v29; // [rsp+B0h] [rbp-18h]

  v1 = *((_QWORD *)this + 4);
  if ( v1 && *((_BYTE *)this + 81) )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_QWORD *)(v1 + 48);
    if ( (v3 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 81) )
      {
        if ( (v3 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v3 = *((_DWORD *)this + 6);
        }
        if ( (v3 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x2000u;
          v3 = *((_DWORD *)this + 6);
        }
        v5 = *((_QWORD *)this + 4);
        if ( v5 && *((_BYTE *)this + 81) && (v3 & 0x1000) != 0 )
        {
          v6 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v5 + 44) & 1) == 0 && *(_QWORD *)(v5 + 496) )
          {
            SURFACE::bUnMap(*(SURFACE **)(v5 + 496), this, (struct DC *)v5);
            v6 = *((_QWORD *)this + 4);
          }
          *(_DWORD *)(v6 + 44) &= ~1u;
          v7 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v7 + 36) & 0x4000) != 0 && *(_QWORD *)(v7 + 472) && *(_DWORD *)(v7 + 488) )
            GreUpdateSpriteDevLockEnd((HDC **)this + 4, *((_DWORD *)this + 6) & 0x400000);
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v4 + 2528));
      }
      v8 = *((_QWORD *)this + 4);
      if ( v8 && *((_BYTE *)this + 81) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(v8 + 36) & 0x200) != 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
        if ( !*((_QWORD *)this + 11) )
          DC::vClearRendering(*((DC **)this + 4));
        if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
            *(_DWORD *)(ThreadWin32Thread + 328) &= ~1u;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
    }
    v10 = *((_QWORD *)this + 4);
    if ( v10 )
    {
      if ( !*((_BYTE *)this + 80) || (*(_DWORD *)(v10 + 40) &= ~2u, *((_BYTE *)this + 80) = 0, *((_QWORD *)this + 4)) )
        XDCOBJ::vUnlockFast((DEVLOCKOBJ *)((char *)this + 32));
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  v11 = *((_DWORD *)this + 6);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
    {
      v13 = *v12;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 320) = 0LL;
        *(_QWORD *)(v13 + 312) = 0LL;
      }
    }
  }
  else if ( (v11 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v14 = *((_DWORD *)this + 6);
  if ( (v14 & 8) != 0 )
    *((_DWORD *)this + 6) = v14 & 0xFFFFFFF7;
  v15 = *((_QWORD *)this + 1);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v15);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 12) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v27, *((HDC *)this + 13));
    SURFREF::SURFREF((SURFREF *)v25);
    SURFREF::SURFREF((SURFREF *)v28);
    LOBYTE(v16) = 5;
    v17 = HmgShareLock(*((_QWORD *)this + 11), v16);
    v18 = *((_QWORD *)this + 12);
    LOBYTE(v19) = 5;
    v26 = (HSURF *)v17;
    v29 = (struct SURFACE *)HmgShareLock(v18, v19);
    v20 = *v26;
    DC::pSurface(v27[0], v29);
    DEC_SHARE_REF_CNT(v26);
    v26 = 0LL;
    DEC_SHARE_REF_CNT(v29);
    v29 = 0LL;
    GreDereferenceObject(v20, 1u);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    if ( this != (DEVLOCKOBJ *)-28LL )
      *((_DWORD *)v27[0] + 9) |= *((_DWORD *)this + 7);
    if ( (*((_DWORD *)v27[0] + 9) & 0x200) != 0 )
    {
      v21 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v21 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v24);
      v22 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 12), 0LL, 0LL, 0LL, 5);
      if ( v22 )
        SURFACE::bDeleteSurface(v22, 0LL, 1LL);
      *((_QWORD *)v27[0] + 63) = 0LL;
      DC::vClearRendering(v27[0]);
      *((_QWORD *)this + 12) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v21 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v23 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 12), 0LL, 0LL, 0LL, 5);
      if ( v23 )
        SURFACE::bDeleteSurface(v23, 0LL, 1LL);
      *((_QWORD *)v27[0] + 63) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v29 )
      DEC_SHARE_REF_CNT(v29);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
    if ( v26 )
      DEC_SHARE_REF_CNT(v26);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
    DCOBJ::~DCOBJ((DCOBJ *)v27);
  }
}
