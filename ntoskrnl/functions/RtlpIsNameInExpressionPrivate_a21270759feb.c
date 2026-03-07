char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // r14
  unsigned __int16 *v6; // r13
  char v7; // si
  __int64 v10; // rbx
  unsigned __int16 *v11; // rdx
  unsigned __int16 v12; // r11
  unsigned __int16 v13; // r15
  _WORD *v14; // rax
  __int16 *v16; // r10
  int v17; // r8d
  __int16 v18; // r15
  __int16 *v19; // r12
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rbp
  unsigned int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int16 v26; // ax
  unsigned int v27; // r15d
  unsigned int v28; // edx
  __int16 v29; // r14
  __int64 v30; // rsi
  char v31; // al
  __int16 v32; // r14
  bool v33; // zf
  unsigned __int16 v34; // cx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // cx
  __int64 v42; // rax
  __int16 v43; // bx
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int16 v47; // eax^2
  __int16 v48; // di
  unsigned __int64 v49; // xmm0_8
  unsigned __int16 v50; // di
  unsigned __int64 v51; // r9
  unsigned __int16 v52; // di
  __int64 v53; // rcx
  unsigned int v54; // r13d
  _OWORD *Pool2; // rax
  _OWORD *v56; // rcx
  __int128 v57; // xmm1
  __int64 v58; // rcx
  __int16 *v59; // rcx
  __int128 v60; // xmm1
  char v61; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v64; // [rsp+24h] [rbp-C4h]
  __int16 v65; // [rsp+26h] [rbp-C2h]
  unsigned __int16 v66; // [rsp+2Ch] [rbp-BCh]
  unsigned int v68; // [rsp+38h] [rbp-B0h]
  unsigned int v69; // [rsp+3Ch] [rbp-ACh]
  UNICODE_STRING Name; // [rsp+40h] [rbp-A8h] BYREF
  PVOID P; // [rsp+50h] [rbp-98h]
  _QWORD *v72; // [rsp+58h] [rbp-90h]
  unsigned __int16 *v73; // [rsp+60h] [rbp-88h]
  __int16 v74; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v75[32]; // [rsp+90h] [rbp-58h] BYREF

  v5 = 0;
  v73 = a2;
  v6 = a2;
  v7 = 0;
  v64 = 0;
  v10 = *a2;
  v11 = a1;
  P = 0LL;
  v12 = 0;
  v61 = 0;
  if ( !(_WORD)v10 )
    return *a1 + (_DWORD)v10 == 0;
  v13 = *a1;
  if ( !*a1 )
    return *a1 + (_DWORD)v10 == 0;
  if ( v13 == 2 )
  {
    v14 = (_WORD *)*((_QWORD *)a1 + 1);
    v72 = a1 + 4;
    if ( *v14 == 42 )
      return 1;
  }
  else
  {
    v72 = a1 + 4;
    if ( **((_WORD **)a1 + 1) == 42 )
    {
      v46 = *(__m128i *)a1;
      *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
      v47 = v46.m128i_i16[1];
      v48 = v46.m128i_i16[0];
      v49 = _mm_srli_si128(v46, 8).m128i_u64[0];
      v50 = v48 - 2;
      Name.Length = v50;
      Name.MaximumLength = v47 - 2;
      Name.Buffer = (wchar_t *)(v49 + 2);
      if ( !RtlDoesNameContainWildCards(&Name) )
      {
        if ( (unsigned __int16)v10 < (unsigned __int16)(v13 - 2) )
          return 0;
        v51 = (v10 - (unsigned __int64)v50) >> 1;
        if ( !a3 )
          return memcmp((const void *)(v49 + 2), (const void *)(*((_QWORD *)v6 + 1) + 2LL * (unsigned int)v51), v50) == 0;
        v52 = v50 >> 1;
        if ( v52 )
        {
          do
          {
            v53 = *(unsigned __int16 *)(v49 + 2 + 2LL * v5);
            if ( a4 )
              LOWORD(v53) = *(_WORD *)(a5 + 2 * v53);
            if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v6 + 1) + 2LL * ((unsigned int)v51 + v5))) != (_WORD)v53 )
              return 0;
            ++v5;
          }
          while ( v5 < v52 );
        }
        return 1;
      }
      v11 = a1;
      v12 = 0;
      v7 = 0;
    }
  }
  v16 = (__int16 *)v75;
  v74 = 0;
  v17 = 1;
  *(_QWORD *)&Name.Length = v75;
  v18 = 2 * v13;
  v69 = 1;
  v65 = v18;
  v19 = &v74;
  v20 = 0;
  v66 = 0;
  while ( 2 )
  {
    if ( v20 >= (unsigned __int16)v10 )
    {
      v7 = 1;
      v61 = 1;
      if ( v19[v17 - 1] == v18 )
      {
LABEL_52:
        v43 = v19[v17 - 1];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v43 == v18;
      }
    }
    else
    {
      v21 = (unsigned __int64)v20 >> 1;
      v20 += 2;
      v66 = v20;
      v12 = *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * v21);
      v64 = v12;
    }
    v68 = 0;
    LODWORD(v22) = 0;
    v23 = 0;
    while ( 2 )
    {
      v24 = (unsigned int)v22;
      v22 = (unsigned int)(v22 + 1);
      v25 = ((unsigned int)(unsigned __int16)v19[v24] + 1) >> 1;
      v26 = 0;
      v27 = v68;
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v28 = *v11;
                if ( (_WORD)v25 == (_WORD)v28 )
                  goto LABEL_29;
                LOWORD(v25) = v26 + v25;
                v29 = 2 * v25;
                if ( (_WORD)v25 == (_WORD)v28 )
                {
                  v39 = v23++;
                  v16[v39] = v65;
                  goto LABEL_29;
                }
                v30 = *(unsigned __int16 *)(*v72 + 2 * ((unsigned __int64)(unsigned __int16)v25 >> 1));
                v31 = a3;
                if ( a3 && a4 )
                  LOWORD(v30) = *(_WORD *)(a5 + 2 * v30);
                if ( v23 >= 0xE && !P )
                {
                  v54 = v28 >> 1;
                  Pool2 = (_OWORD *)ExAllocatePool2(64LL, 8LL * ((v28 >> 1) + 1), 1852986182LL);
                  P = Pool2;
                  if ( !Pool2 )
                    RtlRaiseStatus(-1073741801);
                  v56 = *(_OWORD **)&Name.Length;
                  v16 = (__int16 *)Pool2;
                  v20 = v66;
                  v12 = v64;
                  *(_QWORD *)&Name.Length = Pool2;
                  *Pool2 = *v56;
                  v57 = v56[1];
                  v58 = 2 * v54 + 2;
                  v6 = v73;
                  v59 = (__int16 *)Pool2 + v58;
                  Pool2[1] = v57;
                  v31 = a3;
                  *(_OWORD *)v59 = *(_OWORD *)v19;
                  v60 = *((_OWORD *)v19 + 1);
                  v19 = v59;
                  *((_OWORD *)v59 + 1) = v60;
                }
                if ( (_WORD)v30 != 42 )
                  break;
                v11 = a1;
                v7 = v61;
                v37 = v23;
                v38 = v23 + 1;
                v16[v37] = v29;
                v26 = 2;
                v16[v38] = v29 + 3;
                v23 = v38 + 1;
              }
              if ( (_WORD)v30 != 60 )
                break;
              v7 = v61;
              if ( v61 || v12 != 46 )
                goto LABEL_42;
              v41 = v20;
              if ( v20 >= *v6 )
              {
LABEL_50:
                v11 = a1;
                v42 = v23++;
                v16[v42] = v29 + 3;
                v26 = 2;
              }
              else
              {
                while ( *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * ((unsigned __int64)v41 >> 1)) != 46 )
                {
                  v41 += 2;
                  if ( v41 >= *v6 )
                    goto LABEL_50;
                }
