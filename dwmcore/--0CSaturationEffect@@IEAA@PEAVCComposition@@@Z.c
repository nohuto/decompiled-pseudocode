/*
 * XREFs of ??0CSaturationEffect@@IEAA@PEAVCComposition@@@Z @ 0x18011141C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD7E4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CSaturationEffect *__fastcall CSaturationEffect::CSaturationEffect(CSaturationEffect *this, struct CComposition *a2)
{
  CSaturationEffect *v2; // rcx

  CFilterEffect::CFilterEffect(this, a2);
  *((_DWORD *)v2 + 44) = 1056964608;
  *(_QWORD *)v2 = &CSaturationEffect::`vftable';
  return v2;
}
