/*
 * XREFs of DestroyEventEntry @ 0x1C025C90C
 * Callers:
 *     FlushEventEntryList @ 0x1C037B4B0 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
