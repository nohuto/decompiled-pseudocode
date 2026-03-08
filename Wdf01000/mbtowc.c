/*
 * XREFs of mbtowc @ 0x1C000A778
 * Callers:
 *     _woutput_l @ 0x1C0009C9C (_woutput_l.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar_0 @ 0x1C000A916 (RtlAnsiCharToUnicodeChar_0.c)
 */

__int64 __fastcall mbtowc(wchar_t *pwc, char *s, unsigned __int64 n)
{
  __int64 result; // rax
  int v4; // ebx
  char *s1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = (int)s;
  if ( s && n )
  {
    if ( *s )
    {
      s1 = s;
      *pwc = RtlAnsiCharToUnicodeChar_0((PUCHAR *)&s1);
      return (unsigned int)((_DWORD)s1 - v4);
    }
    else if ( pwc )
    {
      *pwc = 0;
    }
  }
  return result;
}
