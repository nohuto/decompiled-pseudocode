/*
 * XREFs of CcInitializeCacheMap @ 0x14036A2D0
 * Callers:
 *     <none>
 * Callees:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  CcInitializeCacheMapInternal(
    (__int64)FileObject,
    (__m128i *)FileSizes,
    PinAccess,
    Callbacks,
    0LL,
    (__int64)LazyWriteContext,
    0);
}
