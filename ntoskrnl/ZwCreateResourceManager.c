/*
 * XREFs of ZwCreateResourceManager @ 0x140413B70
 * Callers:
 *     DifZwCreateResourceManagerWrapper @ 0x1405EC7C0 (DifZwCreateResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&DesiredAccess);
}
