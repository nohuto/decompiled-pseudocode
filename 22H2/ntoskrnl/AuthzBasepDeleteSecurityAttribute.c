/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x14024FC5C
 * Callers:
 *     AuthzBasepReplaceSecurityAttribute @ 0x140250214 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402506CC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14024E560 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140250680 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140322C84 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140322CD4 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x140329DAC (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1405C11D4 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v3; // edi
  const UNICODE_STRING *SecurityAttribute; // rax
  __int64 v6; // r9
  UNICODE_STRING *v7; // rbx
  __int64 v9; // r9
  UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v3 = 0;
  v11 = 0;
  v10.Length = *(_WORD *)a2;
  v10.MaximumLength = v10.Length;
  v10.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v10);
  v7 = (UNICODE_STRING *)SecurityAttribute;
  if ( !SecurityAttribute || ((__int64)SecurityAttribute[3].Buffer & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    LOBYTE(v6) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, SecurityAttribute, 0LL, v6);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v3 = AuthzBasepDeleteSecurityAttributeValues(v7, a2, &v11);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v11 )
        LODWORD(v7[3].Buffer) |= 4u;
    }
    else
    {
      LODWORD(v7[3].Buffer) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v7);
    }
    if ( ((__int64)v7[3].Buffer & 5) == 4 )
    {
      LOBYTE(v9) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v7, 0LL, v9);
      AuthzBasepFreeSecurityAttributeValues(v7, 0LL);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return (unsigned int)v3;
}
