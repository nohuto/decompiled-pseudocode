/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x1403B189C
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x14035BDC0 (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SmAllocWrapper(__int64 a1, unsigned int *a2)
{
  return ExAllocatePool2(64LL, a1, *a2);
}
