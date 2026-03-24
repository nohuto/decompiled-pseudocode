/*
 * XREFs of __security_init_cookie @ 0x1C00D5044
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0090DEC (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 *     GsDriverEntry @ 0x1C00D5010 (GsDriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  _security_cookie_complement = ~_security_cookie;
}
