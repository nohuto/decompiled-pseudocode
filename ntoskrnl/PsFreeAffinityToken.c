/*
 * XREFs of PsFreeAffinityToken @ 0x140303040
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeAffinityToken(void *a1)
{
  ExFreePoolWithTag(a1, 0x74617350u);
}
