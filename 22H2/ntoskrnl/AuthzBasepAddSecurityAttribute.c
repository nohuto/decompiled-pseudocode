/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x140250284
 * Callers:
 *     AuthzBasepReplaceSecurityAttribute @ 0x140250214 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402506CC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14024E560 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x140250330 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140250680 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1402D6B00 (AuthzBasepAllocateSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const UNICODE_STRING *SecurityAttribute; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r11
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 24) == 0;
  v11 = 0LL;
  if ( v2 )
    return 3221225485LL;
  v11.Length = *(_WORD *)a2;
  v11.MaximumLength = v11.Length;
  v11.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v11);
  v7 = (__int64)SecurityAttribute;
  if ( SecurityAttribute )
  {
    LODWORD(SecurityAttribute[3].Buffer) &= ~4u;
    goto LABEL_5;
  }
  v8 = AuthzBasepAllocateSecurityAttribute(&v11);
  v7 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v8 + 48) = *(_WORD *)(a2 + 16);
LABEL_5:
    LOBYTE(v6) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, v7, 0LL, v6);
    return AuthzBasepAddSecurityAttributeValues(v9, a2);
  }
  return 3221225626LL;
}
