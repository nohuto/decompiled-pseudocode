void __fastcall LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired(
        LeaveEnterUserCritIfAcquired *this,
        __int64 a2,
        __int64 a3)
{
  if ( *(_BYTE *)this )
  {
    EnterCrit(1LL, 0LL);
  }
  else if ( *((_BYTE *)this + 1) )
  {
    EnterSharedCrit(this, a2, a3);
  }
}
