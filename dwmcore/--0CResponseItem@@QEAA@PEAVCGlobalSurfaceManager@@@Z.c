/*
 * XREFs of ??0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x1800ABF98
 * Callers:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180020340 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ??0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z @ 0x1800ABF0C (--0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z.c)
 *     ?Partition_Synchronize@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x1801EF7E0 (-Partition_Synchronize@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CResponseItem *__fastcall CResponseItem::CResponseItem(CResponseItem *this, struct CGlobalSurfaceManager *a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CResponseItem *)((char *)this + 8);
  *(_QWORD *)this = &CResponseItem::`vftable';
  *(_DWORD *)v3 = 0;
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 3) = a2;
  *((_WORD *)this + 16) = 0;
  CMILRefCountImpl::AddReference(v3);
  return this;
}
