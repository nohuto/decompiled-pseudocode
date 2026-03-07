__int64 __fastcall VrpUpdateKeyInformation(int a1, int *a2, UINT a3, UINT *a4, const void **a5, unsigned int a6)
{
  unsigned int v6; // esi
  UINT *v7; // rbx
  UINT *v8; // r11
  unsigned __int64 v12; // rcx
  _WORD *v13; // r8
  const void **v14; // r15
  int *v15; // r12
  int *v16; // r13
  unsigned int v17; // r9d
  UINT v18; // r9d
  UINT v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int16 v26; // r8
  __m128i v27; // xmm0
  unsigned __int64 v28; // rcx
  _WORD *v29; // rax
  UINT *v30; // [rsp+20h] [rbp-48h]
  _DWORD *v31; // [rsp+28h] [rbp-40h]
  __m128i v32; // [rsp+30h] [rbp-38h] BYREF
  UINT puResult; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0;
  v30 = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  v8 = a4;
  v32 = 0LL;
  switch ( a1 )
  {
    case 0:
      v24 = 4LL;
      v17 = 16;
      v25 = 3LL;
LABEL_29:
      v15 = &a2[v24];
      v26 = 0;
      v16 = &a2[v25];
      v32 = *(__m128i *)a5;
      v27 = v32;
      v32.m128i_i16[0] = 0;
      v28 = (unsigned __int64)(unsigned __int16)_mm_cvtsi128_si32(v27) >> 1;
      if ( v28 )
      {
        v29 = (_WORD *)(v27.m128i_i64[1] - 2 + 2 * v28);
        do
        {
          if ( *v29 == 92 )
            break;
          v26 += 2;
          --v29;
          --v28;
        }
        while ( v28 );
        v32.m128i_i16[0] = v26;
      }
      v32.m128i_i16[1] = v26;
      v32.m128i_i64[1] = v27.m128i_i64[1] + 2 * v28;
      v14 = (const void **)&v32;
      if ( a1 == 1 )
      {
        if ( *v8 < v17 )
          return (unsigned int)-1073741789;
        if ( RtlUIntAdd(*v8, v26, v8) < 0 )
          return (unsigned int)-2147483643;
        goto LABEL_18;
      }
LABEL_17:
      *v8 = (_DWORD)v15 + *(unsigned __int16 *)v14 - (_DWORD)a2;
LABEL_18:
      if ( a3 < v17 )
        return (unsigned int)-1073741789;
      if ( a3 >= *v8 )
      {
        if ( !v7 )
          goto LABEL_25;
        v18 = *v30;
        if ( !*v30 )
          goto LABEL_25;
        v19 = *v7;
        puResult = 0;
        if ( RtlUIntAdd(v19, v18, &puResult) >= 0 && puResult <= a3 )
        {
          v22 = (*(unsigned __int16 *)v14 + 31) & 0xFFFFFFF8;
          memmove((char *)a2 + v22, (char *)a2 + v20, v21);
          memset((char *)a2 + v22 + *v30, 0, a3 - *v30 - (unsigned int)v22);
          *v31 = v22;
LABEL_25:
          memmove(v15, v14[1], *(unsigned __int16 *)v14);
          *v16 = *(unsigned __int16 *)v14;
          return v6;
        }
      }
      return (unsigned int)-2147483643;
    case 1:
      v17 = 24;
      v7 = (UINT *)(a2 + 3);
      v30 = (UINT *)(a2 + 4);
      v31 = a2 + 3;
      v24 = 6LL;
      v25 = 5LL;
      goto LABEL_29;
    case 3:
      v14 = a5;
      v15 = a2 + 1;
      v16 = a2;
      v17 = 4;
      goto LABEL_17;
  }
  if ( a1 != 4 )
  {
    if ( a1 != 8 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v12 = (unsigned __int64)*(unsigned __int16 *)a5 >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v12 )
  {
    v13 = (char *)a5[1] + 2 * v12 - 2;
    do
    {
      if ( *v13 == 92 )
        break;
      --v13;
      --v12;
    }
    while ( v12 );
  }
  a2[8] = *(unsigned __int16 *)a5 - 2 * v12;
  return v6;
}
