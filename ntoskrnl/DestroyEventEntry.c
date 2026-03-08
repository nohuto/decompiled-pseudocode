/*
 * XREFs of DestroyEventEntry @ 0x1403CAA34
 * Callers:
 *     FlushEventEntryList @ 0x14087B4B8 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
