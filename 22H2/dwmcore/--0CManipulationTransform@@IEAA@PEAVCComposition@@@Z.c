/*
 * XREFs of ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z @ 0x1800C82FC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CManipulationTransform *__fastcall CManipulationTransform::CManipulationTransform(
        CManipulationTransform *this,
        struct CComposition *a2)
{
  CManipulationTransform *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CManipulationTransform::`vftable';
  *((_BYTE *)this + 148) = 0;
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 46) = 1065353216;
  *((_DWORD *)this + 65) = 1065353216;
  *((_DWORD *)this + 60) = 1065353216;
  *((_DWORD *)this + 55) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *(_QWORD *)((char *)this + 204) = 0LL;
  return result;
}
