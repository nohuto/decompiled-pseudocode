// attributes: thunk
NTSTATUS __stdcall NtCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID RmGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  return __imp_NtCreateResourceManager(
           ResourceManagerHandle,
           DesiredAccess,
           TmHandle,
           RmGuid,
           ObjectAttributes,
           CreateOptions,
           Description);
}
