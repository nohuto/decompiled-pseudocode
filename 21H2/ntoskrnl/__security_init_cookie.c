/*
 * XREFs of __security_init_cookie @ 0x140A1C2E8
 * Callers:
 *     HalInitSystem @ 0x14099D050 (HalInitSystem.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  _security_cookie_complement = ~_security_cookie;
}
