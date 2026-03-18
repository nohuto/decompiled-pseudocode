/*
 * XREFs of IopBusNumberInitialize @ 0x140814C58
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140815CC8 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C5C258 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C5C260 = (__int64)IopBusNumberPackResource;
  qword_140C5C268 = (__int64)IopBusNumberUnpackResource;
  qword_140C5C270 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
