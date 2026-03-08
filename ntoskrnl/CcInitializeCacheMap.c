/*
 * XREFs of CcInitializeCacheMap @ 0x1402FF250
 * Callers:
 *     <none>
 * Callees:
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  CcInitializeCacheMapInternal(
    (_DWORD)FileObject,
    (_DWORD)FileSizes,
    PinAccess,
    (_DWORD)Callbacks,
    0LL,
    (__int64)LazyWriteContext,
    0);
}
