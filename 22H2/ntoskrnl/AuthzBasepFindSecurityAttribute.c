/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x14022D0E0
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x140224C64 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140225B30 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14022C8A4 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x14022CAF0 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14022CCD0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     SeSecurityAttributePresent @ 0x140297AC0 (SeSecurityAttributePresent.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14033DDA8 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1407C79F4 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140A59E14 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140225BA8 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140361A30 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rbx
  const UNICODE_STRING *v3; // rdi
  __int64 v4; // rbp
  char v5; // r12
  const UNICODE_STRING *v8; // rsi
  const UNICODE_STRING *v9; // rcx
  __int64 *v11; // rdi

  v2 = *(const UNICODE_STRING **)(a1 + 8);
  v3 = (const UNICODE_STRING *)(a1 + 8);
  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  if ( v2 == (const UNICODE_STRING *)(a1 + 8) )
  {
LABEL_6:
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 == (__int64 *)(a1 + 32) )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = (const UNICODE_STRING *)(v11 - 2);
      if ( (v11[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v8 + 2, a2) )
          break;
      }
      v11 = (__int64 *)*v11;
      if ( v11 == (__int64 *)(a1 + 32) )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = v2;
      v9 = v2 + 2;
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v9, a2)
         : RtlEqualUnicodeString(v9, a2, 1u) )
      {
        break;
      }
      v2 = *(const UNICODE_STRING **)&v2->Length;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  v5 = 1;
LABEL_7:
  if ( v5 )
    return v8;
  return (const UNICODE_STRING *)v4;
}
