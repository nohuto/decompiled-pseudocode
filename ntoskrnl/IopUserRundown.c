/*
 * XREFs of IopUserRundown @ 0x140799A30
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
