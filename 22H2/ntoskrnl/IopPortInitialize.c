/*
 * XREFs of IopPortInitialize @ 0x1408130D8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140815CC8 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C5C6F8 = (__int64)IopPortFindSuitableRange;
  qword_140C5C700 = (__int64)IopPortAddAllocation;
  qword_140C5C708 = (__int64)IopPortBacktrackAllocation;
  qword_140C5C678 = (__int64)&IopGenericUnpackRequirement;
  qword_140C5C680 = (__int64)IopGenericPackResource;
  qword_140C5C688 = (__int64)IopGenericUnpackResource;
  qword_140C5C690 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
