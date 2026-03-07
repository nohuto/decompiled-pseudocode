unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, _DWORD *a2, _BYTE *a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rdi
  __int16 v6; // bp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbx
  char v12; // r12
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  _DWORD *v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  _DWORD *v23; // rdx
  char v24; // r10
  __int64 v25; // r13
  unsigned __int64 v26; // rdx
  int v27; // r14d
  __int64 v28; // rdx
  int v29; // ebx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // eax
  unsigned int v41; // r11d
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // r10
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  __int16 v47; // ax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  unsigned int v50; // r11d
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // r8
  unsigned __int64 v54; // r8
  __int16 v55; // [rsp+20h] [rbp-48h]
  unsigned int v56; // [rsp+20h] [rbp-48h]
  unsigned int v57; // [rsp+24h] [rbp-44h]
  unsigned int v58; // [rsp+24h] [rbp-44h]
  unsigned __int64 v59; // [rsp+30h] [rbp-38h]
  unsigned int v60; // [rsp+30h] [rbp-38h]
  __int16 v61; // [rsp+78h] [rbp+10h]
  __int16 v62; // [rsp+78h] [rbp+10h]

  v5 = 0LL;
  v6 = -1;
  v61 = -1;
  if ( (*a2 & 0x1FF) == 0 )
    goto LABEL_9;
  v62 = 0;
  v10 = *(_QWORD *)(a4 - 8LL * (*a2 & 0x1FF));
  v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
  v12 = 0;
  while ( 1 )
  {
    v13 = qword_140C64E18;
    v14 = *(unsigned int *)(qword_140C64E18 + 16);
    v15 = (qword_140C64E18 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v15 + 40 * v14) == v11 )
    {
      v16 = (_DWORD *)(qword_140C64E18 + 32);
    }
    else
    {
      v16 = (_DWORD *)(qword_140C64E18 + 32);
      v56 = *(_DWORD *)(qword_140C64E18 + 32);
      v59 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      v14 = (HIBYTE(v59)
           + 37
           * (BYTE6(v59)
            + 37
            * (BYTE5(v59)
             + 37
             * (BYTE4(v59)
              + 37 * (BYTE3(v59) + 37 * (BYTE2(v59) + 37 * (BYTE1(v59) + 37 * ((unsigned __int8)v11 + 11623883)))))))) & (v56 - 1);
      v39 = *(_QWORD *)(v15 + 40 * v14);
      if ( v39 != v11 )
      {
        if ( v39 )
        {
          v40 = *(_DWORD *)(qword_140C64E18 + 32);
          v41 = v14 + 1;
          v42 = 0;
          v57 = 0;
          while ( v41 >= v40 )
          {
LABEL_44:
            ++v42;
            v40 = v14;
            v56 = v14;
            v41 = 0;
            v57 = v42;
            if ( v42 >= 2 )
            {
              LOWORD(v14) = -1;
              v62 = -1;
              goto LABEL_50;
            }
          }
          while ( 1 )
          {
            v43 = *(_QWORD *)(v15 + 40LL * v41);
            if ( v43 == v11 )
            {
              *(_DWORD *)(qword_140C64E18 + 16) = v41;
              LOWORD(v14) = v41;
              goto LABEL_5;
            }
            if ( !v43 )
              break;
            if ( ++v41 >= v56 )
            {
              v42 = v57;
              goto LABEL_44;
            }
          }
          LOWORD(v14) = v41;
          *(_DWORD *)(qword_140C64E18 + 16) = v41;
          v62 = v41;
        }
        else
        {
          *(_DWORD *)(qword_140C64E18 + 16) = v14;
          v62 = (HIBYTE(v59)
               + 37
               * (BYTE6(v59)
                + 37
                * (BYTE5(v59)
                 + 37
                 * (BYTE4(v59)
                  + 37 * (BYTE3(v59) + 37 * (BYTE2(v59) + 37 * (BYTE1(v59) + 37 * ((unsigned __int8)v11 + 24011)))))))) & (v56 - 1);
        }
        goto LABEL_50;
      }
      *(_DWORD *)(qword_140C64E18 + 16) = v14;
    }
