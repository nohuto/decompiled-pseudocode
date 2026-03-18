/*
 * XREFs of ??0CViewBox@@QEAA@PEAVCComposition@@@Z @ 0x1801C155C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C6E4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800E322C (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 */

CViewBox *__fastcall CViewBox::CViewBox(CViewBox *this, struct CComposition *a2)
{
  CViewBox *v2; // rcx
  CViewBox *result; // rax

  CComponentTransform2D::CComponentTransform2D(this, a2);
  *(_QWORD *)v2 = &CViewBox::`vftable';
  *((_DWORD *)v2 + 60) = 1056964608;
  *((_DWORD *)v2 + 61) = 1056964608;
  result = v2;
  *((_DWORD *)v2 + 62) = 2;
  return result;
}
