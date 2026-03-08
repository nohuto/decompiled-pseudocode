/*
 * XREFs of CheckBMPNeedFixup @ 0x1C014B848
 * Callers:
 *     SetupAAHeader @ 0x1C025E588 (SetupAAHeader.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ComputeByteOffset @ 0x1C0253DA4 (ComputeByteOffset.c)
 *     IntersectRECTL @ 0x1C0254010 (IntersectRECTL.c)
 */

__int64 __fastcall CheckBMPNeedFixup(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // r15
  unsigned int v6; // edi
  int v9; // eax
  __m128i v10; // xmm2
  int v11; // r13d
  __int128 v12; // xmm1
  int v13; // r11d
  __int64 v14; // xmm0_8
  __int128 v15; // xmm1
  int v16; // eax
  int v17; // edx
  int v18; // r10d
  int v19; // r11d
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r14d
  int v24; // esi
  __int64 result; // rax
  int v26; // edi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  char *v29; // r12
  __int64 v30; // rax
  int v31; // r14d
  unsigned int *v32; // r13
  __int64 v33; // rax
  unsigned int *v34; // r8
  _BYTE *v35; // rdx
  unsigned __int64 v36; // r15
  unsigned int v37; // eax
  unsigned int *i; // rcx
  int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-79h]
  int v41; // [rsp+24h] [rbp-75h]
  int v42; // [rsp+28h] [rbp-71h]
  __int64 v43; // [rsp+30h] [rbp-69h] BYREF
  int v44; // [rsp+38h] [rbp-61h]
  int v45; // [rsp+3Ch] [rbp-5Dh]
  unsigned int *v46; // [rsp+40h] [rbp-59h]
  unsigned int *v47; // [rsp+48h] [rbp-51h]
  __m128i v48; // [rsp+50h] [rbp-49h] BYREF
  __int128 v49; // [rsp+60h] [rbp-39h]
  __int128 v50; // [rsp+70h] [rbp-29h]
  __int128 v51; // [rsp+80h] [rbp-19h]
  __int128 v52; // [rsp+90h] [rbp-9h]
  __int64 v53; // [rsp+A0h] [rbp+7h]

  v4 = *a4;
  v5 = a4;
  v6 = *(unsigned __int8 *)(a3 + 10);
  v47 = a4;
  if ( (v4 & 0x40) == 0 )
    return 0LL;
  if ( v6 > 6 )
  {
    if ( v6 != 252 && v6 != 253 && v6 != 254 )
    {
      if ( v6 != 255 )
        goto LABEL_55;
      goto LABEL_18;
    }
  }
  else if ( v6 != 6 )
  {
    if ( v6 != 1 && v6 != 2 )
    {
      if ( v6 != 3 && v6 - 4 > 1 )
        goto LABEL_55;
      goto LABEL_8;
    }
LABEL_18:
    result = 1LL;
    *a4 = v4 | 0x240;
    return result;
  }
