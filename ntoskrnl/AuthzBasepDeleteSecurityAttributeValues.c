__int64 __fastcall AuthzBasepDeleteSecurityAttributeValues(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int16 v3; // ax
  unsigned int v4; // edi
  unsigned int i; // esi
  __int64 v9; // rdx
  __int64 SecurityAttributeValue; // rax
  __int64 v11; // r9
  _DWORD *v12; // r14
  int v13; // eax
  unsigned int v14; // ecx

  v3 = *(_WORD *)(a2 + 16);
  v4 = 0;
  *a3 = 0;
  if ( *(_WORD *)(a1 + 48) != v3 )
    return (unsigned int)-1073741811;
  for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
  {
    if ( *(_WORD *)(a1 + 48) == 1 || *(_WORD *)(a1 + 48) == 2 )
    {
LABEL_13:
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * i);
      goto LABEL_14;
    }
    if ( *(_WORD *)(a1 + 48) != 3 )
    {
      if ( *(_WORD *)(a1 + 48) == 4 )
      {
        v9 = *(_QWORD *)(a2 + 32) + 24LL * i;
        goto LABEL_14;
      }
      if ( *(_WORD *)(a1 + 48) != 5 )
      {
        if ( *(_WORD *)(a1 + 48) == 6 )
          goto LABEL_13;
        if ( *(_WORD *)(a1 + 48) != 16 )
          return (unsigned int)-1073741811;
      }
    }
    v9 = *(_QWORD *)(a2 + 32) + 16LL * i;
LABEL_14:
    SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v9, *(_WORD *)(a1 + 48));
    v12 = (_DWORD *)SecurityAttributeValue;
    if ( !SecurityAttributeValue )
      return (unsigned int)-1073741275;
    v13 = *(_DWORD *)(SecurityAttributeValue + 32);
    if ( (v13 & 4) != 0 )
      return (unsigned int)-1073741275;
    if ( (v13 & 1) != 0 )
    {
      v12[8] = v13 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, (__int64)v12, 0, 1);
      ++*(_DWORD *)(a1 + 64);
    }
    else
    {
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v12, 0LL, v11);
      ExFreePoolWithTag(v12, 0);
    }
  }
  v14 = *(_DWORD *)(a1 + 60);
  if ( v14 == *(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 88) <= v14 )
    *a3 = 1;
  return v4;
}
