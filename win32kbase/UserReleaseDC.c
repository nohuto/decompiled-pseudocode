__int64 __fastcall UserReleaseDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  LODWORD(v4) = ReleaseCacheDC(v4, 0LL) != 2;
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return (unsigned int)v4;
}
