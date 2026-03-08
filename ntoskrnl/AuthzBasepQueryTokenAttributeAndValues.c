/*
 * XREFs of AuthzBasepQueryTokenAttributeAndValues @ 0x14066C748
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402472F0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14030FED0 (SepCopyTokenIntegrity.c)
 *     AuthzBasepFindTokenAttribute @ 0x14066C6D4 (AuthzBasepFindTokenAttribute.c)
 */

__int64 __fastcall AuthzBasepQueryTokenAttributeAndValues(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 **TokenAttribute; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdx
  unsigned int v8; // r8d
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  *(_DWORD *)(a1 + 36) = 0;
  v17 = 0LL;
  if ( !v1 )
  {
    TokenAttribute = AuthzBasepFindTokenAttribute((const UNICODE_STRING *)(a1 + 16));
    if ( !TokenAttribute )
      return (unsigned int)-1073741275;
    *(_QWORD *)(a1 + 56) = TokenAttribute;
    *(_WORD *)(a1 + 32) = *((_WORD *)TokenAttribute + 6);
    if ( *((_DWORD *)TokenAttribute + 2) == 1 )
    {
      v7 = (__int64 *)(a1 + 64);
      v8 = 2;
      v9 = 0;
      v10 = 2LL;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
      *(_QWORD *)(a1 + 64) = 0LL;
      do
      {
        if ( _bittest64(&v11, v8) )
        {
          ++v9;
          if ( !*v7 )
            *v7 = v10;
        }
        ++v8;
        ++v10;
      }
      while ( v8 <= 0x24 );
      *(_DWORD *)(a1 + 40) = v9;
      if ( !v9 )
        return (unsigned int)-1073741275;
    }
    else
    {
      if ( *((_DWORD *)TokenAttribute + 2) == 2 )
      {
        SepCopyTokenIntegrity(*(_QWORD *)(a1 + 8), (__int64)&v17);
        v7 = (__int64 *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = *(unsigned int *)(v17 + 8);
      }
      else
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL);
        if ( *((_DWORD *)TokenAttribute + 2) == 3 )
        {
          if ( !v5 )
            return (unsigned int)-1073741275;
          v6 = *(unsigned int *)(v5 + 8);
        }
        else
        {
          if ( !v5 )
            return (unsigned int)-1073741275;
          v6 = *(unsigned int *)(v5 + 12);
        }
        v7 = (__int64 *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = v6;
      }
      *(_DWORD *)(a1 + 40) = 1;
    }
    *(_QWORD *)(a1 + 48) = v7;
    return v2;
  }
  if ( *(_DWORD *)(v1 + 8) == 1 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = (_QWORD *)(a1 + 64);
    v14 = *(_DWORD *)(a1 + 64);
    while ( ++v14 <= 0x24 )
    {
      v15 = *(_QWORD *)(v12 + 72);
      if ( _bittest64(&v15, v14) )
      {
        *v13 = v14;
        *(_QWORD *)(a1 + 48) = v13;
        return v2;
      }
    }
  }
  return (unsigned int)-2147483622;
}
