/*
 * XREFs of MincryptFree @ 0x140A6F0A0
 * Callers:
 *     SymCryptCallbackFree @ 0x14067B438 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