LABEL_5:
    if ( (_WORD)v14 != 0xFFFF )
      goto LABEL_6;
    LOWORD(v14) = v62;
LABEL_50:
    v48 = *(_DWORD *)(v13 + 28);
    if ( v48 < 3 * (*v16 >> 2) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140C64E00) == -1073741823 )
      return v5;
  }
  v12 = 1;
  *(_DWORD *)(v13 + 28) = v48 + 1;
  *(_QWORD *)(v15 + 40LL * (unsigned __int16)v14) = v11;
LABEL_6:
  if ( !v13 )
    return v5;
  v61 = *(_WORD *)(v13 + 36) + v14;
  if ( v12 )
  {
    v46 = ((v13 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v14;
    v47 = *(_WORD *)(v46 + 16);
    *(_QWORD *)(v46 + 8) = (16 * v10) | *(_DWORD *)(v46 + 8) & 8 | 4;
    *(_WORD *)(v46 + 16) = v47 & 0xFFF0 | (v10 >> 60);
  }
LABEL_9:
  if ( a1 < 0 )
  {
    if ( !a5 )
    {
      v17 = (*(_QWORD *)(a1 + 1088) ^ *(_QWORD *)(a1 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
LABEL_36:
    v17 = a1;
LABEL_12:
    v55 = 0;
    v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v19 = 4 * (v18 & 3) + 16;
    while ( 2 )
    {
      v20 = qword_140C64E18;
      v21 = *(unsigned int *)(qword_140C64E18 + v19);
      v22 = (qword_140C64E18 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( *(_QWORD *)(v22 + 40 * v21) == v18 )
      {
        v23 = (_DWORD *)(qword_140C64E18 + 32);
        goto LABEL_15;
      }
      v23 = (_DWORD *)(qword_140C64E18 + 32);
      v58 = *(_DWORD *)(qword_140C64E18 + 32);
      v44 = (HIBYTE(v18)
           + 37
           * (BYTE6(v18)
            + 37
            * (BYTE5(v18)
             + 37
             * (BYTE4(v18)
              + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & (v58 - 1);
      v45 = *(_QWORD *)(v22 + 40 * v44);
      if ( v45 == v18 )
      {
        *(_DWORD *)(qword_140C64E18 + v19) = v44;
        LOWORD(v21) = (HIBYTE(v18)
                     + 37
                     * (BYTE6(v18)
                      + 37
                      * (BYTE5(v18)
                       + 37
                       * (BYTE4(v18)
                        + 37
                        * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 24011)))))))) & (v58 - 1);
LABEL_15:
        if ( (_WORD)v21 != 0xFFFF )
        {
          v24 = 0;
          goto LABEL_17;
        }
        LOWORD(v50) = v55;
      }
      else if ( v45 )
      {
        v49 = *(_DWORD *)(qword_140C64E18 + 32);
        v50 = v44 + 1;
        v51 = 0;
        v60 = 0;
        while ( v50 >= v49 )
        {
LABEL_77:
          ++v51;
          v49 = v44;
          v58 = v44;
          v50 = 0;
          v60 = v51;
          if ( v51 >= 2 )
          {
            LOWORD(v50) = -1;
            v55 = -1;
            goto LABEL_68;
          }
        }
        while ( 1 )
        {
          v52 = *(_QWORD *)(v22 + 40LL * v50);
          if ( v52 == v18 )
          {
            *(_DWORD *)(qword_140C64E18 + v19) = v50;
            LOWORD(v21) = v50;
            goto LABEL_15;
          }
          if ( !v52 )
            break;
          if ( ++v50 >= v58 )
          {
            v51 = v60;
            goto LABEL_77;
          }
        }
        *(_DWORD *)(qword_140C64E18 + v19) = v50;
        v55 = v50;
      }
      else
      {
        LOWORD(v50) = (HIBYTE(v18)
                     + 37
                     * (BYTE6(v18)
                      + 37
                      * (BYTE5(v18)
                       + 37
                       * (BYTE4(v18)
                        + 37
                        * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 24011)))))))) & (v58 - 1);
        *(_DWORD *)(qword_140C64E18 + v19) = v44;
        v55 = v50;
      }
LABEL_68:
      LODWORD(v21) = *(_DWORD *)(v20 + 28);
      if ( (unsigned int)v21 < 3 * (*v23 >> 2) )
      {
        v24 = 1;
        *(_DWORD *)(v20 + 28) = v21 + 1;
        *(_QWORD *)(v22 + 40LL * (unsigned __int16)v50) = v18;
        LOWORD(v21) = v50;
LABEL_17:
        if ( v20 )
        {
          v6 = *(_WORD *)(v20 + 36) + v21;
          v25 = 2LL;
          v26 = ((v20 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v21;
          if ( v24 || (*(_BYTE *)(v26 + 8) & 4) != 0 )
          {
            v53 = *(_QWORD *)(v26 + 8);
            if ( a5 )
            {
              *(_QWORD *)(v26 + 8) = v53 & 0xFFFFFFFFFFFFFFF8uLL | 5;
            }
            else
            {
              v54 = v53 & 0xFFFFFFFFFFFFFFF8uLL | 1;
              *(_QWORD *)(v26 + 8) = v54;
              *(_QWORD *)(v26 + 8) = v54 & 7 | (8LL * (*(_QWORD *)(a1 + 1088) ^ *(_QWORD *)(a1 + 1128)));
              *(_DWORD *)(v26 + 20) = *(_DWORD *)(a1 + 1524);
              *(_DWORD *)(v26 + 16) = *(_DWORD *)(a1 + 1088);
            }
          }
          v27 = 0;
          goto LABEL_21;
        }
        return v5;
      }
      if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140C64E00) == -1073741823 )
        return v5;
      continue;
    }
  }
  if ( a5 )
    goto LABEL_36;
  if ( a1 )
  {
    v25 = 1LL;
    v27 = (a1 & 0x7FFFFFFF) - 1;
  }
  else
  {
    v25 = 0LL;
    v27 = -1;
  }
LABEL_21:
  v28 = qword_140C64DF0;
  v29 = ((*a3 & 3) == 2) + 1;
  if ( (unsigned int)(v29 + *(_DWORD *)(qword_140C64DF0 + 16)) > *(_DWORD *)(qword_140C64DF0 + 20) )
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140C64DD8) != -1073741823 )
    {
      v28 = qword_140C64DF0;
      if ( (unsigned int)(v29 + *(_DWORD *)(qword_140C64DF0 + 16)) <= *(_DWORD *)(qword_140C64DF0 + 20) )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    v30 = *(_DWORD *)(v28 + 16);
    *(_DWORD *)(v28 + 16) = v30 + v29;
    if ( v28 )
    {
      v5 = 16LL * v30 + ((v28 + 31) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (*a3 & 3) == 2 )
      {
        *(_OWORD *)v5 = *(_OWORD *)a3;
        *(_QWORD *)v5 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFF003uLL | 8;
        v5 += 16LL;
      }
      v31 = *(_QWORD *)v5;
      if ( (*a2 & 0x1FF) != 0 )
      {
        v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)v5 = v32;
        v33 = ((unsigned __int8)v32 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v32;
        *(_QWORD *)v5 = v33;
        v34 = ((unsigned __int8)v33 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 8 ^ v33;
        *(_QWORD *)v5 = v34;
        v35 = v34 & 0xF | (16LL * (unsigned int)(*(_QWORD *)a2 >> 12));
        *(_WORD *)(v5 + 10) = v6;
        *(_QWORD *)v5 = v35;
        *(_WORD *)(v5 + 8) = v61;
      }
      else
      {
        v37 = v31 & 0xFFFFFFFFFFFFFFFCuLL | 1;
        *(_QWORD *)v5 = v37;
        v38 = (8 * v25) | (((unsigned __int8)v37 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v37) & 0xFFFFFFFFFFFFFFE7uLL;
        *(_QWORD *)v5 = v38;
        *(_QWORD *)v5 = *(_QWORD *)a2 ^ (*a2 ^ (unsigned int)v38) & 0xFFF;
        if ( v25 == 2 )
          *(_WORD *)(v5 + 10) = v6;
        else
          *(_DWORD *)(v5 + 8) = v27;
      }
    }
  }
  return v5;
}
