void __fastcall LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition(
        LeaveEnterCritProperDisposition *this)
{
  if ( *(_BYTE *)this )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
}
