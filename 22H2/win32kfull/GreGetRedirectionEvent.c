/*
 * XREFs of GreGetRedirectionEvent @ 0x1C00BCE08
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x1C00BCD90 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1C01E0220 (NtUserWaitForRedirectionStartComplete.c)
 * Callees:
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 */

__int64 __fastcall GreGetRedirectionEvent(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx

  v1 = Gre::Base::Globals(a1);
  if ( (unsigned int)IsDwmActive() )
    return *(_QWORD *)(*((_QWORD *)v1 + 38) + 336LL);
  else
    return 0LL;
}
