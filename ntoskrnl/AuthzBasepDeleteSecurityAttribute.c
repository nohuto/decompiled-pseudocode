/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x140297E80
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14029705C (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140297E14 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1402478D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140297DC8 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402B87B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14066C504 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14066C5AC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14066C88C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 *SecurityAttribute; // rax
  __int64 *v6; // rbx
  __int64 v8; // r9
  UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = 0;
  v10 = 0;
  v9.Length = *(_WORD *)a2;
  v9.MaximumLength = v9.Length;
  v9.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v9);
  v6 = SecurityAttribute;
  if ( !SecurityAttribute || (SecurityAttribute[7] & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists(a1, (__int64)SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v3 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v10);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v10 )
        *((_DWORD *)v6 + 14) |= 4u;
    }
    else
    {
      *((_DWORD *)v6 + 14) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6);
    }
    if ( (v6[7] & 5) == 4 )
    {
      LOBYTE(v8) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v6, 0LL, v8);
      AuthzBasepFreeSecurityAttributeValues(v6, 0LL);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (unsigned int)v3;
}
