/*
 * XREFs of MincryptFree @ 0x140A71DA0
 * Callers:
 *     SymCryptCallbackFree @ 0x14067DA88 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
