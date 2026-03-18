/*
 * XREFs of PnprGetStackLimits @ 0x140563084
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1405633FC (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D540 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14034E3B0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x14041EA70 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
