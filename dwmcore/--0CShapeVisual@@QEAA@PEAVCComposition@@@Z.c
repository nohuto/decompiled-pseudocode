/*
 * XREFs of ??0CShapeVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801114F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18009B504 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CShapeVisual *__fastcall CShapeVisual::CShapeVisual(CShapeVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CShapeVisual::`vftable';
  return this;
}
