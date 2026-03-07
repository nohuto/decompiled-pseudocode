__int64 __fastcall AuthzBasepQuerySystemSecurityAttributeAndValues(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 SystemSecurityAttribute; // rax
  __int64 v5; // rdx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    v5 = **(_QWORD **)(a1 + 64);
    if ( v5 == v3 + 72 )
      return (unsigned int)-2147483622;
  }
  else
  {
    SystemSecurityAttribute = AuthzBasepFindSystemSecurityAttribute(a1 + 16);
    if ( !SystemSecurityAttribute )
      return (unsigned int)-1073741275;
    v5 = *(_QWORD *)(SystemSecurityAttribute + 72);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(SystemSecurityAttribute + 60);
    *(_WORD *)(a1 + 32) = *(_WORD *)(SystemSecurityAttribute + 48);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(SystemSecurityAttribute + 52);
    *(_QWORD *)(a1 + 56) = SystemSecurityAttribute;
  }
  *(_QWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 48) = v5 + 40;
  return v2;
}
