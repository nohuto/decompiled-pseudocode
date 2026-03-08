/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8
 * Callers:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180003FF0 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000410C (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18001A5C4 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_S.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18001B290 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x18001FB14 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800388A0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180039D40 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1800489A8 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004A570 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180096FCC (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180097A04 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180098AC0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180098E88 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800991A8 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180099E24 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800A4938 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800A9ED0 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x1800AB078 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800ABDE0 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800C312C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800E40D0 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800E4264 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800E47BC (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800E5348 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E7D34 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E7F90 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1800E85A0 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800E9C98 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800EF158 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECL.c)
 *     ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x1800F03F0 (-ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAM.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800F4390 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800F6550 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800F84E4 (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAU.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x1800F9C28 (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1800FAF5C (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800FB1C0 (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTR.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x180100234 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x180101C7C (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x180102848 (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x180102F88 (-ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SE.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18012FA60 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x18012FCC0 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x18020DFB0 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x18020DFE4 (-ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18020E030 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x18020E1D8 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x18020E2A8 (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGI.c)
 *     ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x18020EA08 (-SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x18024EDC4 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1802531A8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802534C0 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  BOOL v5; // r13d
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 | 0x10;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v5 = !(a2 & 1);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v12 = 0LL;
    v13 = (unsigned int)v2;
    do
    {
      v14 = CPtrArrayBase::operator[](a1 + 24, v12);
      if ( v14 != *(_QWORD *)(a1 + 88) )
        (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v14 + 72LL))(v14, v5, a1);
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  *(_BYTE *)(a1 + 96) |= v3;
  v7 = result;
  if ( (v3 & 0xC) != 0 )
  {
    v3 = v3 & 0xFFFFFF73 | 0x80;
    if ( result )
      ++*(_DWORD *)(result + 28);
  }
  if ( (v3 & 2) != 0 )
    v3 = v3 & 0xFFFFFFBD | 0x40;
  v8 = *(_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 103) & 1) != 0 )
  {
    do
    {
      if ( !v8 )
        break;
      result = v3 & *(char *)(v8 + 96);
      if ( (_DWORD)result == v3 )
        break;
      *(_BYTE *)(v8 + 96) |= v3;
      v9 = *(_QWORD *)(v8 + 24);
      if ( (v9 & 2) != 0 )
        v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v9) = v9 & 1;
      v10 = (__int64 *)(v8 + 88);
      if ( (_DWORD)v9 )
      {
        v15 = 0LL;
        v16 = (unsigned int)v9;
        do
        {
          v17 = CPtrArrayBase::operator[](v8 + 24, v15);
          if ( v17 != *v10 )
            (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v17 + 72LL))(v17, v5, v8);
          ++v15;
          --v16;
        }
        while ( v16 );
      }
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 160LL))(v8);
      if ( v11 && v7 != v11 )
      {
        if ( (v3 & 0x80u) != 0 )
          ++*(_DWORD *)(v11 + 24);
        v7 = v11;
      }
      result = v8;
      v8 = *v10;
    }
    while ( (*(_BYTE *)(result + 103) & 1) != 0 );
  }
  return result;
}
