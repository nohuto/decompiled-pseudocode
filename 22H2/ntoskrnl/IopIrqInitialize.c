/*
 * XREFs of IopIrqInitialize @ 0x1407A21C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2690 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C44498 = (__int64)IopIrqUnpackRequirement;
  qword_140C444A0 = (__int64)IopIrqPackResource;
  qword_140C444A8 = (__int64)IopIrqUnpackResource;
  qword_140C444B0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
