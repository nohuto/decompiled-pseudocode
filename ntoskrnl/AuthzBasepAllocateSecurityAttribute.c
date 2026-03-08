/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x1402979A0
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x140296FB0 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402976E0 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

UNICODE_STRING *__fastcall AuthzBasepAllocateSecurityAttribute(PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v3; // rbx

  Pool2 = (UNICODE_STRING *)ExAllocatePool2(
                              KeGetCurrentIrql() < 2u ? 256LL : 64LL,
                              SourceString->Length + 112LL,
                              1950442835LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x70uLL);
    v3[2].MaximumLength = SourceString->Length;
    v3[2].Buffer = &v3[7].Length;
    RtlCopyUnicodeString(v3 + 2, SourceString);
    *(_QWORD *)&v3[5].Length = (char *)v3 + 72;
    v3[4].Buffer = (wchar_t *)&v3[4].Buffer;
    v3[6].Buffer = &v3[6].Length;
    *(_QWORD *)&v3[6].Length = v3 + 6;
  }
  return v3;
}
