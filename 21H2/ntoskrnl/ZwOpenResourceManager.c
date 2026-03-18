/*
 * XREFs of ZwOpenResourceManager @ 0x14041DD80
 * Callers:
 *     DifZwOpenResourceManagerWrapper @ 0x1406225D0 (DifZwOpenResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
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
