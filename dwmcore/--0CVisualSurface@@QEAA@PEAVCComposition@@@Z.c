/*
 * XREFs of ??0CVisualSurface@@QEAA@PEAVCComposition@@@Z @ 0x1800B02FC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CVisualSurface *__fastcall CVisualSurface::CVisualSurface(CVisualSurface *this, struct CComposition *a2)
{
  CVisualSurface *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisualSurface::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 2;
  *((_QWORD *)this + 14) = (char *)this + 136;
  *((_QWORD *)this + 15) = (char *)this + 136;
  *((_QWORD *)this + 16) = (char *)this + 200;
  result = this;
  *((_WORD *)this + 100) = 0;
  return result;
}
