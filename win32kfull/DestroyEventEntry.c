/*
 * XREFs of DestroyEventEntry @ 0x1C00EC1AC
 * Callers:
 *     FlushEventEntryList @ 0x1C039C7A4 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
