/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x18001C1F0 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x18001C850 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180020FD0 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x18003A460 (-GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ.c)
 *     ?ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEVISUAL@@@Z @ 0x1800BA7E8 (-ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SET.c)
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1800BB048 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 *     ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x1800F3950 (-UpdateVisualTree@CCachedVisualImage@@MEAAJXZ.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801E3CBC (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801EDA2C (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801EF540 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021BA90 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?OnVisualChanged@CVisualBitmap@@IEAAXXZ @ 0x18021C038 (-OnVisualChanged@CVisualBitmap@@IEAAXXZ.c)
 *     ?ProcessSetFlatteningToLocalSpace@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE@@@Z @ 0x180236F00 (-ProcessSetFlatteningToLocalSpace@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISU.c)
 * Callees:
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18003A364 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18003A594 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  unsigned int v3; // ebx
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CComposition **v5; // r10
  char v6; // r11
  struct CVisualTree *v7; // rsi
  int v9; // eax
  unsigned int v10; // ecx
  struct CVisualTree *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(this);
  v11 = VisualTreeNoRef;
  v7 = VisualTreeNoRef;
  if ( VisualTreeNoRef )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 8LL))(VisualTreeNoRef);
    *a2 = v7;
  }
  else if ( v6 )
  {
    v9 = CVisualTree::Create(v5[2], (struct CVisual *)v5, &v11);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180353B28, 2u, v9, 0xF57u, 0LL);
    else
      *a2 = v11;
  }
  else
  {
    *a2 = 0LL;
    return (unsigned int)-2147023728;
  }
  return v3;
}
