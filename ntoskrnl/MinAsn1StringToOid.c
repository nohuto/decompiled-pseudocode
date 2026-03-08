/*
 * XREFs of MinAsn1StringToOid @ 0x140A6EE24
 * Callers:
 *     I_MinCryptCheckEKURequirements @ 0x140A6DC80 (I_MinCryptCheckEKURequirements.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall MinAsn1StringToOid(_BYTE *a1, _BYTE **a2)
{
  __int64 v2; // rbx
  int v3; // r9d
  _BYTE *v5; // r10
  char v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  char v10; // dl
  int v11; // eax
  unsigned int v12; // esi
  char v13; // cl
  unsigned int v14; // r13d
  char *v15; // r12
  unsigned int *v16; // r14
  unsigned int v17; // ecx
  size_t v18; // rax
  char v19; // dl
  char v20; // r9
  char v21; // r8
  size_t v22; // r15
  _BYTE *v23; // rcx
  char Src; // [rsp+28h] [rbp-69h] BYREF
  char v26; // [rsp+29h] [rbp-68h]
  char v27; // [rsp+2Ah] [rbp-67h]
  char v28; // [rsp+2Bh] [rbp-66h]
  char v29; // [rsp+2Ch] [rbp-65h]
  int v30; // [rsp+38h] [rbp-59h]
  unsigned int v31; // [rsp+3Ch] [rbp-55h]
  char v32; // [rsp+40h] [rbp-51h] BYREF

  v2 = 0LL;
  v3 = 0;
  v5 = a1;
  if ( !a1 )
    return 0xFFFFFFFFLL;
  v30 = 0;
  v6 = *a1;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      if ( (unsigned int)(v3 - 1) > 9 )
        return 0xFFFFFFFFLL;
      if ( v6 != 46 )
        return 0xFFFFFFFFLL;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= 0x1F )
        return 0xFFFFFFFFLL;
      *(&v30 + v2) = 0;
      v3 = 0;
    }
    else
    {
      v7 = *(&v30 + v2);
      v8 = v6 + 2 * (v7 + 4 * (v7 - 6));
      if ( v8 < v7 )
        return 0xFFFFFFFFLL;
      *(&v30 + v2) = v8;
      ++v3;
    }
    v6 = *++v5;
  }
  while ( *v5 );
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v9 = v2 + 1;
  if ( v9 < 2 )
    return 0xFFFFFFFFLL;
  v10 = v31;
  if ( v31 >= 0x28 || v31 + 40 * v30 > 0x7F || *(_DWORD *)a2 < 3u )
    return 0xFFFFFFFFLL;
  v11 = 130;
  v12 = 3;
  if ( *(_DWORD *)a2 < 0x82u )
    v11 = *(_DWORD *)a2;
  v13 = v30;
  *(_DWORD *)a2 = v11;
  v14 = 2;
  *a2[1] = 6;
  a2[1][2] = v10 + 40 * v13;
  v15 = a2[1] + 3;
  if ( v9 > 2 )
  {
    v16 = (unsigned int *)&v32;
    while ( 1 )
    {
      v17 = *v16;
      if ( *v16 < 0x80 )
        break;
      if ( v17 >= 0x4000 )
      {
        v19 = (v17 >> 14) | 0x80;
        if ( v17 >= 0x200000 )
        {
          v20 = v17 & 0x7F;
          v21 = (v17 >> 21) | 0x80;
          if ( v17 >= 0x10000000 )
          {
            v28 = (v17 >> 7) | 0x80;
            LOBYTE(v17) = (v17 >> 28) | 0x80;
            v26 = v21;
            v18 = 5LL;
            v27 = v19;
            v29 = v20;
            goto LABEL_29;
          }
          v27 = (v17 >> 7) | 0x80;
          v18 = 4LL;
          Src = (v17 >> 21) | 0x80;
          v26 = (v17 >> 14) | 0x80;
          v28 = v17 & 0x7F;
        }
        else
        {
          v26 = (v17 >> 7) | 0x80;
          Src = (v17 >> 14) | 0x80;
          v27 = v17 & 0x7F;
          v18 = 3LL;
        }
      }
      else
      {
        Src = (v17 >> 7) | 0x80;
        v26 = v17 & 0x7F;
        v18 = 2LL;
      }
LABEL_30:
      v12 += v18;
      v22 = v18;
      if ( v12 > *(_DWORD *)a2 )
        return 0xFFFFFFFFLL;
      memmove(v15, &Src, v18);
      v15 += v22;
      ++v14;
      ++v16;
      if ( v14 >= v9 )
        goto LABEL_32;
    }
    v18 = 1LL;
LABEL_29:
    Src = v17;
    goto LABEL_30;
  }
LABEL_32:
  v23 = a2[1];
  *(_DWORD *)a2 = v12;
  v23[1] = v12 - 2;
  return *(unsigned int *)a2;
}
