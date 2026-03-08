/*
 * XREFs of ??0COcclusionContext@@QEAA@XZ @ 0x18003904C
 * Callers:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180020340 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x18003A184 (--0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B5BC8 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801E65DC (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801F600C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??0CLightStack@@QEAA@XZ @ 0x180038FF4 (--0CLightStack@@QEAA@XZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x180104860 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this)
{
  __int64 v2; // rsi
  char *v3; // rdi
  COcclusionContext *result; // rax

  *(_QWORD *)this = &COcclusionContext::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 50) = 0;
  CLightStack::CLightStack((COcclusionContext *)((char *)this + 208));
  *((_QWORD *)this + 56) = (char *)this + 480;
  *((_QWORD *)this + 57) = (char *)this + 480;
  v2 = 8LL;
  v3 = (char *)this + 1032;
  *((_DWORD *)this + 116) = 10;
  *(_QWORD *)((char *)this + 468) = 10LL;
  *((_QWORD *)this + 105) = (char *)this + 864;
  *((_QWORD *)this + 106) = (char *)this + 864;
  *((_QWORD *)this + 107) = (char *)this + 1024;
  *((_QWORD *)this + 128) = 0LL;
  do
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v3);
    v3 += 16;
    --v2;
  }
  while ( v2 );
  *((_DWORD *)this + 318) = 0;
  *((_DWORD *)this + 335) = 0;
  *((_QWORD *)this + 149) = 0LL;
  *((_DWORD *)this + 300) = 0x7FFFFFFF;
  *((_WORD *)this + 602) = 0;
  *((_BYTE *)this + 1206) = 0;
  *((_QWORD *)this + 168) = (char *)this + 1352;
  *((_DWORD *)this + 338) = 0;
  *((_QWORD *)this + 177) = 0LL;
  *((_BYTE *)this + 1424) = 0;
  *(_QWORD *)((char *)this + 1428) = 0LL;
  *(_QWORD *)((char *)this + 1436) = 0LL;
  *(_QWORD *)((char *)this + 1444) = 0LL;
  *((_QWORD *)this + 182) = 0LL;
  *((_DWORD *)this + 366) = 0;
  *((_QWORD *)this + 184) = 0LL;
  *((_QWORD *)this + 186) = 0LL;
  *((_DWORD *)this + 370) = 0;
  *((_DWORD *)this + 374) = 0;
  *((_QWORD *)this + 188) = 0LL;
  *((_QWORD *)this + 190) = 0LL;
  *((_DWORD *)this + 378) = 0;
  *((_DWORD *)this + 382) = 0;
  *((_QWORD *)this + 192) = 0LL;
  *((_QWORD *)this + 193) = 0LL;
  memset_0((char *)this + 1032, 0, 0x80uLL);
  result = this;
  *(_OWORD *)((char *)this + 1160) = 0LL;
  *(_OWORD *)((char *)this + 1176) = 0LL;
  return result;
}
