/*
 * XREFs of KiGlobalDeduplicateTriageDumpData @ 0x140568244
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405682D4 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     KiDeduplicateTriageDumpDataArrays @ 0x140567B38 (KiDeduplicateTriageDumpDataArrays.c)
 */

void __fastcall KiGlobalDeduplicateTriageDumpData(_DWORD *a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)KeBugCheckTriageDumpDataArrayListHead;
  if ( KeBugCheckTriageDumpDataArrayListHead && qword_140C41EB8 )
  {
    while ( v1 != &KeBugCheckTriageDumpDataArrayListHead )
    {
      KiDeduplicateTriageDumpDataArrays(a1, (__int64)v1);
      v1 = (__int64 *)*v1;
    }
  }
}
