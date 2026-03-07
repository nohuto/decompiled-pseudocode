LeaveEnterCritProperDisposition *__fastcall LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
        LeaveEnterCritProperDisposition *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  char v4; // bl

  v2 = SGDGetUserSessionState(this);
  v4 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 8)) == 1 || !IS_USERCRIT_OWNED_AT_ALL() )
    v4 = 0;
  *(_BYTE *)this = v4;
  UserSessionSwitchLeaveCrit(v3);
  return this;
}
