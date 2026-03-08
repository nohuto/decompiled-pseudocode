/*
 * XREFs of LocalConvertSidToStringSidW @ 0x1408368E8
 * Callers:
 *     SeConvertSidToStringSid @ 0x1405B7650 (SeConvertSidToStringSid.c)
 *     LocalGetStringForSid @ 0x14074FCB0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x14039301C (RtlStringCbCopyNW.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
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
        RtlFreeUnicodeString(&UnicodeString);
        return 0;
      }
    }
    else
    {
      RtlFreeUnicodeString(&UnicodeString);
      return -1073741801;
    }
  }
  return result;
}
