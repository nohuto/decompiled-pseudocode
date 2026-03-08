/*
 * XREFs of ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD2B4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801BD7E4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CBrightnessEffect *__fastcall CBrightnessEffect::CBrightnessEffect(CBrightnessEffect *this, struct CComposition *a2)
{
  CBrightnessEffect *v2; // rcx
  CBrightnessEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *((_DWORD *)v2 + 46) = 0;
  *((_DWORD *)v2 + 47) = 0;
  *((_DWORD *)v2 + 44) = 1065353216;
  *((_DWORD *)v2 + 45) = 1065353216;
  result = v2;
  *(_QWORD *)v2 = &CBrightnessEffect::`vftable';
  return result;
}
