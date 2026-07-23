/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1402F4170
 * Callers:
 *     RtlIsNameInExpression @ 0x1402F4040 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1402F40C0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x1402F4720 (RtlDoesNameContainWildCards.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // r15
  unsigned __int16 *v6; // r14
  char v8; // r9
  __int64 v10; // rsi
  unsigned __int16 *v11; // rdx
  unsigned __int16 v12; // r11
  void *v13; // r10
  unsigned __int16 v14; // di
  __m128i v15; // xmm0
  __int16 v16; // eax^2
  __int16 v17; // bx
  unsigned __int64 v18; // xmm0_8
  unsigned __int16 v19; // bx
  unsigned __int64 v20; // r9
  unsigned __int16 v23; // bx
  __int64 v24; // rcx
  char *v25; // r8
  char *v26; // r12
  unsigned int v27; // r13d
  unsigned __int16 v28; // bp
  __int16 v29; // di
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // edi
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int16 v35; // ax
  unsigned int v36; // edx
  __int16 v37; // si
  __int64 v38; // rbp
  char v39; // cl
  unsigned int v40; // r14d
  _OWORD *PoolWithTag; // rax
  char *v42; // rcx
  __int128 v43; // xmm1
  char *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  unsigned __int16 v47; // ax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdi
  __int16 v51; // si
  __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // rax
  unsigned int v55; // r9d
  char *v56; // rax
  unsigned __int16 v57; // cx
  __int64 v58; // rax
  __int16 v59; // bx
  unsigned __int16 v60; // [rsp+20h] [rbp-B8h]
  char v61; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v62; // [rsp+24h] [rbp-B4h]
  __int16 v63; // [rsp+24h] [rbp-B4h]
  unsigned __int16 v66; // [rsp+28h] [rbp-B0h]
  char *v68; // [rsp+38h] [rbp-A0h]
  unsigned int v69; // [rsp+40h] [rbp-98h]
  UNICODE_STRING Name; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 *v71; // [rsp+58h] [rbp-80h]
  _WORD v72[16]; // [rsp+60h] [rbp-78h] BYREF
  char v73; // [rsp+80h] [rbp-58h] BYREF

  v5 = 0;
  v6 = a2;
  v71 = a2;
  v8 = 0;
  v66 = 0;
  v10 = *a2;
  v11 = a1;
  v12 = 0;
  v61 = 0;
  v13 = 0LL;
  if ( !(_WORD)v10 )
    return *a1 + (_DWORD)v10 == 0;
  v14 = *a1;
  v62 = *a1;
  if ( !*a1 )
    return *a1 + (_DWORD)v10 == 0;
  if ( v14 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v15 = *(__m128i *)a1;
    *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    v16 = v15.m128i_i16[1];
    v17 = v15.m128i_i16[0];
    v18 = _mm_srli_si128(v15, 8).m128i_u64[0];
    v19 = v17 - 2;
    Name.Length = v19;
    Name.MaximumLength = v16 - 2;
    Name.Buffer = (wchar_t *)(v18 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( (unsigned __int16)v10 < (unsigned __int16)(v62 - 2) )
        return 0;
      v20 = (v10 - (unsigned __int64)v19) >> 1;
      if ( !a3 )
        return memcmp((const void *)(v18 + 2), (const void *)(*((_QWORD *)v6 + 1) + 2LL * (unsigned int)v20), v19) == 0;
      v23 = v19 >> 1;
      if ( v23 )
      {
        while ( 1 )
        {
          v24 = *(unsigned __int16 *)(v18 + 2 + 2LL * v5);
          if ( a4 )
            LOWORD(v24) = *(_WORD *)(a5 + 2 * v24);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v6 + 1) + 2LL * ((unsigned int)v20 + v5))) != (_WORD)v24 )
            break;
          if ( ++v5 >= v23 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    v11 = a1;
    v13 = 0LL;
    v14 = v62;
    v12 = 0;
    v8 = 0;
  }
  v72[0] = 0;
  v60 = 0;
  v25 = (char *)v72;
  v68 = (char *)v72;
  v26 = &v73;
  v27 = 1;
  v28 = 0;
  if ( v14 > 0x7FFFu )
    return 0;
  v29 = 2 * v14;
  v63 = v29;
  while ( 2 )
  {
    if ( v28 >= *v6 )
    {
      v8 = 1;
      v61 = 1;
      if ( *(_WORD *)&v25[2 * v27 - 2] == v29 )
        goto LABEL_78;
    }
    else
    {
      v30 = (unsigned __int64)v28 >> 1;
      v28 += 2;
      v60 = v28;
      v12 = *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * v30);
      v66 = v12;
    }
    v69 = 0;
    LODWORD(v31) = 0;
    v32 = 0;
    while ( 2 )
    {
      v33 = (unsigned int)v31;
      v31 = (unsigned int)(v31 + 1);
      v34 = ((unsigned int)*(unsigned __int16 *)&v25[2 * v33] + 1) >> 1;
      v35 = 0;
      while ( 1 )
      {
        v36 = *v11;
        if ( (_WORD)v34 == (_WORD)v36 )
          goto LABEL_56;
        LOWORD(v34) = v35 + v34;
        v37 = 2 * v34;
        if ( (_WORD)v34 == (_WORD)v36 )
          break;
        v38 = *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v34 >> 1));
        v39 = a3;
        if ( a3 && a4 )
          LOWORD(v38) = *(_WORD *)(a5 + 2 * v38);
        if ( v32 >= 0xE && !v13 )
        {
          v40 = v36 >> 1;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * ((v36 >> 1) + 1), 0x6E725346u);
          v13 = PoolWithTag;
          if ( !PoolWithTag )
            RtlRaiseStatus(-1073741801);
          v8 = v61;
          v12 = v66;
          v42 = (char *)PoolWithTag + 4 * v40 + 4;
          v6 = v71;
          *PoolWithTag = *(_OWORD *)v26;
          v43 = *((_OWORD *)v26 + 1);
          v26 = (char *)PoolWithTag;
          PoolWithTag[1] = v43;
          v44 = v68;
          v68 = v42;
          *(_OWORD *)v42 = *(_OWORD *)v44;
          *((_OWORD *)v42 + 1) = *((_OWORD *)v44 + 1);
          v39 = a3;
        }
        if ( (_WORD)v38 == 42 )
        {
          v28 = v60;
          v11 = a1;
          v45 = v32;
          v46 = v32 + 1;
          *(_WORD *)&v26[2 * v45] = v37;
          v35 = 2;
          *(_WORD *)&v26[2 * v46] = v37 + 3;
          v32 = v46 + 1;
        }
        else if ( (_WORD)v38 == 60 )
        {
          v28 = v60;
          if ( v8 || v12 != 46 )
            goto LABEL_43;
          v47 = v60;
          if ( v60 >= *v6 )
          {
LABEL_42:
            v11 = a1;
            v48 = v32++;
            *(_WORD *)&v26[2 * v48] = v37 + 3;
            v35 = 2;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * ((unsigned __int64)v47 >> 1)) != 46 )
            {
              v47 += 2;
              if ( v47 >= *v6 )
                goto LABEL_42;
            }
