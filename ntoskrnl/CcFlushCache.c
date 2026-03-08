/*
 * XREFs of CcFlushCache @ 0x140216740
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, Length, 0, 0, (__int64)IoStatus, 0LL);
}
