/*
 * XREFs of ApiSetReleaseSchema @ 0x140612300
 * Callers:
 *     PspSiloLoadApiSets @ 0x1409AAA20 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140A0717C (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x140A07380 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
