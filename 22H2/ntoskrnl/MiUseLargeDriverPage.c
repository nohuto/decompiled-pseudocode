/*
 * XREFs of MiUseLargeDriverPage @ 0x1407E33D4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiUseLargeDriverPage(PCUNICODE_STRING String1)
{
  __int64 i; // rbx

  if ( (MiFlags & 0x4000) != 0 || (MiFlags & 0x8000) != 0 || dword_140C6997C )
    return 0LL;
  if ( byte_140C659F5 != 1 )
  {
    for ( i = qword_140C659F8; (__int64 *)i != &qword_140C659F8; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 16), 1u) )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
