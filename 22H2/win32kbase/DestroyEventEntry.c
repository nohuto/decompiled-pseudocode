/*
 * XREFs of DestroyEventEntry @ 0x1C00B6AB4
 * Callers:
 *     FlushEventEntryList @ 0x1C02BF9D8 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
