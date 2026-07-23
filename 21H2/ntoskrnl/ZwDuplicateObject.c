/*
 * XREFs of ZwDuplicateObject @ 0x1403FAD00
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1402A5464 (SepReferenceCachedTokenHandles.c)
 *     SeAuditHandleCreation @ 0x14060FF18 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     _SysCtxOpenMachine @ 0x1407A4AF4 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x14092B47C (SmKmFileInfoDuplicate.c)
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
