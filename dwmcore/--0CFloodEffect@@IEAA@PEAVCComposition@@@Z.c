/*
 * XREFs of ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD85C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD7E4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CFloodEffect *__fastcall CFloodEffect::CFloodEffect(CFloodEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CFloodEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_DWORD *)(v2 + 188) = 1065353216;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_DWORD *)(v2 + 184) = 0;
  result = (CFloodEffect *)v2;
  *(_QWORD *)v2 = &CFloodEffect::`vftable';
  return result;
}
