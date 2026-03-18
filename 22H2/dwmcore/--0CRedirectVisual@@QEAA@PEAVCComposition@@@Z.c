/*
 * XREFs of ??0CRedirectVisual@@QEAA@PEAVCComposition@@@Z @ 0x18011850C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C6E4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18009B648 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CRedirectVisual *__fastcall CRedirectVisual::CRedirectVisual(CRedirectVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CRedirectVisual::`vftable';
  return this;
}
