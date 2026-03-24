/*
 * XREFs of ApiSetReleaseSchema @ 0x1405BE4C8
 * Callers:
 *     PspSiloLoadApiSets @ 0x140906D64 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14095E9D4 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
