char __fastcall sub_1403DFAB0(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD, __int64, __int64),
        _BYTE *a5)
{
  unsigned __int8 *v5; // r14
  __int64 v6; // r8
  unsigned __int8 v8; // si
  _BYTE *v9; // r15
  unsigned __int8 v10; // r12
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  unsigned int v14; // edi
  unsigned __int64 v15; // rbp
  _BYTE *v16; // r8
  _BYTE *v17; // r13
  __int64 v18; // r9
  unsigned __int8 v19; // al
  unsigned __int8 v20; // dl
  unsigned __int64 v21; // rsi
  int v22; // r12d
  unsigned __int64 v23; // rax
  unsigned __int8 *v24; // rcx
  int v25; // edx
  unsigned __int64 *v26; // rax
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // dl
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v34; // [rsp+78h] [rbp+10h]
  __int64 v35; // [rsp+80h] [rbp+18h]
  __int64 (__fastcall *v36)(_QWORD, _QWORD, __int64, __int64); // [rsp+88h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v5 = a5;
  v6 = 2LL;
  v8 = *a5;
  v9 = a5 + 258;
  v10 = a5[1];
  v11 = a5 + 2;
  v34 = *a5;
  LOBYTE(a5) = v10;
  v12 = v9;
  do
  {
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v12[6] = v11[6];
    v12 += 8;
    v13 = v11[7];
    v11 += 8;
    *(v12 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = 0;
  v15 = 0LL;
  if ( (v5[2] & 1) != 0 )
  {
    v15 = retaddr ^ a1;
    retaddr = 0LL;
  }
  v16 = (_BYTE *)a1;
  v17 = (_BYTE *)(a1 + a2);
  v18 = 0LL;
  if ( (_BYTE *)a1 != v17 )
  {
    do
    {
      v19 = v5[++v8 + 2];
      v10 += v19;
      v20 = v5[v10 + 2];
      v5[v10 + 2] = v19;
      v5[v8 + 2] = v20;
      if ( (unsigned int)v18 < 0x400 )
        v18 = (unsigned int)(v18 + 1);
      else
        *v16++ ^= v5[(unsigned __int8)(v5[v10 + 2] + v20) + 2] ^ 0xD9;
    }
    while ( v16 != v17 );
  }
  *v5 = v8;
  v5[1] = v10;
  v21 = (unsigned __int64)&v33 ^ a1;
  v22 = 64;
  v23 = (unsigned __int64)&v33 ^ a1;
  v24 = v5;
  v25 = 64;
  do
  {
    *(_QWORD *)v24 ^= v23;
    v24 += 8;
    v23 = __ROR8__(v23, 3);
    --v25;
  }
  while ( v25 );
  v33 = v23;
  LOBYTE(v26) = v36(0LL, 0LL, v35, v18);
  do
  {
    *(_QWORD *)v5 ^= v21;
    v5 += 8;
    v21 = __ROR8__(v21, 3);
    --v22;
  }
  while ( v22 );
  v27 = (*v9 & 1) == 0;
  v33 = v21;
  if ( !v27 )
  {
    v26 = &retaddr;
    retaddr = a1 ^ v15;
  }
  while ( (_BYTE *)a1 != v17 )
  {
    v28 = ++v34;
    LOBYTE(v26) = v9[v34];
    LOBYTE(a5) = (_BYTE)v26 + (_BYTE)a5;
    v29 = (unsigned __int8)a5;
    v30 = v9[(unsigned __int8)a5];
    v9[(unsigned __int8)a5] = (_BYTE)v26;
    v9[v28] = v30;
    if ( v14 < 0x400 )
    {
      ++v14;
    }
    else
    {
      v26 = (unsigned __int64 *)(unsigned __int8)(v9[v29] + v30);
      *(_BYTE *)a1++ ^= v9[(_QWORD)v26] ^ 0xD9;
    }
  }
  return (char)v26;
}
