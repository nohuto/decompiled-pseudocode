// attributes: thunk
NTSTATUS __stdcall TmPrePrepareEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrePrepareEnlistment(Enlistment, TmVirtualClock);
}
