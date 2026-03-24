/*
 * XREFs of IopUserRundown @ 0x1406A3400
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
