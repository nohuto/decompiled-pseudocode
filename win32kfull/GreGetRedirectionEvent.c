__int64 __fastcall GreGetRedirectionEvent(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  Gre::Base *v2; // rcx

  v1 = Gre::Base::Globals(a1);
  if ( IsDwmActive(v2) )
    return *(_QWORD *)(*((_QWORD *)v1 + 38) + 336LL);
  else
    return 0LL;
}
