__int64 __fastcall MiUseLargeDriverPage(PCUNICODE_STRING String1)
{
  __int64 i; // rbx

  if ( (MiFlags & 0x4000) != 0 || (MiFlags & 0x8000) != 0 || dword_140C694FC )
    return 0LL;
  if ( byte_140C65575 != 1 )
  {
    for ( i = qword_140C65578; (__int64 *)i != &qword_140C65578; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 16), 1u) )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
