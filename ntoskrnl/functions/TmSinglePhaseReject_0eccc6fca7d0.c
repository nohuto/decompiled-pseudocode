// attributes: thunk
NTSTATUS __stdcall TmSinglePhaseReject(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmSinglePhaseReject(Enlistment, TmVirtualClock);
}
