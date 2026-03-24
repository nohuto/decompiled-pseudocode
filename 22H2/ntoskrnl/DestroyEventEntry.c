/*
 * XREFs of DestroyEventEntry @ 0x14036D4D4
 * Callers:
 *     FlushEventEntryList @ 0x140735B18 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
