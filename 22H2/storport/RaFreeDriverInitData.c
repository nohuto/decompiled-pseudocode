/*
 * XREFs of RaFreeDriverInitData @ 0x1C00345A0
 * Callers:
 *     RaDeleteDriver @ 0x1C007A168 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeDriverInitData(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x49486152u);
}
