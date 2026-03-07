ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  __int64 v2; // rax

  v2 = SGDGetUserSessionState(this);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 8)) == 1 )
  {
    *(_BYTE *)this = 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    EnterCrit(1LL, 0LL);
  }
  return this;
}
