/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C01F6BA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01D92F8 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx

  TouchValidationStatus = 0;
  v5 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( !a1 || (v5 = HMValidateHandle(a1, 0x13u)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v5);
  }
  else
  {
    UserSetLastError(6LL, v6);
    UserSetLastError(0LL, v7);
  }
  UserSessionSwitchLeaveCrit(v8);
  return TouchValidationStatus;
}
