/*
 * XREFs of ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1802370AC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD7E4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::CLinearTransferEffect(
        CLinearTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CLinearTransferEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)v2 = &CLinearTransferEffect::`vftable';
  *(_DWORD *)(v2 + 180) = 1065353216;
  *(_DWORD *)(v2 + 192) = 1065353216;
  *(_DWORD *)(v2 + 204) = 1065353216;
  *(_DWORD *)(v2 + 216) = 1065353216;
  result = (CLinearTransferEffect *)v2;
  *(_DWORD *)(v2 + 176) = 0;
  *(_BYTE *)(v2 + 184) = 0;
  *(_DWORD *)(v2 + 188) = 0;
  *(_BYTE *)(v2 + 196) = 0;
  *(_DWORD *)(v2 + 200) = 0;
  *(_BYTE *)(v2 + 208) = 0;
  *(_DWORD *)(v2 + 212) = 0;
  *(_WORD *)(v2 + 220) = 0;
  return result;
}
