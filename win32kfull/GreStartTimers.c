/*
 * XREFs of GreStartTimers @ 0x1C007B498
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     UserSetTimer @ 0x1C022FBB8 (UserSetTimer.c)
 */

__int64 GreStartTimers()
{
  __int64 v0; // rcx
  char v1; // bl
  __int64 result; // rax
  __int64 v3; // rdi

  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v1 = 0;
  }
  else
  {
    v1 = 1;
    UserEnterUserCritSec();
  }
  result = SGDGetSessionState(v0);
  v3 = *(_QWORD *)(result + 32);
  if ( *(_QWORD *)(v3 + 20256) != -1LL )
  {
    result = UserSetTimer();
    *(_QWORD *)(v3 + 20256) = result;
  }
  if ( v1 )
    return UserLeaveUserCritSec();
  return result;
}
