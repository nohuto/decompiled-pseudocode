/*
 * XREFs of DestroyEventEntry @ 0x1403CFFDC
 * Callers:
 *     FlushEventEntryList @ 0x1408802E8 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
