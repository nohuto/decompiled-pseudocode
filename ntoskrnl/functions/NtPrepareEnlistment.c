// attributes: thunk
NTSTATUS __stdcall NtPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrepareEnlistment(EnlistmentHandle, TmVirtualClock);
}