LABEL_8:
  v9 = *(_DWORD *)(a3 + 12);
  v43 = 0LL;
  v44 = v9;
  v45 = *(_DWORD *)(a3 + 16);
  if ( !(unsigned int)IntersectRECTL(&v43, a4 + 16) )
    return 0LL;
  v10 = *(__m128i *)(a2 + 8);
  v11 = v45 - HIDWORD(v43);
  v12 = *(_OWORD *)(a2 + 40);
  v13 = *(_DWORD *)(a3 + 20);
  v49 = *(_OWORD *)(a2 + 24);
  v51 = *(_OWORD *)(a2 + 56);
  v14 = *(_QWORD *)(a2 + 88);
  v50 = v12;
  v15 = *(_OWORD *)(a2 + 72);
  HIDWORD(v51) = v13;
  v48 = v10;
  v53 = v14;
  v52 = v15;
  v48.m128i_i8[0] = _mm_cvtsi128_si32(v10) & 0xF3;
  DWORD1(v51) = v45 - HIDWORD(v43);
  v16 = ComputeByteOffset(v6, (unsigned int)v43, &v48.m128i_i8[1]);
  v17 = v44 - v43;
  v42 = v44 - v43;
  LODWORD(v51) = v44 - v43;
  v20 = *(_QWORD *)(a3 + 24) + v19 * v18 + (__int64)v16;
  DWORD2(v51) = 3 * (v44 - v43);
  v21 = (unsigned int)(v44 - v43 + 2);
  *((_QWORD *)&v50 + 1) = v20;
  if ( (unsigned int)v21 < v44 - (int)v43 )
    return 0LL;
  v22 = 3 * v21;
  if ( (unsigned __int64)(3 * v21) > 0xFFFFFFFF || v22 + 8 < v22 )
    return 0LL;
  v23 = (v22 + 8) & 0xFFFFFFF8;
  v24 = v17 * v11;
  if ( v17 * v11 <= 2304 )
  {
    v4 |= 0x200u;
    goto LABEL_55;
  }
  if ( v24 > 0x4000 )
  {
    v26 = 20;
    DWORD1(v51) = (v11 + 5) / 6;
    v27 = 21LL;
    HIDWORD(v51) *= 6;
  }
  else
  {
    v26 = v24 >> 3;
    v27 = (unsigned int)((v24 >> 3) + 1);
    if ( (unsigned int)v27 < v24 >> 3 )
    {
LABEL_21:
      *v5 = v4 & 0xFFFFFFBF;
      return 0LL;
    }
  }
  v28 = 4 * v27;
  if ( v28 > 0xFFFFFFFF )
    goto LABEL_21;
  if ( (unsigned int)v28 + v23 < v23 )
    goto LABEL_21;
  v29 = (char *)EngAllocMem(1u, (unsigned int)v28 + v23, 0x38355448u);
  if ( !v29 )
    goto LABEL_21;
  v30 = (int)v23;
  v31 = 0;
  v46 = (unsigned int *)&v29[v30];
  v32 = (unsigned int *)&v29[v30];
  HIBYTE(v40) = 0;
  v43 = (__int64)&v29[2 * v42 + v42];
  while ( 1 )
  {
    v41 = 0;
    v33 = ((__int64 (__fastcall *)(__m128i *, char *))v49)(&v48, v29);
    v34 = v46;
    v35 = (_BYTE *)v33;
    v36 = v43;
    do
    {
      LOBYTE(v40) = v35[1];
      BYTE2(v40) = *v35;
      BYTE1(v40) = v35[2];
      v37 = v40;
      if ( BYTE1(v40) == *v35 )
      {
        v37 = v40 & 0xFCFCFCFC;
        HIBYTE(v40) &= 0xFCu;
      }
      *v34 = v37;
      for ( i = v32; *i != v37; --i )
        ;
      if ( i == v34 )
      {
        if ( ++v31 > v26 )
          break;
        ++v32;
        v41 = 1;
        *v32 = v37;
      }
      v35 += 3;
    }
    while ( (unsigned __int64)v35 < v36 );
    v5 = v47;
    if ( v26 == 20 || v41 )
      goto LABEL_41;
    v24 -= v42;
    if ( v24 <= 2304 )
      break;
    v26 = v24 >> 4;
LABEL_41:
    if ( v31 > v26 || !DWORD1(v51) )
      goto LABEL_45;
  }
  v4 |= 0x200u;
LABEL_45:
  v39 = v4 | 0x200;
  if ( v31 >= 20 )
    v39 = v4;
  v4 = v39;
  if ( v26 == 20 )
  {
    v4 = v39 & 0xFFFFFFBF;
    if ( v31 <= 20 )
      v4 = v39;
  }
  else if ( v31 > 20 || v31 <= v26 )
  {
    v4 = v39 & 0xFFFFFFBF;
  }
  EngFreeMem(v29);
LABEL_55:
  *v5 = v4;
  return v4 & 0x40;
}
