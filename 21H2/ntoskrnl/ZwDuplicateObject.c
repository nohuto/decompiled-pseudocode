/*
 * XREFs of ZwDuplicateObject @ 0x1403FAB20
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140360534 (SepReferenceCachedTokenHandles.c)
 *     SeAuditHandleCreation @ 0x1406B0F68 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     _SysCtxOpenMachine @ 0x1407A48F4 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x14092B31C (SmKmFileInfoDuplicate.c)
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
  return KiServiceInternal(SourceProcessHandle, SourceHandle);
}
