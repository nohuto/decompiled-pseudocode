/*
 * XREFs of ZwDuplicateObject @ 0x140412A90
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1402B7E88 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x1405ED720 (DifZwDuplicateObjectWrapper.c)
 *     SeAuditHandleCreation @ 0x14078D9F8 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     _SysCtxOpenMachine @ 0x1408520D0 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5C34 (SmKmFileInfoDuplicate.c)
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
