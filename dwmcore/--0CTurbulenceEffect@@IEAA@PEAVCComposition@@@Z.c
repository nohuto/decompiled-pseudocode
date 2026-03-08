/*
 * XREFs of ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x180251B2C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD7E4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::CTurbulenceEffect(CTurbulenceEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CTurbulenceEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)(v2 + 200) = 1LL;
  *(_QWORD *)v2 = &CTurbulenceEffect::`vftable';
  *(_DWORD *)(v2 + 184) = 1008981770;
  *(_QWORD *)(v2 + 188) = 1008981770LL;
  result = (CTurbulenceEffect *)v2;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_DWORD *)(v2 + 196) = 0;
  *(_QWORD *)(v2 + 208) = 0LL;
  return result;
}
