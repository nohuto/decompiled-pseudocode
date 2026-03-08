/*
 * XREFs of IopIrqInitialize @ 0x14081D2C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14081E398 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C5BF98 = (__int64)IopIrqUnpackRequirement;
  qword_140C5BFA0 = (__int64)IopIrqPackResource;
  qword_140C5BFA8 = (__int64)IopIrqUnpackResource;
  qword_140C5BFB0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
