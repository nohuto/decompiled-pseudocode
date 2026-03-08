/*
 * XREFs of IopPortInitialize @ 0x14081B7A8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14081E398 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C5C438 = (__int64)IopPortFindSuitableRange;
  qword_140C5C440 = (__int64)IopPortAddAllocation;
  qword_140C5C448 = (__int64)IopPortBacktrackAllocation;
  qword_140C5C3B8 = (__int64)IopGenericUnpackRequirement;
  qword_140C5C3C0 = (__int64)IopGenericPackResource;
  qword_140C5C3C8 = (__int64)IopGenericUnpackResource;
  qword_140C5C3D0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
