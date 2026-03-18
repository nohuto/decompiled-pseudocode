/*
 * XREFs of PsFreeAffinityToken @ 0x1405E0B00
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeAffinityToken(void *a1)
{
  ExFreePoolWithTag(a1, 0x74617350u);
}
