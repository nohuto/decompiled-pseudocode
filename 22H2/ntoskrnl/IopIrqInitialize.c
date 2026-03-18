/*
 * XREFs of IopIrqInitialize @ 0x140814BF0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140815CC8 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C5C3B8 = (__int64)IopIrqUnpackRequirement;
  qword_140C5C3C0 = (__int64)IopIrqPackResource;
  qword_140C5C3C8 = (__int64)IopIrqUnpackResource;
  qword_140C5C3D0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
