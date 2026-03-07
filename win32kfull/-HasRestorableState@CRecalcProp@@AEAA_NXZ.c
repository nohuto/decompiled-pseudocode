char __fastcall CRecalcProp::HasRestorableState(const struct tagWND **this, __int64 a2, __int64 a3)
{
  char v4; // bl

  v4 = 0;
  if ( !CRecalcState::IsPendingAndEquivalentMonitorSet(this[4], this[2], a3) )
    return CRecalcProp::FindRestorableRecalcState((CRecalcProp *)this) != 0LL;
  return v4;
}
