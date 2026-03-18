/*
 * XREFs of ZwCreateResourceManager @ 0x14041CFA0
 * Callers:
 *     DifZwCreateResourceManagerWrapper @ 0x14061ECA0 (DifZwCreateResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
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
