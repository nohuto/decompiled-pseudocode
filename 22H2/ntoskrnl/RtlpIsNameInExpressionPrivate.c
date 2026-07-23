/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x14024F290
 * Callers:
 *     RtlIsNameInExpression @ 0x14024F160 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x14024F1E0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlDoesNameContainWildCards @ 0x14024F730 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int16 v6; // bp
  unsigned __int16 *v9; // r11
  unsigned __int16 *v10; // r9
  unsigned __int16 v11; // r15
  __int16 v12; // r15
  __int16 *v13; // r12
  unsigned int v14; // r13d
  unsigned __int16 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // edi
  __int16 v22; // ax
  _OWORD *v23; // r8
  unsigned int v24; // edx
  __int16 v25; // bp
  __int64 v26; // r15
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rbx
  __int16 v30; // bp
  bool v31; // zf
  unsigned __int16 v32; // cx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int16 v35; // cx
  __int64 v36; // rax
  __int16 v37; // bx
  __m128i v40; // xmm0
  __int16 v41; // eax^2
  __int16 v42; // di
  unsigned __int64 v43; // xmm0_8
  unsigned __int16 v44; // di
  unsigned __int64 v45; // r9
  unsigned __int16 v46; // di
  __int64 v47; // rcx
  _OWORD *PoolWithTag; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int16 *v52; // rcx
  __int128 v53; // xmm1
  char v54; // [rsp+20h] [rbp-C8h]
  __int16 v55; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v57; // [rsp+26h] [rbp-C2h]
  unsigned __int16 v59; // [rsp+30h] [rbp-B8h]
  UNICODE_STRING Name; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int16 *v61; // [rsp+48h] [rbp-A0h]
  unsigned __int16 *v62; // [rsp+50h] [rbp-98h]
  PVOID P; // [rsp+58h] [rbp-90h]
  unsigned int v64; // [rsp+60h] [rbp-88h]
  __int16 v65; // [rsp+70h] [rbp-78h] BYREF
  char v66; // [rsp+90h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = 0;
  v61 = a2;
  v9 = a2;
  v62 = a1;
  v10 = a1;
  v57 = 0;
  P = 0LL;
  v54 = 0;
  if ( !(_WORD)v5 )
    return *a1 + (_DWORD)v5 == 0;
  v11 = *a1;
  if ( !*a1 )
    return *a1 + (_DWORD)v5 == 0;
  if ( v11 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v40 = *(__m128i *)a1;
    *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    v41 = v40.m128i_i16[1];
    v42 = v40.m128i_i16[0];
    v43 = _mm_srli_si128(v40, 8).m128i_u64[0];
    v44 = v42 - 2;
    Name.Length = v44;
    Name.MaximumLength = v41 - 2;
    Name.Buffer = (wchar_t *)(v43 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( (unsigned __int16)v5 < (unsigned __int16)(v11 - 2) )
        return 0;
      v45 = (v5 - (unsigned __int64)v44) >> 1;
      if ( !a3 )
        return memcmp((const void *)(v43 + 2), (const void *)(*((_QWORD *)v61 + 1) + 2LL * (unsigned int)v45), v44) == 0;
      v46 = v44 >> 1;
      if ( v46 )
      {
        do
        {
          v47 = *(unsigned __int16 *)(v43 + 2 + 2LL * v6);
          if ( a4 )
            LOWORD(v47) = *(_WORD *)(a5 + 2 * v47);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v61 + 1) + 2LL * ((unsigned int)v45 + v6))) != (_WORD)v47 )
            return 0;
          ++v6;
        }
        while ( v6 < v46 );
      }
      return 1;
    }
    v10 = v62;
    v9 = v61;
  }
  v65 = 0;
  v12 = 2 * v11;
  *(_QWORD *)&Name.Length = &v66;
  v55 = v12;
  v13 = &v65;
  v14 = 1;
  v59 = 0;
  v15 = 0;
  while ( 2 )
  {
    if ( v15 >= *v9 )
    {
      v54 = 1;
      if ( v13[v14 - 1] == v12 )
      {
LABEL_49:
        v37 = v13[v14 - 1];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v37 == v12;
      }
    }
    else
    {
      v16 = (unsigned __int64)v15 >> 1;
      v15 += 2;
      v59 = v15;
      v57 = *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v16);
    }
    LODWORD(v17) = 0;
    v18 = 0;
    v19 = 0;
    while ( 2 )
    {
      v20 = (unsigned int)v17;
      v17 = (unsigned int)(v17 + 1);
      v21 = ((unsigned int)(unsigned __int16)v13[v20] + 1) >> 1;
      v22 = 0;
      v23 = *(_OWORD **)&Name.Length;
      while ( 1 )
      {
        v24 = *v10;
        if ( (_WORD)v21 == (_WORD)v24 )
          goto LABEL_27;
        LOWORD(v21) = v22 + v21;
        v25 = 2 * v21;
        if ( (_WORD)v21 == (_WORD)v24 )
          break;
        v26 = *(unsigned __int16 *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v21 >> 1));
        v27 = a3;
        if ( a3 && a4 )
          LOWORD(v26) = *(_WORD *)(a5 + 2 * v26);
        if ( v18 >= 0xE && !P )
        {
          v64 = v24 >> 1;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * ((v24 >> 1) + 1), 0x6E725346u);
          P = PoolWithTag;
          if ( !PoolWithTag )
            RtlRaiseStatus(-1073741801);
          v49 = *(_QWORD *)&Name.Length;
          v23 = PoolWithTag;
          v10 = v62;
          v15 = v59;
          v9 = v61;
          v50 = *(_OWORD *)*(_QWORD *)&Name.Length;
          *(_QWORD *)&Name.Length = PoolWithTag;
          *PoolWithTag = v50;
          v51 = *(_OWORD *)(v49 + 16);
          LODWORD(v49) = v64;
          PoolWithTag[1] = v51;
          v52 = (__int16 *)PoolWithTag + (unsigned int)(2 * v49 + 2);
          v27 = a3;
          *(_OWORD *)v52 = *(_OWORD *)v13;
          v53 = *((_OWORD *)v13 + 1);
          v13 = v52;
          *((_OWORD *)v52 + 1) = v53;
        }
        if ( (_WORD)v26 == 42 )
          goto LABEL_17;
        if ( (_WORD)v26 == 60 )
        {
          if ( v57 != 46 || v54 )
            goto LABEL_17;
          v35 = v15;
          if ( v15 >= *v9 )
          {
LABEL_47:
            v10 = v62;
            v36 = v18++;
            *((_WORD *)v23 + v36) = v25 + 3;
            v22 = 2;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)v35 >> 1)) != 46 )
            {
              v35 += 2;
              if ( v35 >= *v9 )
                goto LABEL_47;
            }
            v10 = v62;
