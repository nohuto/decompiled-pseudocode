/*
 * XREFs of AuthzBasepCommitSecurityAttributeChanges @ 0x140297AA0
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140297A30 (AuthzBasepFinaliseSecurityAttributesList.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402B87B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14066C88C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCommitSecurityAttributeChanges(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  __int64 v5; // rax
  _QWORD *v6; // rdx
  int v7; // eax
  _QWORD *v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  int v12; // r9d
  __int64 v13; // rdx
  _QWORD *v14; // rax
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v3 = 0;
  if ( (*(_DWORD *)(a2 + 56) & 2) != 0 )
  {
    a3 = *(_QWORD *)(a2 + 16);
    v5 = a2 + 16;
    if ( *(_QWORD *)(a3 + 8) != a2 + 16 )
      goto LABEL_21;
    v6 = *(_QWORD **)(a2 + 24);
    if ( *v6 != v5 )
      goto LABEL_21;
    *v6 = a3;
    *(_QWORD *)(a3 + 8) = v6;
    *(_DWORD *)(a2 + 56) &= ~2u;
    if ( a1 )
      --*(_DWORD *)(a1 + 24);
  }
  v7 = *(_DWORD *)(a2 + 56);
  if ( (v7 & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    AuthzBasepRemoveSecurityAttributeFromLists(a1, a2, a3, 0LL);
    AuthzBasepFreeSecurityAttributeValues(a2, 0LL);
    return 1;
  }
  if ( (v7 & 1) == 0 )
  {
    v8 = *(_QWORD **)(a1 + 16);
    if ( *v8 == a1 + 8 )
    {
      *(_QWORD *)a2 = a1 + 8;
      *(_QWORD *)(a2 + 8) = v8;
      *v8 = a2;
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)(a2 + 56) |= 1u;
      ++*(_DWORD *)a1;
      goto LABEL_10;
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_10:
  v9 = (_QWORD *)(a2 + 96);
  while ( 1 )
  {
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      return v3;
    v11 = v10 - 2;
    v12 = v10[2] & 4;
    if ( (v10[2] & 2) != 0 )
    {
      v13 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_21;
      v14 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v14 != v10 )
        goto LABEL_21;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *((_DWORD *)v11 + 8) &= ~2u;
      --*(_DWORD *)(a2 + 88);
    }
    v15 = v11[4] & 1;
    if ( v12 )
    {
      if ( v15 )
      {
        v18 = *v11;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 )
          goto LABEL_21;
        v19 = (_QWORD *)v11[1];
        if ( (_QWORD *)*v19 != v11 )
          goto LABEL_21;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *((_DWORD *)v11 + 8) &= ~1u;
        --*(_DWORD *)(a2 + 60);
        if ( (v11[4] & 4) != 0 )
          --*(_DWORD *)(a2 + 64);
      }
      ExFreePoolWithTag(v11, 0);
    }
    else if ( !v15 )
    {
      v16 = *(_QWORD **)(a2 + 80);
      if ( *v16 != a2 + 72 )
        goto LABEL_21;
      *v11 = a2 + 72;
      v11[1] = v16;
      *v16 = v11;
      *(_QWORD *)(a2 + 80) = v11;
      *((_DWORD *)v11 + 8) |= 1u;
      ++*(_DWORD *)(a2 + 60);
    }
  }
}
