/*
 * XREFs of LocalConvertSidToStringSidW @ 0x1406EC2F0
 * Callers:
 *     SeConvertSidToStringSid @ 0x140597F50 (SeConvertSidToStringSid.c)
 *     LocalConvertAclToString @ 0x1406EC584 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x140926130 (LocalGetStringForSid.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1403481C8 (RtlStringCbCopyNW.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     SddlpAlloc @ 0x1406ED338 (SddlpAlloc.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 */

NTSTATUS __fastcall LocalConvertSidToStringSidW(PSID Sid, wchar_t **a2)
{
  NTSTATUS result; // eax
  __int64 Length; // rdi
  wchar_t *v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  if ( !Sid || !a2 )
    return -1073741811;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    Length = UnicodeString.Length;
    v5 = (wchar_t *)SddlpAlloc(UnicodeString.Length + 2LL);
    *a2 = v5;
    if ( v5 )
    {
      result = RtlStringCbCopyNW(v5, Length + 2, UnicodeString.Buffer, (unsigned int)Length);
      if ( result >= 0 )
      {
        RtlFreeAnsiString(&UnicodeString);
        return 0;
      }
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      return -1073741801;
    }
  }
  return result;
}
