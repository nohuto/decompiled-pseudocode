/*
 * XREFs of ZwDuplicateObject @ 0x1403FA1A0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x14035F8E4 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x140694128 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x1407A4D24 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x14092B36C (SmKmFileInfoDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle);
}
