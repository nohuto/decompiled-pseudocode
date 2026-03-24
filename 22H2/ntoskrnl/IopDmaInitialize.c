/*
 * XREFs of IopDmaInitialize @ 0x1407A2148
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2690 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C445F8 = (__int64)IopIrqUnpackRequirement;
  qword_140C44600 = (__int64)IopDmaPackResource;
  qword_140C44608 = (__int64)IopDmaUnpackResource;
  qword_140C44610 = (__int64)IopDmaScoreRequirement;
  qword_140C44690 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
