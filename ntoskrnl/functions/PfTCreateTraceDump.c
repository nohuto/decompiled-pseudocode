__int64 __fastcall PfTCreateTraceDump(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  unsigned int v3; // r15d
  int v4; // esi
  int v5; // r12d
  unsigned int i; // edx
  size_t v7; // rbx
  _WORD *Pool2; // rax
  _WORD *v9; // rdi
  __int64 *v10; // r14
  __int16 v11; // r13
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // r8
  int v27; // esi
  int v28; // r12d
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // ecx
  unsigned __int64 v33; // rdx
  unsigned int v34; // r12d
  __int64 *v35; // rcx
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  _WORD *v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // r14
  unsigned int v41; // edi
  __int64 v42; // rcx
  unsigned __int16 v43; // r8
  unsigned __int16 v44; // dx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _OWORD *v48; // r11
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  _OWORD *v52; // r9
  unsigned __int16 v53; // dx
  unsigned int v54; // ecx
  unsigned __int16 v55; // r8
  unsigned int v56; // ecx
  int v57; // eax
  unsigned int v58; // ebx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r10
  __int64 v69; // rcx
  unsigned __int64 v70; // [rsp+20h] [rbp-108h]
  unsigned __int64 v71; // [rsp+28h] [rbp-100h]
  __int64 *v72; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v73; // [rsp+38h] [rbp-F0h]
  __int64 v74; // [rsp+40h] [rbp-E8h]
  _QWORD v75[12]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 v77; // [rsp+138h] [rbp+10h]
  __int16 v78; // [rsp+140h] [rbp+18h]
  _WORD *P; // [rsp+148h] [rbp+20h]

  memset(v75, 0, sizeof(v75));
  v1 = qword_140C64E18;
  v2 = qword_140C64E20;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_140C64E18; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v7 = 2LL * i;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v7, 1951688272LL);
  P = Pool2;
  v9 = Pool2;
  if ( !Pool2 )
  {
    v58 = -1073741670;
    goto LABEL_71;
  }
  memset(Pool2, 0, v7);
  v10 = &qword_140C64DF0;
  v11 = *(_WORD *)(qword_140C64E20 + 36);
  v78 = v11;
  do
  {
    v10 = (__int64 *)v10[1];
    v12 = 0;
    if ( !*((_DWORD *)v10 + 4) )
      continue;
    do
    {
      v13 = (((unsigned __int64)v10 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v12;
      v14 = *(_QWORD *)v13;
      if ( ((unsigned __int8)*(_QWORD *)v13 & 3u) >= 2 )
      {
        v36 = ((unsigned int)v14 >> 2) & 0x3FF;
        v4 += v36;
        v12 = v36 + v12 - 1;
        if ( (v14 & 3) != 2 )
          goto LABEL_26;
        LODWORD(v14) = *(_DWORD *)(v13 + 16);
        v13 += 16LL;
      }
      else
      {
        ++v4;
      }
      if ( (v14 & 3) != 0 )
      {
        v16 = -1;
        if ( (*(_BYTE *)v13 & 0x18) == 0x10 )
          v15 = *(_WORD *)(v13 + 10);
        else
          v15 = -1;
      }
      else
      {
        v15 = *(_WORD *)(v13 + 10);
        v16 = *(_WORD *)(v13 + 8);
      }
      if ( v16 == 0xFFFF )
      {
        v20 = 0LL;
      }
      else
      {
        v17 = *(unsigned __int16 *)(v2 + 36);
        if ( v16 < (unsigned __int16)v17 || v16 >= (unsigned int)(v17 + *(_DWORD *)(v2 + 32)) )
        {
          v66 = v2;
          while ( 1 )
          {
            v66 = *(_QWORD *)(v66 + 8);
            if ( (__int64 *)v66 == &qword_140C64E18 )
              v66 = qword_140C64E20;
            if ( v66 == v2 )
              break;
            v67 = *(unsigned __int16 *)(v66 + 36);
            if ( v16 >= (unsigned __int16)v67 && v16 < (unsigned int)(v67 + *(_DWORD *)(v66 + 32)) )
            {
              v2 = v66;
              v18 = v16 - v67;
              v19 = v66 + 47;
              goto LABEL_14;
            }
          }
          v20 = 0LL;
        }
        else
        {
          v18 = v16 - v17;
          v19 = v2 + 47;
LABEL_14:
          v20 = (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v18 + 8;
        }
      }
      if ( v15 == 0xFFFF )
      {
        v24 = 0LL;
      }
      else
      {
        v21 = *(unsigned __int16 *)(v2 + 36);
        if ( v15 < (unsigned __int16)v21 || v15 >= (unsigned int)(v21 + *(_DWORD *)(v2 + 32)) )
        {
          v68 = v2;
          while ( 1 )
          {
            v68 = *(_QWORD *)(v68 + 8);
            if ( (__int64 *)v68 == &qword_140C64E18 )
              v68 = qword_140C64E20;
            if ( v68 == v2 )
              break;
            v69 = *(unsigned __int16 *)(v68 + 36);
            if ( v15 >= (unsigned __int16)v69 && v15 < (unsigned int)(v69 + *(_DWORD *)(v68 + 32)) )
            {
              v2 = v68;
              v9 = P;
              v22 = v15 - v69;
              v23 = v68 + 47;
              goto LABEL_19;
            }
          }
          v9 = P;
          v24 = 0LL;
        }
        else
        {
          v22 = v15 - v21;
          v23 = v2 + 47;
LABEL_19:
          v24 = (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v22 + 8;
        }
      }
      if ( v20 )
      {
        v25 = v16 - v11;
        if ( v9[v25] != 0xFFFF )
        {
          v9[v25] = -1;
          ++v5;
        }
      }
      if ( v24 )
      {
        v26 = v15 - v11;
        if ( v9[v26] != 0xFFFF )
        {
          v9[v26] = -1;
          ++v5;
        }
      }
LABEL_26:
      ++v12;
    }
    while ( v12 < *((_DWORD *)v10 + 4) );
    v3 = 0;
  }
  while ( v10 != (__int64 *)qword_140C64DF0 );
  if ( v4 )
  {
    v27 = 16 * v4;
    v28 = 32 * v5;
    v29 = v28 + ((v27 + 63) & 0xFFFFFFF8);
    v30 = ExAllocatePool2(256LL, v29, 1146381904LL);
    v74 = v30;
    if ( v30 )
    {
      v31 = v30 + 32;
      v77 = 0;
      *(_OWORD *)(v30 + 16) = 0LL;
      *(_OWORD *)(v30 + 32) = 0LL;
      *(_QWORD *)(v30 + 48) = 0LL;
      *(_DWORD *)(v30 + 24) = v29 - 16;
      v32 = v27 + 24 + v28;
      *(_DWORD *)(v30 + 16) = 852013;
      v33 = v30 + 32 + (unsigned int)(v27 + 24);
      *(_DWORD *)(v30 + 20) = 1128485697;
      v34 = 0;
      *(_DWORD *)(v30 + 28) = 0;
      *(_DWORD *)(v30 + 40) = v27 + 24;
      *(_DWORD *)(v30 + 48) = v32;
      v71 = v30 + 32 + v32;
      v35 = &qword_140C64DF0;
      v75[9] = v71;
      *(_DWORD *)(v30 + 32) = 24;
      v70 = v33;
      while ( 1 )
      {
        v35 = (__int64 *)v35[1];
        v72 = v35;
        if ( *((_DWORD *)v35 + 4) )
        {
          v37 = ((unsigned __int64)v35 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v73 = v37;
          do
          {
            v38 = (_WORD *)(v37 + 16LL * v3);
            v39 = 16LL * v34;
            v40 = v39 + v31 + 24;
            if ( ((unsigned __int8)*(_QWORD *)v38 & 3u) >= 2 )
            {
              v41 = ((unsigned int)*(_QWORD *)v38 >> 2) & 0x3FF;
              v3 = v41 + v3 - 1;
            }
            else
            {
              v41 = 1;
            }
            if ( v40 + (unsigned __int64)(16 * v41) > v33 )
              break;
            memmove((void *)(v39 + v31 + 24), v38, 16 * v41);
            *(_DWORD *)(v31 + 4) += v41;
            v34 += v41;
            if ( (*(_DWORD *)v38 & 3) == 2 )
            {
              v38 += 8;
              v40 = v39 + v31 + 40;
            }
            v42 = *(_QWORD *)v38;
            if ( ((unsigned __int8)*(_QWORD *)v38 & 3u) < 2 )
            {
              if ( (v42 & 3) != 0 )
              {
                v44 = -1;
                if ( (v42 & 0x18) == 0x10 )
                  v43 = v38[5];
                else
                  v43 = -1;
              }
              else
              {
                v43 = v38[5];
                v44 = v38[4];
              }
              if ( v44 == 0xFFFF )
              {
                v48 = 0LL;
              }
              else
              {
                v45 = *(unsigned __int16 *)(v2 + 36);
                if ( v44 < (unsigned __int16)v45 || v44 >= (unsigned int)(v45 + *(_DWORD *)(v2 + 32)) )
                {
                  v62 = v2;
                  while ( 1 )
                  {
                    v62 = *(_QWORD *)(v62 + 8);
                    if ( (__int64 *)v62 == &qword_140C64E18 )
                      v62 = qword_140C64E20;
                    if ( v62 == v2 )
                      break;
                    v63 = *(unsigned __int16 *)(v62 + 36);
                    if ( v44 >= (unsigned __int16)v63 && v44 < (unsigned int)(v63 + *(_DWORD *)(v62 + 32)) )
                    {
                      v2 = v62;
                      v46 = v44 - v63;
                      v47 = v62 + 47;
                      goto LABEL_54;
                    }
                  }
                  v48 = 0LL;
                }
                else
                {
                  v46 = v44 - v45;
                  v47 = v2 + 47;
LABEL_54:
                  v48 = (_OWORD *)((v47 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v46 + 8);
                }
              }
              if ( v43 == 0xFFFF )
              {
                v52 = 0LL;
              }
              else
              {
                v49 = *(unsigned __int16 *)(v2 + 36);
                if ( v43 < (unsigned __int16)v49 || v43 >= (unsigned int)(v49 + *(_DWORD *)(v2 + 32)) )
                {
                  v64 = v2;
                  while ( 1 )
                  {
                    v64 = *(_QWORD *)(v64 + 8);
                    if ( (__int64 *)v64 == &qword_140C64E18 )
                      v64 = qword_140C64E20;
                    if ( v64 == v2 )
                      break;
                    v65 = *(unsigned __int16 *)(v64 + 36);
                    if ( v43 >= (unsigned __int16)v65 && v43 < (unsigned int)(v65 + *(_DWORD *)(v64 + 32)) )
                    {
                      v2 = v64;
                      v50 = v43 - v65;
                      v51 = v64 + 47;
                      goto LABEL_59;
                    }
                  }
                  v52 = 0LL;
                }
                else
                {
                  v50 = v43 - v49;
                  v51 = v2 + 47;
LABEL_59:
                  v52 = (_OWORD *)((v51 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v50 + 8);
                }
              }
              if ( v48 )
              {
                v53 = v44 - v78;
                LOWORD(v54) = P[v53];
                if ( (_WORD)v54 == 0xFFFF )
                {
                  v54 = v77;
                  P[v53] = v77++;
                  v60 = 32LL * v54;
                  if ( v60 + v70 + 32 > v71 )
                  {
                    v77 = v54;
                  }
                  else
                  {
                    *(_OWORD *)(v60 + v70) = *v48;
                    *(_OWORD *)(v60 + v70 + 16) = v48[1];
                    ++*(_WORD *)(v31 + 12);
                  }
                }
                *(_WORD *)(v40 + 8) = v54;
              }
              if ( v52 )
              {
                v55 = v43 - v78;
                LOWORD(v56) = P[v55];
                if ( (_WORD)v56 == 0xFFFF )
                {
                  v56 = v77;
                  P[v55] = v77++;
                  v61 = 32LL * v56;
                  if ( v70 + v61 + 32 > v71 )
                  {
                    v77 = v56;
                  }
                  else
                  {
                    *(_OWORD *)(v61 + v70) = *v52;
                    *(_OWORD *)(v61 + v70 + 16) = v52[1];
                    ++*(_WORD *)(v31 + 12);
                  }
                }
                *(_WORD *)(v40 + 10) = v56;
              }
            }
            v35 = v72;
            ++v3;
            v33 = v70;
            v37 = v73;
          }
          while ( v3 < *((_DWORD *)v72 + 4) );
        }
        if ( v35 == (__int64 *)qword_140C64DF0 )
          break;
        v3 = 0;
      }
      v57 = LODWORD(v75[9]) - *(_DWORD *)(v31 + 16) - v31;
      v9 = P;
      v58 = 0;
      *(_WORD *)(v31 + 14) = HIWORD(v75[10]);
      *(_DWORD *)(v31 + 20) = v57;
      *a1 = v74;
    }
    else
    {
      v58 = -1073741670;
    }
  }
  else
  {
    v58 = -2147483622;
  }
  ExFreePoolWithTag(v9, 0);
LABEL_71:
  PfTFreeBufferList(&unk_140C64DD8);
  PfTFreeBufferList(&unk_140C64E00);
  return v58;
}
