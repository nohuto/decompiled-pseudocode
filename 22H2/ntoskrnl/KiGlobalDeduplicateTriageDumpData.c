/*
 * XREFs of KiGlobalDeduplicateTriageDumpData @ 0x14056A6E4
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x14056A774 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     KiDeduplicateTriageDumpDataArrays @ 0x140569FD8 (KiDeduplicateTriageDumpDataArrays.c)
 */

void __fastcall KiGlobalDeduplicateTriageDumpData(_DWORD *a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)KeBugCheckTriageDumpDataArrayListHead;
  if ( KeBugCheckTriageDumpDataArrayListHead && qword_140C42258 )
  {
    while ( v1 != &KeBugCheckTriageDumpDataArrayListHead )
    {
      KiDeduplicateTriageDumpDataArrays(a1, (__int64)v1);
      v1 = (__int64 *)*v1;
    }
  }
}
