// attributes: thunk
NTSTATUS __stdcall NtRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  return __imp_NtRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
}
