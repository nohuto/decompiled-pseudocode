/*
 * XREFs of ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD4E4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD7E4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CColorMatrixEffect *__fastcall CColorMatrixEffect::CColorMatrixEffect(
        CColorMatrixEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CColorMatrixEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  result = (CColorMatrixEffect *)v2;
  *(_DWORD *)(v2 + 260) = 0;
  *(_OWORD *)(v2 + 176) = _xmm;
  *(_QWORD *)v2 = &CColorMatrixEffect::`vftable';
  *(_OWORD *)(v2 + 192) = _xmm;
  *(_DWORD *)(v2 + 256) = 1;
  *(_OWORD *)(v2 + 208) = _xmm;
  *(_OWORD *)(v2 + 224) = _xmm;
  *(_OWORD *)(v2 + 240) = 0LL;
  return result;
}
