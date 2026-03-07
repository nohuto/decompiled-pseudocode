__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v3; // r14
  __int64 *v4; // r12
  unsigned int v5; // ebx
  char v6; // di
  _QWORD *v7; // r13
  __int64 SecurityAttribute; // rax
  __int64 v9; // rsi
  int v10; // ecx
  _QWORD *v11; // rax
  __int64 *i; // rdi
  __int64 v13; // rcx
  _QWORD *Pool2; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  __int64 *v18; // rdi
  __int64 SecurityAttributeValue; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r9
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbp
  void *v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // r9

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  if ( v3 == (__int64 *)(a1 + 8) )
  {
LABEL_20:
    LOBYTE(a2) = 1;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( v6 && (*((_DWORD *)v3 + 13) & 1) != 0 )
      goto LABEL_18;
    SecurityAttribute = AuthzBasepAllocateSecurityAttribute((PCUNICODE_STRING)v3 + 2);
    v9 = SecurityAttribute;
    if ( !SecurityAttribute )
      goto LABEL_38;
    v10 = *((_DWORD *)v3 + 13);
    *(_DWORD *)(SecurityAttribute + 52) = v10;
    if ( v6 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
      *(_DWORD *)(SecurityAttribute + 52) = v10 & 0xFFFFFF7E | 1;
    *(_WORD *)(SecurityAttribute + 48) = *((_WORD *)v3 + 24);
    if ( (*(_DWORD *)(SecurityAttribute + 56) & 2) == 0 )
    {
      a2 = (_QWORD *)v7[5];
      v11 = (_QWORD *)(SecurityAttribute + 16);
      if ( (_QWORD *)*a2 != v7 + 4 )
LABEL_45:
        __fastfail(3u);
      *v11 = v7 + 4;
      *(_QWORD *)(v9 + 24) = a2;
      *a2 = v11;
      v7[5] = v11;
      *(_DWORD *)(v9 + 56) |= 2u;
      ++*((_DWORD *)v7 + 6);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_9:
    for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
    {
      v13 = 256LL;
      if ( KeGetCurrentIrql() >= 2u )
        v13 = 64LL;
      Pool2 = (_QWORD *)ExAllocatePool2(v13, 64LL, 1950442835LL);
      v15 = Pool2;
      if ( !Pool2 )
        goto LABEL_38;
      memset(Pool2, 0, 0x40uLL);
      v15[5] = i[5];
      if ( (v15[4] & 2) == 0 )
      {
        a2 = *(_QWORD **)(v9 + 104);
        v16 = v15 + 2;
        if ( *a2 != v9 + 96 )
          goto LABEL_45;
        *v16 = v9 + 96;
        v15[3] = a2;
        *a2 = v16;
        *(_QWORD *)(v9 + 104) = v16;
        *((_DWORD *)v15 + 8) |= 2u;
        ++*(_DWORD *)(v9 + 88);
      }
    }
LABEL_17:
    v6 = a3;
LABEL_18:
    v3 = (__int64 *)*v3;
    if ( v3 == v4 )
    {
      v5 = 0;
      goto LABEL_20;
    }
  }
  switch ( *((_WORD *)v3 + 24) )
  {
    case 1:
    case 6:
      goto LABEL_9;
    case 3:
      v18 = (__int64 *)v3[9];
      if ( v18 == v3 + 9 )
        goto LABEL_17;
      while ( 1 )
      {
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v18 + 20));
        v20 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_38;
        *(_WORD *)(SecurityAttributeValue + 40) = 0;
        *(_WORD *)(SecurityAttributeValue + 42) = *((_WORD *)v18 + 20);
        *(_QWORD *)(SecurityAttributeValue + 48) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v18 + 5));
        if ( (*(_DWORD *)(v20 + 32) & 2) == 0 )
        {
          a2 = *(_QWORD **)(v9 + 104);
          v21 = (_QWORD *)(v20 + 16);
          if ( *a2 != v9 + 96 )
            goto LABEL_45;
          *v21 = v9 + 96;
          *(_QWORD *)(v20 + 24) = a2;
          *a2 = v21;
          *(_QWORD *)(v9 + 104) = v21;
          *(_DWORD *)(v20 + 32) |= 2u;
          ++*(_DWORD *)(v9 + 88);
        }
        v18 = (__int64 *)*v18;
        if ( v18 == v3 + 9 )
          goto LABEL_17;
      }
    case 4:
      v26 = (__int64 *)v3[9];
      if ( v26 == v3 + 9 )
        goto LABEL_17;
      while ( 1 )
      {
        v27 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v26 + 24));
        v28 = v27;
        if ( !v27 )
          goto LABEL_38;
        v29 = (void *)(v27 + 64);
        *(_QWORD *)(v27 + 40) = v26[5];
        v30 = *((unsigned __int16 *)v26 + 24);
        *(_WORD *)(v28 + 48) = v30;
        *(_QWORD *)(v28 + 56) = v28 + 64;
        memmove(v29, (const void *)v26[7], v30);
        LOBYTE(v31) = 1;
        AuthzBasepAddSecurityAttributeValueToLists(v9, v28, 0LL, v31);
        v26 = (__int64 *)*v26;
        if ( v26 == v3 + 9 )
          goto LABEL_17;
      }
    case 5:
    case 0x10:
      v22 = (__int64 *)v3[9];
      if ( v22 == v3 + 9 )
        goto LABEL_17;
      break;
    default:
      v5 = -1073741811;
      goto LABEL_39;
  }
  while ( 1 )
  {
    v23 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v22 + 12));
    v24 = v23;
    if ( !v23 )
      break;
    *(_QWORD *)(v23 + 40) = v23 + 64;
    *(_DWORD *)(v23 + 48) = *((_DWORD *)v22 + 12);
    memmove((void *)(v23 + 64), (const void *)v22[5], *((unsigned int *)v22 + 12));
    LOBYTE(v25) = 1;
    AuthzBasepAddSecurityAttributeValueToLists(v9, v24, 0LL, v25);
    v22 = (__int64 *)*v22;
    if ( v22 == v3 + 9 )
      goto LABEL_17;
  }
LABEL_38:
  v5 = -1073741670;
LABEL_39:
  LOBYTE(a2) = 0;
LABEL_21:
  AuthzBasepFinaliseSecurityAttributesList(v7, a2);
  return v5;
}
