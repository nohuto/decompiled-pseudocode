/*
 * XREFs of GreGetRedirectionEvent @ 0x1C00F4978
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x1C00F4900 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1C01E12D0 (NtUserWaitForRedirectionStartComplete.c)
 * Callees:
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 */

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
