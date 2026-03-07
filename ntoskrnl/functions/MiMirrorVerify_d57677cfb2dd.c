__int64 __fastcall MiMirrorVerify(__int64 a1)
{
  int v1; // ebp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rbx
  __int64 i; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  __int64 *v15; // r8
  _QWORD *v16; // rax
  __int64 j; // r9
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned __int64 k; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  v4 = 0LL;
  do
  {
    v5 = v4 & -(__int64)(v4 < (unsigned __int64)xmmword_140C67B10);
    v6 = xmmword_140C67B10 - 1;
    while ( 1 )
    {
      if ( v6 - v5 == -1LL )
        goto LABEL_6;
      v8 = (_QWORD *)(*((_QWORD *)&xmmword_140C67B10 + 1) + 8 * (v5 >> 6));
      for ( i = ~*v8 | ((1LL << (v5 & 0x3F)) - 1); i == -1; i = ~*v8 )
      {
        if ( (unsigned __int64)++v8 > *((_QWORD *)&xmmword_140C67B10 + 1) + 8 * (v6 >> 6) )
          goto LABEL_6;
      }
      _BitScanForward64(&v10, ~i);
      v7 = v10 + (((__int64)v8 - *((_QWORD *)&xmmword_140C67B10 + 1)) >> 3 << 6);
      if ( v7 > v6 )
      {
LABEL_6:
        v7 = -1LL;
      }
      else if ( v7 != -1LL )
      {
        break;
      }
      if ( !v5 )
        break;
      v11 = v4 + 1;
      if ( v4 + 1 > (unsigned __int64)xmmword_140C67B10 )
        v11 = xmmword_140C67B10;
      v6 = v11 - 1;
      v5 = 0LL;
    }
    if ( v7 < v4 || v7 == -1LL )
      break;
    v12 = 0LL;
    v13 = xmmword_140C67B10;
    if ( (unsigned __int64)xmmword_140C67B10 > v7 )
    {
      v14 = *((_QWORD *)&xmmword_140C67B10 + 1) + 8 * ((unsigned __int64)(xmmword_140C67B10 - 1) >> 6);
      v15 = (__int64 *)(*((_QWORD *)&xmmword_140C67B10 + 1) + 8 * (v7 >> 6));
      v16 = v15 + 1;
      for ( j = ((1LL << (v7 & 0x3F)) - 1) | *v15; ; j = *v15 )
      {
        v18 = ~j;
        if ( v18 )
          break;
        if ( (unsigned __int64)v16 > v14 )
        {
          v13 = xmmword_140C67B10;
LABEL_26:
          v20 = v13;
          goto LABEL_36;
        }
        ++v15;
        ++v16;
      }
      _BitScanForward64((unsigned __int64 *)&v19, v18);
      v20 = (unsigned int)v19 + (((__int64)v15 - *((_QWORD *)&xmmword_140C67B10 + 1)) >> 3 << 6);
      v13 = xmmword_140C67B10;
      if ( v20 > (unsigned __int64)xmmword_140C67B10 )
        goto LABEL_26;
      for ( k = ~(v18 | ((1LL << v19) - 1)); !k; k = *v22 )
      {
        v22 = (unsigned __int64 *)(v15 + 1);
        if ( (unsigned __int64)(v15 + 1) > v14 )
        {
          k = 64LL;
          goto LABEL_33;
        }
        ++v15;
      }
      _BitScanForward64(&k, k);
LABEL_33:
      v23 = k + (((__int64)v15 - *((_QWORD *)&xmmword_140C67B10 + 1)) >> 3 << 6);
      v13 = xmmword_140C67B10;
      if ( v23 > (unsigned __int64)xmmword_140C67B10 )
        v23 = xmmword_140C67B10;
      v12 = v23 - v20;
LABEL_36:
      if ( v12 )
        goto LABEL_43;
    }
    v20 = v13;
LABEL_43:
    v24 = v20 - v7;
    v1 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 24))(v7 << 12, v24 << 12);
    if ( v1 < 0 )
      break;
    v4 = v24 + v12 + v7;
  }
  while ( v4 < (unsigned __int64)xmmword_140C67B10 );
  return (unsigned int)v1;
}
