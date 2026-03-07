// attributes: thunk
NTSTATUS __stdcall TmPropagationFailed(PKRESOURCEMANAGER ResourceManager, ULONG RequestCookie, NTSTATUS Status)
{
  return __imp_TmPropagationFailed(ResourceManager, RequestCookie, Status);
}
