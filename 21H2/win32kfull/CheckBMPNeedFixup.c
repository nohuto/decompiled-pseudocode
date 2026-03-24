/*
 * XREFs of CheckBMPNeedFixup @ 0x1C00FF2F8
 * Callers:
 *     SetupAAHeader @ 0x1C001CE78 (SetupAAHeader.c)
 * Callees:
 *     ComputeByteOffset @ 0x1C001D74C (ComputeByteOffset.c)
 *     IntersectRECTL @ 0x1C001DCF4 (IntersectRECTL.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckBMPNeedFixup(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // r15
  unsigned int v6; // edi
  int v9; // eax
  __m128i v10; // xmm2
  __int128 v11; // xmm1
  int v12; // r10d
  __int64 v13; // xmm0_8
  __int128 v14; // xmm1
  int v15; // eax
  int v16; // r11d
  int v17; // edx
  int v18; // r9d
  int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r14d
  int v24; // esi
  int v25; // edi
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  char *v28; // r12
  __int64 v29; // rax
  int v30; // r14d
  unsigned int *v31; // r13
  __int64 v32; // rax
  unsigned int *v33; // r8
  _BYTE *v34; // rdx
  unsigned __int64 v35; // r15
  unsigned int v36; // eax
  unsigned int *i; // rcx
  int v38; // eax
  __int64 result; // rax
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
  if ( !v6 )
    goto LABEL_41;
  if ( v6 <= 2 )
    goto LABEL_46;
  if ( v6 > 6 )
  {
    if ( v6 <= 0xFB )
      goto LABEL_41;
    if ( v6 > 0xFE )
    {
LABEL_46:
      result = 1LL;
      *a4 = v4 | 0x240;
      return result;
    }
  }
  v9 = *(_DWORD *)(a3 + 12);
  v43 = 0LL;
  v44 = v9;
  v45 = *(_DWORD *)(a3 + 16);
  if ( !IntersectRECTL((int *)&v43, (int *)a4 + 16) )
    return 0LL;
  v10 = *(__m128i *)(a2 + 8);
  v11 = *(_OWORD *)(a2 + 40);
  v12 = *(_DWORD *)(a3 + 20);
  v49 = *(_OWORD *)(a2 + 24);
  v51 = *(_OWORD *)(a2 + 56);
  v13 = *(_QWORD *)(a2 + 88);
  v50 = v11;
  v14 = *(_OWORD *)(a2 + 72);
  HIDWORD(v51) = v12;
  v48 = v10;
  v53 = v13;
  v52 = v14;
  v48.m128i_i8[0] = _mm_cvtsi128_si32(v10) & 0xF3;
  DWORD1(v51) = v45 - HIDWORD(v43);
  v15 = ComputeByteOffset(v6, v43, &v48.m128i_i8[1]);
  v17 = v44 - v43;
  v42 = v44 - v43;
  LODWORD(v51) = v44 - v43;
  v20 = *(_QWORD *)(a3 + 24) + v19 * v18 + (__int64)v15;
  DWORD2(v51) = 3 * (v44 - v43);
  v21 = (unsigned int)(v44 - v43 + 2);
  *((_QWORD *)&v50 + 1) = v20;
  if ( (unsigned int)v21 < v44 - (int)v43 )
    return 0LL;
  v22 = 3 * v21;
  if ( (unsigned __int64)(3 * v21) > 0xFFFFFFFF || v22 + 8 < v22 )
    return 0LL;
  v23 = (v22 + 8) & 0xFFFFFFF8;
  v24 = v17 * v16;
  if ( v17 * v16 <= 2304 )
  {
    v4 |= 0x200u;
    goto LABEL_41;
  }
  if ( v24 <= 0x4000 )
  {
    v25 = v24 >> 3;
  }
  else
  {
    v25 = 20;
    DWORD1(v51) = (v16 + 5) / 6;
    HIDWORD(v51) *= 6;
  }
  v26 = (unsigned int)(v25 + 1);
  if ( (unsigned int)v26 < v25
    || (v27 = 4 * v26, v27 > 0xFFFFFFFF)
    || (unsigned int)v27 + v23 < v23
    || (v28 = (char *)EngAllocMem(1u, (unsigned int)v27 + v23, 0x38355448u)) == 0LL )
  {
    *v5 = v4 & 0xFFFFFFBF;
    return 0LL;
  }
  v29 = (int)v23;
  v30 = 0;
  v46 = (unsigned int *)&v28[v29];
  v31 = (unsigned int *)&v28[v29];
  HIBYTE(v40) = 0;
  v43 = (__int64)&v28[2 * v42 + v42];
  while ( 2 )
  {
    v41 = 0;
    v32 = ((__int64 (__fastcall *)(__m128i *, char *))v49)(&v48, v28);
    v33 = v46;
    v34 = (_BYTE *)v32;
    v35 = v43;
    do
    {
      LOBYTE(v40) = v34[1];
      BYTE2(v40) = *v34;
      BYTE1(v40) = v34[2];
      v36 = v40;
      if ( BYTE1(v40) == *v34 )
      {
        v36 = v40 & 0xFCFCFCFC;
        HIBYTE(v40) &= 0xFCu;
      }
      *v33 = v36;
      for ( i = v31; *i != v36; --i )
        ;
      if ( i != v33 )
        goto LABEL_22;
      if ( ++v30 > v25 )
        break;
      ++v31;
      v41 = 1;
      *v31 = v36;
LABEL_22:
      v34 += 3;
    }
    while ( (unsigned __int64)v34 < v35 );
    v5 = v47;
    if ( v25 == 20 || v41 )
    {
LABEL_27:
      if ( v30 > v25 || !DWORD1(v51) )
        goto LABEL_35;
      continue;
    }
    break;
  }
  v24 -= v42;
  if ( v24 > 2304 )
  {
    v25 = v24 >> 4;
    goto LABEL_27;
  }
  v4 |= 0x200u;
LABEL_35:
  v38 = v4 | 0x200;
  if ( v30 >= 20 )
    v38 = v4;
  if ( v25 == 20 )
  {
    v4 = v38 & 0xFFFFFFBF;
    if ( v30 <= 20 )
      v4 = v38;
  }
  else if ( v30 > 20 || (v4 = v38, v30 <= v25) )
  {
    v4 = v38 & 0xFFFFFFBF;
  }
  EngFreeMem(v28);
LABEL_41:
  *v5 = v4;
  return v4 & 0x40;
}
