/*
 * XREFs of CcFlushCache @ 0x14031A990
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((__int64)SectionObjectPointer, FileOffset, Length, 0LL, 0, (__int128 *)&IoStatus->0);
}
