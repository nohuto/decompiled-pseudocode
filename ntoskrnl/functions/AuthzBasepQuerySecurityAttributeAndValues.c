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
