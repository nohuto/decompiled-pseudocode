/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x1800E2538
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  CComponentTransform3D *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CComponentTransform3D::`vftable';
  *((_BYTE *)this + 156) = 1;
  *(_QWORD *)((char *)this + 236) = 1065353216LL;
  *((_QWORD *)this + 32) = 1065353216LL;
  *(_QWORD *)((char *)this + 276) = 1065353216LL;
  *((_DWORD *)this + 74) = 1065353216;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *(_QWORD *)((char *)this + 284) = 0LL;
  *((_DWORD *)this + 73) = 0;
  *(_QWORD *)((char *)this + 180) = CComponentTransform3D::sc_defaultOffset;
  *((_DWORD *)this + 47) = dword_1803E6F18;
  *(_OWORD *)((char *)this + 216) = CComponentTransform3D::sc_defaultOrientation;
  *((_QWORD *)this + 24) = CComponentTransform3D::sc_defaultRotationAxis;
  *((_DWORD *)this + 50) = dword_1803E1E90;
  *(_QWORD *)((char *)this + 204) = CComponentTransform3D::sc_defaultScale;
  *((_DWORD *)this + 53) = dword_1803E1EA0;
  result = this;
  *(_OWORD *)((char *)this + 236) = CComponentTransform3D::sc_defaultTransformMatrix;
  *(_OWORD *)((char *)this + 252) = xmmword_1803E1ED0;
  *(_OWORD *)((char *)this + 268) = xmmword_1803E1EE0;
  *(_OWORD *)((char *)this + 284) = xmmword_1803E1EF0;
  return result;
}
