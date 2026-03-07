// attributes: thunk
NTSTATUS __stdcall NtOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE ResourceManagerHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return __imp_NtOpenEnlistment(
           EnlistmentHandle,
           DesiredAccess,
           ResourceManagerHandle,
           EnlistmentGuid,
           ObjectAttributes);
}
