/*
 * XREFs of IopDmaInitialize @ 0x140814B78
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140815CC8 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C5C518 = (__int64)IopIrqUnpackRequirement;
  qword_140C5C520 = (__int64)IopDmaPackResource;
  qword_140C5C528 = (__int64)IopDmaUnpackResource;
  qword_140C5C530 = (__int64)IopDmaScoreRequirement;
  qword_140C5C5B0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
