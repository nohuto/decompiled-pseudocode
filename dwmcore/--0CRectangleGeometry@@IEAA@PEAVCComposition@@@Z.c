/*
 * XREFs of ??0CRectangleGeometry@@IEAA@PEAVCComposition@@@Z @ 0x180111338
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CRectangleGeometry *__fastcall CRectangleGeometry::CRectangleGeometry(
        CRectangleGeometry *this,
        struct CComposition *a2)
{
  CRectangleGeometry *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CRectangleGeometry::`vftable';
  result = this;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 48) = 0;
  return result;
}
