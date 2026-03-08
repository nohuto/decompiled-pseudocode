/*
 * XREFs of ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18002057C
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180020460 (-Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801EF540 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180020340 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800C6FF4 (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::VisualCaptureBitsResponse(
        VisualCaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        struct CVisualTree *a4,
        const struct WICRect *a5,
        enum DXGI_FORMAT a6,
        unsigned __int64 a7,
        void *a8,
        void *a9)
{
  CaptureBitsResponse::CaptureBitsResponse(this, a2, a3, a4, 1.0, a5, a6, a7);
  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 212) = a8;
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((char *)this + 1688, *((_QWORD *)a4 + 8));
  *((_QWORD *)this + 207) = a9;
  return this;
}
