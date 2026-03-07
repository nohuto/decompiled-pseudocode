__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r11
  __int64 i; // rdx
  int v7; // eax
  __int64 result; // rax

  AuthzBasepFreeSecurityAttributeValues(a1, 1, a3, a4);
  v5 = a1 + 72;
  for ( i = *(_QWORD *)(a1 + 72); i != v5; i = *(_QWORD *)i )
  {
    v7 = *(_DWORD *)(i + 32);
    if ( (v7 & 2) == 0 )
    {
      *(_DWORD *)(i + 32) = v7 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, i, 0, 1);
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
