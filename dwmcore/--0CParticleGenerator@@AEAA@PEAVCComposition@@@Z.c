/*
 * XREFs of ??0CParticleGenerator@@AEAA@PEAVCComposition@@@Z @ 0x18011120C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CParticleGenerator *__fastcall CParticleGenerator::CParticleGenerator(
        CParticleGenerator *this,
        struct CComposition *a2)
{
  CParticleGenerator *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 10) = 1065353216LL;
  *((_QWORD *)this + 12) = 1065353216LL;
  *(_QWORD *)((char *)this + 132) = 1065353216LL;
  *(_QWORD *)((char *)this + 148) = 1065353216LL;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_QWORD *)this + 23) = 1065353216LL;
  *((_DWORD *)this + 49) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  *((_DWORD *)this + 51) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  *((_DWORD *)this + 54) = 1065353216;
  *((_QWORD *)this + 14) = 1065353216LL;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 56) = 1065353216;
  *((_DWORD *)this + 57) = 1065353216;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)this = &CParticleGenerator::`vftable';
  result = this;
  *((_BYTE *)this + 104) = 1;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 220) = 1;
  return result;
}
