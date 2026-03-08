/*
 * XREFs of ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z @ 0x1800E24A0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CManipulationTransform *__fastcall CManipulationTransform::CManipulationTransform(
        CManipulationTransform *this,
        struct CComposition *a2)
{
  CManipulationTransform *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CManipulationTransform::`vftable';
  *((_BYTE *)this + 156) = 0;
  *((_DWORD *)this + 46) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 67) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  *((_DWORD *)this + 57) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  return result;
}
