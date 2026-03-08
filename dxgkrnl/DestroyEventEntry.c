/*
 * XREFs of DestroyEventEntry @ 0x1C0074FF4
 * Callers:
 *     FlushEventEntryList @ 0x1C03D36A0 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