LABEL_43:
            v11 = a1;
            v49 = v32;
            v50 = v32 + 1;
            *(_WORD *)&v26[2 * v49] = v37;
            v35 = 2;
            *(_WORD *)&v26[2 * v50] = v37 + 3;
            v32 = v50 + 1;
          }
        }
        else
        {
          v51 = v37 + 4;
          if ( (_WORD)v38 == 62 )
          {
            v35 = 2;
            v28 = v60;
            v11 = a1;
            if ( !v8 && v12 != 46 )
            {
              v52 = v32++;
              *(_WORD *)&v26[2 * v52] = v51;
              goto LABEL_56;
            }
          }
          else
          {
            if ( (_WORD)v38 != 34 )
            {
              if ( !v8 )
              {
                v53 = (_WORD)v38 == 63;
LABEL_53:
                if ( v53 || (!v39 ? (v57 = v12) : (v57 = *(_WORD *)(a5 + 2LL * v12)), (_WORD)v38 == v57) )
                {
                  v54 = v32++;
                  *(_WORD *)&v26[2 * v54] = v51;
                }
              }
              v28 = v60;
              goto LABEL_56;
            }
            if ( !v8 )
            {
              v53 = v12 == 46;
              goto LABEL_53;
            }
            v35 = 2;
            v28 = v60;
            v11 = a1;
          }
        }
      }
      v58 = v32++;
      *(_WORD *)&v26[2 * v58] = v63;
LABEL_56:
      v25 = v68;
      if ( (unsigned int)v31 < v27 )
      {
        v55 = v69;
        while ( v55 < v32 )
        {
          do
          {
            if ( *(_WORD *)&v68[2 * v31] >= *(_WORD *)&v26[2 * v55] )
              break;
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < v27 );
          v69 = ++v55;
          if ( (unsigned int)v31 >= v27 )
          {
            v8 = v61;
            goto LABEL_63;
          }
        }
        v8 = v61;
        v11 = a1;
        continue;
      }
      break;
    }
LABEL_63:
    if ( v32 )
    {
      v68 = v26;
      v56 = v25;
      v25 = v26;
      v27 = v32;
      v29 = v63;
      v26 = v56;
      if ( v8 )
      {
LABEL_78:
        v59 = *(_WORD *)&v25[2 * v27 - 2];
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        return v59 == v29;
      }
      v11 = a1;
      continue;
    }
    break;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return 0;
}
