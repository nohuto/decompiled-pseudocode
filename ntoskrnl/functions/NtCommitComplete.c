// attributes: thunk
NTSTATUS __stdcall NtCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtCommitComplete(EnlistmentHandle, TmVirtualClock);
}
