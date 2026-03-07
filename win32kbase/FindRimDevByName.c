const UNICODE_STRING *__fastcall FindRimDevByName(PCUNICODE_STRING String1, __int64 a2)
{
  const UNICODE_STRING *i; // rbx

  for ( i = *(const UNICODE_STRING **)(a2 + 424); ; i = (const UNICODE_STRING *)i[2].Buffer )
  {
    if ( !i )
      return 0LL;
    if ( RtlEqualUnicodeString(String1, i + 13, 0) )
      break;
  }
  return i;
}
