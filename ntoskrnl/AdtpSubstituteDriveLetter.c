/*
 * XREFs of AdtpSubstituteDriveLetter @ 0x14083DC80
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AdtpLookupDriveLetter @ 0x14083DCF8 (AdtpLookupDriveLetter.c)
 */

void *__fastcall AdtpSubstituteDriveLetter(UNICODE_STRING *a1)
{
  void *result; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // bx

  result = (void *)AdtpLookupDriveLetter(a1);
  if ( (_BYTE)result )
  {
    Buffer = a1->Buffer;
    Length = a1->Length;
    *Buffer = 0;
    Buffer[1] = 58;
    result = memmove(Buffer + 2, Buffer, Length);
    a1->Length = Length + 4;
  }
  return result;
}
