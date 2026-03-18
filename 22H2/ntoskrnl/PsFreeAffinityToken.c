/*
 * XREFs of PsFreeAffinityToken @ 0x14036E9F0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406F9DC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeAffinityToken(void *a1)
{
  ExFreePoolWithTag(a1, 0x74617350u);
}
