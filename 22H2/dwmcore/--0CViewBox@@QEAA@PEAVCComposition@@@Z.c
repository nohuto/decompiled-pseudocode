/*
 * XREFs of ??0CViewBox@@QEAA@PEAVCComposition@@@Z @ 0x18016B27C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800C84B8 (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 */

CViewBox *__fastcall CViewBox::CViewBox(CViewBox *this, struct CComposition *a2)
{
  CViewBox *v2; // rcx
  CViewBox *result; // rax

  CComponentTransform2D::CComponentTransform2D(this, a2);
  *(_QWORD *)v2 = &CViewBox::`vftable';
  *((_DWORD *)v2 + 58) = 1056964608;
  *((_DWORD *)v2 + 59) = 1056964608;
  result = v2;
  *((_DWORD *)v2 + 60) = 2;
  return result;
}
