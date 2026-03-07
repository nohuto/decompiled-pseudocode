// attributes: thunk
NTSTATUS __stdcall NtPropagationFailed(HANDLE ResourceManagerHandle, ULONG RequestCookie, NTSTATUS PropStatus)
{
  return __imp_NtPropagationFailed(ResourceManagerHandle, RequestCookie, PropStatus);
}
