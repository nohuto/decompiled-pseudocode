// attributes: thunk
NTSTATUS __stdcall NtSinglePhaseReject(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtSinglePhaseReject(EnlistmentHandle, TmVirtualClock);
}
