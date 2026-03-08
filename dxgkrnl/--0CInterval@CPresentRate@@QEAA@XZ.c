/*
 * XREFs of ??0CInterval@CPresentRate@@QEAA@XZ @ 0x1C0019FA0
 * Callers:
 *     ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0014140 (-ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionO.c)
 * Callees:
 *     <none>
 */

CPresentRate::CInterval *__fastcall CPresentRate::CInterval::CInterval(CPresentRate::CInterval *this)
{
  CPresentRate::CInterval *result; // rax

  *(_DWORD *)this = 0;
  result = this;
  *((_DWORD *)this + 1) = 0;
  return result;
}
