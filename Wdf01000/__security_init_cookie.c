void __cdecl _security_init_cookie()
{
  uintptr_t v0; // rax
  unsigned __int64 v1; // rax

  v0 = _security_cookie;
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
  {
    v1 = __rdtsc();
    _security_cookie = (unsigned __int64)&_security_cookie ^ (((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1);
    HIWORD(_security_cookie) = 0;
    v0 = _security_cookie;
    if ( !_security_cookie )
    {
      v0 = 0x2B992DDFA232LL;
      _security_cookie = 0x2B992DDFA232LL;
    }
  }
  _security_cookie_complement = ~v0;
}
