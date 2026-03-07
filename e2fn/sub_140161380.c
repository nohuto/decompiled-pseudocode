uintptr_t sub_140161380()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  result = ~_security_cookie;
  qword_1400DF048 = ~_security_cookie;
  return result;
}
