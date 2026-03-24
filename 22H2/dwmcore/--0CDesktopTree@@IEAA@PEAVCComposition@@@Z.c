/*
 * XREFs of ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x1800DF978
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801B1F2C (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180044270 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 */

CDesktopTree *__fastcall CDesktopTree::CDesktopTree(CDesktopTree *this, struct CComposition *a2)
{
  CVisualTree::CVisualTree(this, a2, 0LL);
  *(_QWORD *)this = &CDesktopTree::`vftable';
  *((_QWORD *)this + 737) = 0LL;
  *((_QWORD *)this + 738) = 0LL;
  *((_QWORD *)this + 739) = 0LL;
  *((_QWORD *)this + 740) = (char *)this + 5944;
  *((_QWORD *)this + 741) = (char *)this + 5944;
  *((_QWORD *)this + 742) = (char *)this + 5976;
  *((_QWORD *)this + 747) = (char *)this + 6000;
  *((_QWORD *)this + 748) = (char *)this + 6000;
  *((_QWORD *)this + 749) = (char *)this + 6640;
  return this;
}