LABEL_17:
            v28 = v18;
            v29 = v18 + 1;
            *((_WORD *)v23 + v28) = v25;
            v22 = 2;
            *((_WORD *)v23 + v29) = v25 + 3;
            v18 = v29 + 1;
          }
        }
        else
        {
          v30 = v25 + 4;
          if ( (_WORD)v26 == 62 )
          {
            v22 = 2;
            if ( !v54 )
            {
              if ( v57 != 46 )
                goto LABEL_41;
              v22 = 2;
            }
          }
          else
          {
            if ( (_WORD)v26 != 34 )
            {
              if ( !v54 )
              {
                v31 = (_WORD)v26 == 63;
                goto LABEL_23;
              }
              goto LABEL_27;
            }
            if ( !v54 )
            {
              v31 = v57 == 46;
LABEL_23:
              if ( v31 || (!v27 ? (v32 = v57) : (v32 = *(_WORD *)(a5 + 2LL * v57)), (_WORD)v26 == v32) )
              {
LABEL_41:
                v34 = v18++;
                *((_WORD *)v23 + v34) = v30;
              }
LABEL_27:
              v12 = v55;
              goto LABEL_28;
            }
            v22 = 2;
          }
        }
      }
      v12 = v55;
      v33 = v18++;
      *((_WORD *)v23 + v33) = v55;
LABEL_28:
      if ( (unsigned int)v17 < v14 )
      {
        while ( v19 < v18 )
        {
          do
          {
            if ( (unsigned __int16)v13[v17] >= *((_WORD *)v23 + v19) )
              break;
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < v14 );
          ++v19;
          if ( (unsigned int)v17 >= v14 )
            goto LABEL_29;
        }
        continue;
      }
      break;
    }
LABEL_29:
    if ( v18 )
    {
      v14 = v18;
      *(_QWORD *)&Name.Length = v13;
      v13 = (__int16 *)v23;
      if ( v54 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
