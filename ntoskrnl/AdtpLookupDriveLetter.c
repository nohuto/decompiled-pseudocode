/*
 * XREFs of AdtpLookupDriveLetter @ 0x14083DCF8
 * Callers:
 *     AdtpSubstituteDriveLetter @ 0x14083DC80 (AdtpSubstituteDriveLetter.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

char __fastcall AdtpLookupDriveLetter(PCUNICODE_STRING String1, unsigned __int16 *a2, _WORD *a3)
{
  UNICODE_STRING *v4; // rbx
  int i; // esi
  char result; // al
  unsigned int Length; // eax
  unsigned __int16 v10; // bp

  v4 = &stru_140D55A90;
  for ( i = 25; ; --i )
  {
    if ( !v4->Buffer )
      goto LABEL_3;
    Length = v4->Length;
    v10 = String1->Length;
    if ( (unsigned __int16)Length >= String1->Length )
      goto LABEL_3;
    String1->Length = Length;
    if ( String1->Buffer[(unsigned __int64)Length >> 1] == 92 )
    {
      if ( RtlEqualUnicodeString(String1, v4, 1u) )
        break;
    }
    String1->Length = v10;
LABEL_3:
    v4 = (UNICODE_STRING *)((char *)v4 - 24);
    if ( (__int64)v4 < (__int64)&unk_140D55838 )
      return 0;
  }
  result = 1;
  String1->Length = v10;
  *a3 = *((_WORD *)&DriveMappingArray + 12 * i);
  *a2 = v4->Length;
  return result;
}
