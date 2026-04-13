/*
 * XREFs of ___security_init_cookie @ 0x100042E0
 * Callers:
 *     __DllMainCRTStartup@12 @ 0x10004250 (__DllMainCRTStartup@12.c)
 * Callees:
 *     __get_entropy @ 0x10004291 (__get_entropy.c)
 */

void __cdecl __security_init_cookie()
{
  uintptr_t v0; // ecx
  unsigned int entropy; // eax

  v0 = __security_cookie;
  if ( __security_cookie == -1153374642 || (__security_cookie & 0xFFFF0000) == 0 )
  {
    entropy = _get_entropy();
    v0 = entropy;
    if ( entropy == -1153374642 )
    {
      v0 = -1153374641;
    }
    else if ( (entropy & 0xFFFF0000) == 0 )
    {
      v0 = ((entropy | 0x4711) << 16) | entropy;
    }
    __security_cookie = v0;
  }
  __security_cookie_complement = ~v0;
}
