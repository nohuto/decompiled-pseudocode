/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800FC6C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     GetNextWchar @ 0x1800FC554 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800FC64C (RtlComputeLfnChecksum.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  char v8; // r12
  unsigned int v9; // ebp
  char v10; // r8
  __int16 NextWchar; // ax
  unsigned int v12; // edi
  bool v13; // zf
  unsigned __int16 v14; // ax
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int16 v17; // r11
  unsigned int i; // r8d
  __int16 v19; // dx
  __int64 v20; // rax
  __int16 v21; // dx
  unsigned int v22; // esi
  unsigned int j; // edi
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // r9d
  unsigned __int16 v28; // ax
  int v29; // r11d
  unsigned __int16 v30; // r9
  __int64 v31; // r8
  _WORD *v32; // r10
  __int16 v33; // ax
  unsigned __int16 v34; // cx
  unsigned int v35; // edi
  char v36; // r15
  __int64 v37; // rax
  char v38; // cl
  __int16 v39; // r8
  __int64 v40; // rbp
  _WORD *v41; // r14
  unsigned __int16 v42; // ax
  unsigned __int16 v43; // cx
  int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // r8d
  int v48; // eax
  unsigned int v50; // [rsp+24h] [rbp-64h] BYREF
  __int64 v51; // [rsp+28h] [rbp-60h]
  unsigned int v52[6]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v51 = a4;
  if ( !a2 || (v8 = 1, !NlsMbOemCodePageTag) )
    v8 = 0;
  if ( !*(_BYTE *)(a3 + 3) )
  {
    v9 = -1;
    v50 = 0;
    if ( !*a1 || (v10 = 1, **((_WORD **)a1 + 1) != 46) )
      v10 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(a1, &v50, v10, a2);
      if ( !NextWchar )
        break;
      v10 = 0;
      if ( NextWchar == 46 )
        v9 = v50;
    }
    v12 = 0;
    v13 = v9 == *a1 >> 1;
    v50 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    if ( v13 )
      v9 = -1;
    v52[0] = v9;
    while ( 1 )
    {
      v14 = GetNextWchar(a1, &v50, 1, a2);
      v15 = v14;
      if ( !v14 || v50 >= v9 || v4 >= 6u )
        break;
      if ( v8 )
      {
        if ( v14 <= 0x7Fu || (v16 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v15 + 1)) )
          v16 = 1;
        v12 += v16;
        if ( v12 > 6 )
          break;
      }
      *(_WORD *)(a3 + 2LL * v4 + 4) = v15;
      v4 = ++*(_BYTE *)(a3 + 3);
    }
    if ( !v8 )
      v12 = v4;
    if ( v12 <= 2 )
    {
      v17 = RtlComputeLfnChecksum(a1);
      *(_WORD *)a3 = v17;
      for ( i = 0; i < 4; ++i )
      {
        v19 = 48;
        if ( (v17 & 0xFu) > 9 )
          v19 = 55;
        v20 = i + *(unsigned __int8 *)(a3 + 3);
        v21 = (v17 & 0xF) + v19;
        v17 >>= 4;
        *(_WORD *)(a3 + 2 * v20 + 4) = v21;
      }
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v9 == -1 )
    {
      *(_DWORD *)(a3 + 20) = 0;
    }
    else
    {
      *(_WORD *)(a3 + 24) = 46;
      v22 = 1;
      *(_DWORD *)(a3 + 20) = 1;
      for ( j = 1; ; j = *(_DWORD *)(a3 + 20) )
      {
        v24 = GetNextWchar(a1, v52, 1, a2);
        v25 = v24;
        if ( !v24 )
          break;
        if ( j >= 4 )
          goto LABEL_41;
        if ( v8 )
        {
          if ( v24 <= 0x7Fu || (v26 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v25 + 1)) )
            v26 = 1;
          v22 += v26;
          if ( v22 > 4 )
          {
LABEL_41:
            *(_WORD *)(a3 + 2LL * (j - 1) + 24) = 126;
            break;
          }
        }
        *(_WORD *)(a3 + 2LL * j + 24) = v25;
        ++*(_DWORD *)(a3 + 20);
      }
    }
  }
  v27 = *(_DWORD *)(a3 + 32) + 1;
  *(_DWORD *)(a3 + 32) = v27;
  if ( v27 > 4 && !*(_BYTE *)(a3 + 2) )
  {
    v28 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v28;
    v30 = v28;
    if ( 2 - v29 < (unsigned int)(6 - v29) )
    {
      v31 = 4LL;
      v32 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v29) + 2LL));
      do
      {
        v33 = 48;
        v34 = v30 & 0xF;
        if ( v34 > 9u )
          v33 = 55;
        v30 >>= 4;
        *v32++ = v34 + v33;
        --v31;
      }
      while ( v31 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v29;
    v27 = 1;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v35 = 1;
  v36 = 1;
  do
  {
    if ( !v27 )
      break;
    v37 = 8 - v35++;
    v38 = 0;
    v39 = v27 % 0xA + 48;
    v27 /= 0xAu;
    *((_WORD *)&v52[2] + v37) = v39;
    if ( v39 == 57 )
      v38 = v36;
    v36 = v38;
  }
  while ( v35 <= 7 );
  v40 = v51;
  v41 = (_WORD *)&v52[2] + 8 - v35;
  *v41 = 126;
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 3) - 1) > 0xBu )
  {
    v42 = 0;
  }
  else
  {
    memmove(*(void **)(v40 + 8), (const void *)(a3 + 4), 2LL * *(unsigned __int8 *)(a3 + 3));
    v42 = 2 * *(unsigned __int8 *)(a3 + 3);
  }
  *(_WORD *)v40 = v42;
  memmove((void *)(*(_QWORD *)(v40 + 8) + 2 * ((unsigned __int64)v42 >> 1)), v41, 2 * v35);
  v43 = *(_WORD *)v40 + 2 * v35;
  *(_WORD *)v40 = v43;
  v44 = *(_DWORD *)(a3 + 20);
  if ( v44 )
  {
    memmove(
      (void *)(*(_QWORD *)(v40 + 8) + 2 * ((unsigned __int64)v43 >> 1)),
      (const void *)(a3 + 24),
      (unsigned int)(2 * v44));
    *(_WORD *)v40 += 2 * *(_WORD *)(a3 + 20);
  }
  if ( !v36 )
    return 0LL;
  v45 = *(unsigned __int8 *)(a3 + 3);
  if ( v8 )
  {
    v46 = 0;
    v47 = 0;
    if ( (_BYTE)v45 )
    {
      do
      {
        if ( *(_WORD *)(a3 + 2LL * v46 + 4) <= 0x7Fu
          || (v48 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * *(unsigned __int16 *)(a3 + 2LL * v46 + 4) + 1)) )
        {
          v48 = 1;
        }
        v47 += v48;
        if ( v47 > 7 - v35 )
          break;
        ++v46;
      }
      while ( v46 < v45 );
    }
  }
  else
  {
    LOBYTE(v46) = v45 - 1;
  }
  *(_BYTE *)(a3 + 3) = v46;
  if ( (_BYTE)v46 )
    return 0LL;
  else
    return 3221226535LL;
}
