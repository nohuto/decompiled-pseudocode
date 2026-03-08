/*
 * XREFs of IopBusNumberInitialize @ 0x14081D328
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14081E398 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C5BE38 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C5BE40 = (__int64)IopBusNumberPackResource;
  qword_140C5BE48 = (__int64)IopBusNumberUnpackResource;
  qword_140C5BE50 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