LABEL_42:
                v11 = a1;
                v35 = v23;
                v36 = v23 + 1;
                v16[v35] = v29;
                v26 = 2;
                v16[v36] = v29 + 3;
                v23 = v36 + 1;
              }
            }
            v32 = v29 + 4;
            if ( (_WORD)v30 == 62 )
              break;
            if ( (_WORD)v30 != 34 )
            {
              if ( !v61 )
              {
                v33 = (_WORD)v30 == 63;
                goto LABEL_24;
              }
              goto LABEL_28;
            }
            if ( !v61 )
            {
              v33 = v12 == 46;
LABEL_24:
              if ( v33 || (!v31 ? (v34 = v12) : (v34 = *(_WORD *)(a5 + 2LL * v12)), (_WORD)v30 == v34) )
              {
                v40 = v23++;
                v16[v40] = v32;
              }
LABEL_28:
              v7 = v61;
              goto LABEL_29;
            }
            v26 = 2;
            v11 = a1;
            v7 = v61;
          }
          v7 = v61;
          v26 = 2;
          v11 = a1;
        }
        while ( v61 );
        if ( v12 != 46 )
          break;
        v26 = 2;
      }
      v45 = v23++;
      v16[v45] = v32;
LABEL_29:
      if ( (unsigned int)v22 < v69 )
      {
        while ( v27 < v23 )
        {
          do
          {
            if ( (unsigned __int16)v19[v22] >= (unsigned __int16)v16[v27] )
              break;
            v22 = (unsigned int)(v22 + 1);
          }
          while ( (unsigned int)v22 < v69 );
          v68 = ++v27;
          if ( (unsigned int)v22 >= v69 )
            goto LABEL_30;
        }
        v11 = a1;
        continue;
      }
      break;
    }
LABEL_30:
    LOWORD(v10) = *v6;
    if ( v23 )
    {
      v18 = v65;
      *(_QWORD *)&Name.Length = v19;
      v19 = v16;
      v69 = v23;
      v16 = *(__int16 **)&Name.Length;
      v17 = v23;
      if ( v7 )
        goto LABEL_52;
      v11 = a1;
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
