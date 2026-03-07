__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx

  TouchValidationStatus = 0;
  v5 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( !a1 || (v5 = HMValidateHandle(a1, 0x13u)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v5);
  }
  else
  {
    UserSetLastError(6);
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v6);
  return TouchValidationStatus;
}
