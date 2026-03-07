__int64 __fastcall MiMergePageNodes(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned __int64 *v8; // r12
  _QWORD *v9; // rdi
  bool v10; // bp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 *v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rdx
  bool v21; // zf
  bool i; // zf
  __int64 v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-30h]
  unsigned __int64 *v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v5 = *(_QWORD *)(a2 + 40);
  v6 = 0;
  v24 = v4;
  v26 = v5;
  v25 = 0x40000LL;
  if ( !v3 )
    return v6;
  v8 = (unsigned __int64 *)(a1 + 24);
  do
  {
    v9 = (_QWORD *)*v8;
    v10 = 0;
    if ( !*v8 )
    {
LABEL_7:
      if ( a3 )
      {
        v14 = (_QWORD *)*a3;
        if ( *a3 )
        {
          do
          {
            v15 = (unsigned __int64)v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
          RtlAvlRemoveNode(a3, (unsigned __int64 *)v15);
          *(_QWORD *)(v15 + 24) = v4 & 0x3FFFFFFFFFFFFFFFLL;
          RtlAvlInsertNodeEx(v8, (unsigned __int64)v9, v10, v15);
          goto LABEL_11;
        }
      }
      RtlAvlInsertNodeEx(v8, (unsigned __int64)v9, v10, a2);
      goto LABEL_35;
    }
    v11 = v4 & 0x3FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v12 = v9[3] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v11 < v12 )
      {
        v13 = (_QWORD *)*v9;
        if ( !*v9 )
          goto LABEL_7;
        goto LABEL_21;
      }
      if ( v11 < v9[4] + v12 )
        break;
      v13 = (_QWORD *)v9[1];
      if ( !v13 )
      {
        v10 = 1;
        goto LABEL_7;
      }
LABEL_21:
      v9 = v13;
    }
    v15 = (unsigned __int64)v9;
LABEL_11:
    v16 = (unsigned __int64 *)(v15 + 32);
    RtlMergeBitMapsEx((unsigned __int64 *)(v15 + 32), &v25);
    if ( !_bittest64((const signed __int64 *)(a2 + 24), 0x3Eu) || !_bittest64((const signed __int64 *)(v15 + 24), 0x3Eu) )
      *(_QWORD *)(v15 + 24) &= ~0x4000000000000000uLL;
    v17 = *v16;
    if ( *v16 )
    {
      if ( v17 > 1 )
      {
        v18 = *(__int64 **)(v15 + 40);
        v19 = *v18;
        v20 = &v18[(v17 - 1) >> 6];
        if ( v18 == v20 )
        {
          v21 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17)) & v19) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17);
LABEL_31:
          if ( v21 )
LABEL_32:
            *(_QWORD *)(v15 + 24) |= 0x8000000000000000uLL;
        }
        else
        {
          for ( i = v19 == -1; i; i = *v18 == -1 )
          {
            if ( ++v18 == v20 )
            {
              v21 = (*v18 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v17 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v17 - 1);
              goto LABEL_31;
            }
          }
        }
      }
      else if ( v17 == 1 && _bittest64(*(const signed __int64 **)(v15 + 40), 0) )
      {
        goto LABEL_32;
      }
    }
    v5 = v26;
    v6 = 1;
    v4 = v24;
LABEL_35:
    a3 = v27;
    v5 += 0x8000LL;
    v26 = v5;
    v4 ^= (v4 ^ (v4 + 0x40000)) & 0x3FFFFFFFFFFFFFFFLL;
    v24 = v4;
    v3 -= 0x40000LL;
  }
  while ( v3 );
  return v6;
}
