/*
 * XREFs of DestroyEventEntry @ 0x1C003DEF8
 * Callers:
 *     FlushEventEntryList @ 0x1C00D32EC (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
