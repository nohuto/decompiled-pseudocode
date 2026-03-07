__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        unsigned int *a13,
        __int64 a14)
{
  char v14; // r14
  __int64 v15; // r15
  int v16; // esi
  _DWORD *v17; // r11
  unsigned __int8 v18; // al
  __int64 v19; // r9
  unsigned int v20; // edx
  unsigned __int16 *v21; // r10
  int *v22; // rcx
  int *v23; // rbx
  unsigned int v24; // r8d
  __int64 v25; // rdi
  unsigned int v26; // ecx
  unsigned int v27; // r13d
  int v28; // eax
  int v29; // ecx
  signed __int64 v30; // rsi
  char v31; // r15
  char v32; // dl
  char v33; // al
  char v34; // r8
  bool v35; // cf
  unsigned int v37; // edx
  int v38; // ecx
  __int64 v39; // r8
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  unsigned __int16 *v43; // rcx
  int v44; // edx
  _BYTE v46[15]; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned int v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  void *v49; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  char *v56; // [rsp+D8h] [rbp-28h]
  unsigned int *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v59; // [rsp+ECh] [rbp-14h]

  v14 = 0;
  v15 = a14;
  v16 = a3;
  v56 = a6;
  v17 = (_DWORD *)a2;
  v55 = a7;
  v54 = a8;
  v53 = a9;
  v57 = a13;
  v18 = *(_BYTE *)a14 - 2;
  v51 = a3;
  v19 = a1;
  v50 = a2;
  v52 = a1;
  v48 = a14;
  if ( v18 > 2u )
    return 3221225560LL;
  v20 = *(unsigned __int16 *)(a14 + 4);
  v21 = (unsigned __int16 *)(a14 + 2);
  v22 = (int *)(a14 + 8);
  v23 = 0LL;
  v24 = 0;
  *(_QWORD *)&v46[7] = a14 + 2;
  if ( v20 )
  {
    do
    {
      if ( (unsigned __int64)v22 >= a14 + (unsigned __int64)*v21 )
        return 3221225597LL;
      ++v24;
      v22 = (int *)((char *)v22 + *((unsigned __int16 *)v22 + 1));
    }
    while ( v24 < v20 );
    v19 = v52;
  }
  else
  {
    *(_QWORD *)&v46[7] = a14 + 2;
  }
  if ( (unsigned __int64)v22 <= a14 + (unsigned __int64)*v21 )
    v23 = v22;
  v25 = v19 + 8;
  v26 = 0;
  v27 = 0;
  v47 = 0;
  if ( !*(_WORD *)(v19 + 4) )
  {
LABEL_32:
    *v57 = v27;
    return v14 != 0 ? 0xC0000023 : 0;
  }
  v28 = a12;
  do
  {
    if ( *(_BYTE *)v25 == 17 )
    {
      if ( v28 != 3 )
        goto LABEL_30;
      if ( RtlFindAceByType(v15, 17, 0LL) )
        break;
      v26 = v47;
      v19 = v52;
      v21 = *(unsigned __int16 **)&v46[7];
      v17 = (_DWORD *)v50;
    }
    else if ( v28 == 3 )
    {
      goto LABEL_30;
    }
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        if ( (*(_BYTE *)(v25 + 1) & 0x10) != 0 )
          goto LABEL_30;
LABEL_15:
        if ( !a5 )
        {
          v30 = *(unsigned __int16 *)(v25 + 2);
          if ( v23 && v30 <= v15 + *v21 - (_QWORD)v23 )
          {
            if ( !v14 )
            {
              memmove(v23, (const void *)v25, *(unsigned __int16 *)(v25 + 2));
              v37 = *(unsigned __int8 *)v23;
              if ( ((unsigned __int8)v37 < 0xBu || (unsigned __int8)(v37 - 13) <= 1u) && (*((_BYTE *)v23 + 1) & 8) == 0 )
              {
                v38 = v23[1];
                v39 = v50;
                if ( v38 < 0 )
                  v38 |= *(_DWORD *)v50;
                if ( (v38 & 0x40000000) != 0 )
                  v38 |= *(_DWORD *)(v50 + 4);
                if ( (v38 & 0x20000000) != 0 )
                  v38 |= *(_DWORD *)(v50 + 8);
                if ( (v38 & 0x10000000) != 0 )
                  v38 |= *(_DWORD *)(v50 + 12);
                v40 = v38 & 0xFFFFFFF;
                v23[1] = v40;
                if ( (unsigned __int8)v37 <= 0xAu && (v41 = 1651, _bittest(&v41, v37)) )
                  v42 = *(_DWORD *)(v39 + 12);
                else
                  v42 = *(_DWORD *)(v39 + 12) | 0x1000000;
                v23[1] = v40 & v42;
              }
              *((_BYTE *)v23 + 1) &= ~a4;
              ++*(_WORD *)(v15 + 4);
              goto LABEL_28;
            }
          }
          else
          {
            v14 = 1;
          }
          goto LABEL_60;
        }
        v29 = 0;
        *(_DWORD *)&v46[3] = 0;
        LODWORD(v30) = 0;
        v46[1] = 0;
        v49 = v23;
        v31 = a10 && (*(_BYTE *)(v25 + 1) & 3) != 0;
        v32 = *(_BYTE *)(v25 + 1);
        if ( (v32 & 8) == 0 )
        {
          v33 = 0;
          v46[0] = 0;
          if ( a11 )
            v33 = (v32 & 0x10) != 0;
          if ( !RtlpCopyEffectiveAce(
                  (char *)v25,
                  v33,
                  v31,
                  v56,
                  (char *)v55,
                  v54,
                  v53,
                  v17,
                  0LL,
                  0,
                  &v49,
                  &v46[3],
                  v48,
                  0LL,
                  &v46[1],
                  v46) )
            return 3221225597LL;
          v29 = *(_DWORD *)&v46[3];
          LODWORD(v30) = *(_DWORD *)&v46[3];
          if ( v46[0] )
          {
            v14 = 1;
          }
          else if ( !v14 && *(_DWORD *)&v46[3] )
          {
            v34 = a4;
            *((_BYTE *)v23 + 1) &= ~a4;
            v29 = *(_DWORD *)&v46[3];
LABEL_26:
            if ( !v31 )
            {
LABEL_27:
              v15 = v48;
              if ( !v14 )
              {
LABEL_28:
                v23 = (int *)((char *)v23 + (unsigned int)v30);
LABEL_29:
                v26 = v47;
                v27 += v30;
                v19 = v52;
                goto LABEL_30;
              }
              goto LABEL_60;
            }
            v44 = *(_DWORD *)(v25 + 10);
            v58 = 0;
            v59 = 768;
            if ( !v44 )
              v44 = *(unsigned __int16 *)(v25 + 14) - v59;
            if ( !v29 || v46[1] )
            {
              if ( *(_BYTE *)v25 > 8u || *(_DWORD *)(v25 + 4) || !v44 )
              {
                LODWORD(v30) = *(unsigned __int16 *)(v25 + 2) + (_DWORD)v30;
                if ( (unsigned int)v30 > 0xFFFF )
                  return 3221225597LL;
                v43 = *(unsigned __int16 **)&v46[7];
                v15 = v48;
                if ( *(unsigned __int16 *)(v25 + 2) > v48 + (unsigned __int16)**(_WORD **)&v46[7] - (_QWORD)v49 )
                {
                  v14 = 1;
                  v23 = (int *)(v48 + (unsigned __int16)**(_WORD **)&v46[7]);
                  goto LABEL_29;
                }
                if ( !v14 )
                {
                  memmove(v49, (const void *)v25, *(unsigned __int16 *)(v25 + 2));
                  *((_BYTE *)v49 + 1) |= 8u;
                  *((_BYTE *)v49 + 1) &= ~a4;
                  ++*(_WORD *)(v15 + 4);
                  goto LABEL_28;
                }
LABEL_61:
                v23 = (int *)(v15 + *v43);
                goto LABEL_29;
              }
              goto LABEL_27;
            }
            v15 = v48;
            if ( !v14 )
            {
              *((_BYTE *)v23 + 1) = ~v34 & (*((_BYTE *)v23 + 1) | *(_BYTE *)(v25 + 1) & 0x1F);
              goto LABEL_28;
            }
LABEL_60:
            v43 = *(unsigned __int16 **)&v46[7];
            goto LABEL_61;
          }
        }
        v34 = a4;
        goto LABEL_26;
      }
      if ( v16 == 2 )
        goto LABEL_15;
    }
    else if ( (*(_BYTE *)(v25 + 1) & 0x10) != 0 )
    {
      goto LABEL_15;
    }
LABEL_30:
    ++v26;
    v16 = v51;
    v25 += *(unsigned __int16 *)(v25 + 2);
    v21 = *(unsigned __int16 **)&v46[7];
    v35 = v26 < *(unsigned __int16 *)(v19 + 4);
    v28 = a12;
    v17 = (_DWORD *)v50;
    v47 = v26;
  }
  while ( v35 );
  if ( v27 <= 0xFFFF )
    goto LABEL_32;
  return 3221225597LL;
}
