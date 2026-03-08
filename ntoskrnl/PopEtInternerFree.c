/*
 * XREFs of PopEtInternerFree @ 0x14079A5D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtInternerFree(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x54456F50u);
}
