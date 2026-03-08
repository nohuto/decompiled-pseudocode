/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x1402472F0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140247208 (SepCanTokenMatchAllPackageSid.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1402EF4D0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     AuthzBasepGetNextValue @ 0x1403656C8 (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1403664A4 (AuthzBasepRestartOperandValueEnumeration.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1402478D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x14066C748 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x14070B7B8 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 SecurityAttribute; // rax
  __int64 v8; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return (unsigned int)AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return (unsigned int)AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( v2 )
  {
    v8 = **(_QWORD **)(a1 + 64);
    if ( v8 == v2 + 72 )
      return (unsigned int)-2147483622;
    goto LABEL_11;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(v4, a1 + 16);
    if ( SecurityAttribute )
    {
      v8 = *(_QWORD *)(SecurityAttribute + 72);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(SecurityAttribute + 60);
      *(_WORD *)(a1 + 32) = *(_WORD *)(SecurityAttribute + 48);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(SecurityAttribute + 52);
      *(_QWORD *)(a1 + 56) = SecurityAttribute;
LABEL_11:
      *(_QWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 48) = v8 + 40;
      return v3;
    }
  }
  return (unsigned int)-1073741275;
}
