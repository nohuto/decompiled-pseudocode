/*
 * XREFs of ZwOpenResourceManager @ 0x140414970
 * Callers:
 *     DifZwOpenResourceManagerWrapper @ 0x1405EFFE0 (DifZwOpenResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&DesiredAccess);
}
