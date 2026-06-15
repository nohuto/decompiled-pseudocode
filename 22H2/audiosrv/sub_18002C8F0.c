/*
 * XREFs of sub_18002C8F0 @ 0x18002C8F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 */

char sub_18002C8F0()
{
  bool v0; // bl
  CLSID pClsid; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  if ( byte_18019E4BC )
    return byte_18019E4B6;
  byte_18019E4BC = 1;
  if ( !(unsigned __int8)sub_18006C4AC() || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
  {
    v0 = CoGetPSClsid(&stru_18015BC78, &pClsid) >= 0;
    byte_18019E4B6 = v0;
  }
  else
  {
    byte_18019E4B6 = 0;
  }
  return v0;
}
