/*
 * XREFs of MiOrderTrimList @ 0x14046378E
 * Callers:
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140229574 (MiIsStoreProcess.c)
 *     MiComputeAgeDistribution @ 0x1402CFD44 (MiComputeAgeDistribution.c)
 *     MiUpdateClaimDistribution @ 0x1402CFEB0 (MiUpdateClaimDistribution.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiWorkingSetVeryLarge @ 0x140619F94 (MiWorkingSetVeryLarge.c)
 */

unsigned __int64 __fastcall MiOrderTrimList(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // r14
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r12
  _QWORD *v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rax
  _QWORD *v25; // r9
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  unsigned __int64 v29; // [rsp+28h] [rbp-150h]
  _BYTE Src[64]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v31[24]; // [rsp+70h] [rbp-108h] BYREF

  memset(Src, 0, sizeof(Src));
  v3 = (_QWORD *)(a1 + 16928);
  if ( (_QWORD *)*v3 == v3 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 16920);
  v6 = v31;
  v7 = 0LL;
  v29 = 0LL;
  v8 = 12LL;
  do
  {
    v6[1] = v6;
    *v6 = v6;
    v6 += 2;
    --v8;
  }
  while ( v8 );
  v9 = 2LL;
  while ( 1 )
  {
    v10 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( (_QWORD *)v10[1] != v3 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
LABEL_34:
      __fastfail(3u);
    *v3 = v11;
    v12 = v10 - 3;
    *(_QWORD *)(v11 + 8) = v3;
    MiUpdateClaimDistribution((__int64)(v10 - 3), (__int64)Src);
    if ( a2 )
    {
      v13 = 0LL;
      if ( a2 < 8 )
      {
        v14 = &v12[a2 + 5];
        v15 = 8 - a2;
        do
        {
          v16 = *v14++;
          v13 += v16;
          --v15;
        }
        while ( v15 );
      }
    }
    else if ( v12[18] <= v12[14] )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = v12[18] - v12[14];
    }
    if ( (v12[23] & 7) == 0 && (unsigned int)MiIsStoreProcess((__int64)(v10 - 211)) )
      goto LABEL_31;
    if ( *((_BYTE *)v12 + 186) == 2 && !(unsigned int)MiWorkingSetVeryLarge(v10 - 3, 0LL) )
    {
      v17 = 10;
      goto LABEL_32;
    }
    if ( v13 && (*((char *)v12 + 184) >= 0 || v12[18] > v12[14]) )
    {
      v17 = 0;
      while ( v13 < 0x100000uLL >> v17 )
      {
        if ( ++v17 >= 9 )
        {
          if ( v17 >= 0xA )
            goto LABEL_32;
          break;
        }
      }
      v18 = -1LL;
      if ( v29 + v13 >= v29 )
        v18 = v29 + v13;
      v29 = v18;
    }
    else
    {
LABEL_31:
      v17 = 11;
    }
LABEL_32:
    v19 = &v31[2 * v17];
    v20 = *v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      goto LABEL_34;
    *v10 = v20;
    v10[1] = v19;
    *(_QWORD *)(v20 + 8) = v10;
    *v19 = v10;
  }
  v21 = 0;
  v22 = v31;
  while ( 1 )
  {
    v23 = v21 + 1;
    if ( (_QWORD *)*v22 != v22 )
      break;
    v22 += 2;
    ++v21;
    if ( v23 >= 0xC )
      goto LABEL_45;
  }
  v24 = v31[2 * v21];
  *v3 = v24;
  *(_QWORD *)(v24 + 8) = v3;
  if ( v23 < 0xC )
  {
    v25 = &v31[2 * v23];
    do
    {
      if ( (_QWORD *)*v25 != v25 )
      {
        *(_QWORD *)v31[2 * v21 + 1] = *v25;
        *(_QWORD *)(*v25 + 8LL) = v31[2 * v21 + 1];
        v21 = v23;
      }
      ++v23;
      v25 += 2;
    }
    while ( v23 < 0xC );
  }
  v26 = (_QWORD *)v31[2 * v21 + 1];
  *(_QWORD *)(a1 + 16936) = v26;
  *v26 = v3;
LABEL_45:
  memmove((void *)(v5 + 2416), Src, 0x40uLL);
  v27 = (_QWORD *)(v5 + 2464);
  do
  {
    v7 += *v27++;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)(v5 + 2408) = v7;
  *(_WORD *)(v5 + 2346) = MiComputeAgeDistribution(a1, 0);
  result = v29;
  *(_BYTE *)(v5 + 54) = 1;
  return result;
}
