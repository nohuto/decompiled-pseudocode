/*
 * XREFs of IopPortInitialize @ 0x1407A1FCC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2690 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C44938 = (__int64)IopPortFindSuitableRange;
  qword_140C44940 = (__int64)IopPortAddAllocation;
  qword_140C44948 = (__int64)IopPortBacktrackAllocation;
  qword_140C448B8 = (__int64)&IopGenericUnpackRequirement;
  qword_140C448C0 = (__int64)IopGenericPackResource;
  qword_140C448C8 = (__int64)IopGenericUnpackResource;
  qword_140C448D0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
