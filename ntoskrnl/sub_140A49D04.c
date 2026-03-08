/*
 * XREFs of sub_140A49D04 @ 0x140A49D04
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     StringCbLengthW @ 0x14035ACC4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A49D04(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
  signed int v7; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  __int64 *v14; // rbp
  __int64 v15; // rbp
  unsigned int *v16; // rax
  unsigned int j; // r8d
  __int64 v18; // r9
  unsigned int *v19; // rdx
  unsigned int v20; // r8d
  unsigned int *v21; // rdx
  unsigned int *v22; // rax
  unsigned int v23; // r12d
  bool v24; // cc
  unsigned int k; // r8d
  __int64 v26; // rax
  unsigned int *v27; // rdx
  size_t v28; // rdx
  _WORD *v29; // r15
  __int64 v30; // r11
  unsigned int v31; // eax
  size_t v32; // r13
  void *Pool2; // rax
  void *v34; // rdi
  unsigned int *v35; // rax
  unsigned int v36; // r8d
  void *v37; // rcx
  __int64 v38; // r9
  unsigned int *v39; // rdx
  unsigned int v40; // ecx
  const void *v41; // r15
  __int64 v42; // r11
  unsigned int v43; // eax
  size_t v44; // r13
  void *v45; // rax
  unsigned int *v46; // rcx
  unsigned int v47; // r15d
  unsigned int *v48; // rax
  unsigned int v49; // r10d
  void *v50; // rdx
  void *v51; // r8
  __int64 v52; // r11
  unsigned int *v53; // r9
  unsigned int v54; // r10d
  unsigned int *v55; // r9
  unsigned int *v56; // rax
  __int64 v57; // r13
  unsigned int *v58; // r11
  unsigned int v59; // r8d
  unsigned int *v60; // r11
  unsigned int v61; // r13d
  void *v62; // rdx
  void *v63; // rax
  __int64 v64; // r15
  unsigned int *v65; // rbx
  unsigned int v66; // edx
  unsigned int *v67; // rax
  unsigned int *v68; // rcx
  int v69; // edx
  unsigned int v70; // ecx
  signed int v71; // r12d
  _DWORD *v72; // rax
  int v73; // r12d
  __int64 v74; // r9
  unsigned int v75; // eax
  unsigned __int64 v76; // rdx
  unsigned int v77; // ecx
  unsigned int v78; // eax
  size_t pcbLength[2]; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(const wchar_t **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = (unsigned int *)v8;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  v13 = *v9;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( v13 )
    v14 = (__int64 *)(v9 + 1);
  if ( v13 != 8 )
    return (unsigned int)-1073741789;
  v15 = *v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v16 = (unsigned int *)v8;
  for ( j = 0; j < 4; ++j )
  {
    v18 = *v16;
    v19 = v16 + 1;
    if ( v16 + 1 < v16 )
      return (unsigned int)-1073741675;
    v16 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  v20 = *v16;
  v21 = v16 + 1;
  if ( v16 + 1 < v16 )
    return (unsigned int)-1073741675;
  v22 = 0LL;
  if ( v20 )
    v22 = v21;
  if ( v20 != 4 )
    return (unsigned int)-1073741789;
  v23 = *v22;
  v24 = *(_DWORD *)a1 <= 5u;
  pcbLength[0] = 0LL;
  if ( v24 )
    return (unsigned int)-1073741811;
  for ( k = 0; k < 5; ++k )
  {
    v26 = *(unsigned int *)v8;
    v27 = (unsigned int *)(v8 + 2);
    if ( v8 + 2 < v8 )
      return (unsigned int)-1073741675;
    v8 = (const wchar_t *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      return (unsigned int)-1073741675;
  }
  v28 = *(unsigned int *)v8;
  if ( v8 + 2 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v28 )
    return (unsigned int)-1073741762;
  v29 = v8 + 2;
  if ( (v28 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v29[((unsigned __int64)(unsigned int)v28 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v8 + 2, v28, pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength[0] + 2 != v30 )
    return (unsigned int)-1073741762;
  v31 = 2 * (pcbLength[0] >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength[0] >> 1) == -2 )
    return (unsigned int)-1073741762;
  v32 = v31;
  Pool2 = (void *)ExAllocatePool2(256LL, v31, 542329939LL);
  v34 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v29, v32);
  v35 = *(unsigned int **)(a1 + 8);
  pcbLength[0] = 0LL;
  if ( !v35 || *(_DWORD *)a1 <= 6u )
    goto LABEL_73;
  v36 = 0;
  v37 = v34;
  do
  {
    v38 = *v35;
    v39 = v35 + 1;
    v34 = v37;
    if ( v35 + 1 < v35 )
      goto LABEL_89;
    v35 = (unsigned int *)((char *)v39 + v38);
    if ( (unsigned int *)((char *)v39 + v38) < v39 )
      goto LABEL_89;
    ++v36;
  }
  while ( v36 < 6 );
  v40 = *v35;
  if ( v35 + 1 < v35 )
    goto LABEL_89;
  if ( v40 )
  {
    v41 = v35 + 1;
    if ( (v40 & 1) == 0
      && !*((_WORD *)v35 + ((unsigned __int64)v40 >> 1) + 1)
      && StringCbLengthW((STRSAFE_PCNZWCH)v41, v40, pcbLength) >= 0
      && pcbLength[0] + 2 == v42 )
    {
      v43 = 2 * (pcbLength[0] >> 1) + 2;
      if ( 2 * (unsigned int)(pcbLength[0] >> 1) != -2 )
      {
        v44 = v43;
        v45 = (void *)ExAllocatePool2(256LL, v43, 542329939LL);
        if ( !v45 )
        {
LABEL_54:
          v7 = -1073741801;
          goto LABEL_90;
        }
        v6 = v45;
        memmove(v45, v41, v44);
        v46 = *(unsigned int **)(a1 + 8);
        v47 = 0;
        if ( !v46 || *(_DWORD *)a1 <= 7u )
        {
LABEL_73:
          v7 = -1073741811;
          goto LABEL_90;
        }
        v48 = *(unsigned int **)(a1 + 8);
        v49 = 0;
        v50 = v6;
        v51 = v34;
        do
        {
          v52 = *v48;
          v53 = v48 + 1;
          v34 = v51;
          v6 = v50;
          if ( v48 + 1 < v48 )
            goto LABEL_89;
          v48 = (unsigned int *)((char *)v53 + v52);
          if ( (unsigned int *)((char *)v53 + v52) < v53 )
            goto LABEL_89;
          ++v49;
        }
        while ( v49 < 7 );
        v54 = *v48;
        if ( v48 + 1 >= v48 )
        {
          v55 = 0LL;
          if ( v54 )
            v55 = v48 + 1;
          if ( *(_DWORD *)a1 <= 8u )
            goto LABEL_73;
          v56 = *(unsigned int **)(a1 + 8);
          do
          {
            v57 = *v56;
            v58 = v56 + 1;
            v34 = v51;
            v6 = v50;
            if ( v56 + 1 < v56 )
              goto LABEL_89;
            v56 = (unsigned int *)((char *)v58 + v57);
            if ( (unsigned int *)((char *)v58 + v57) < v58 )
              goto LABEL_89;
            ++v47;
          }
          while ( v47 < 8 );
          v59 = *v56;
          if ( v56 + 1 >= v56 )
          {
            v60 = 0LL;
            if ( v59 )
              v60 = v56 + 1;
            if ( *(_DWORD *)a1 <= 9u )
              goto LABEL_73;
            v61 = 0;
            v62 = v34;
            v63 = v6;
            do
            {
              v64 = *v46;
              v65 = v46 + 1;
              v34 = v62;
              v6 = v63;
              if ( v46 + 1 < v46 )
                goto LABEL_89;
              v46 = (unsigned int *)((char *)v65 + v64);
              if ( (unsigned int *)((char *)v65 + v64) < v65 )
                goto LABEL_89;
              ++v61;
            }
            while ( v61 < 9 );
            v66 = *v46;
            v67 = v46 + 1;
            if ( v46 + 1 < v46 )
              goto LABEL_89;
            v68 = 0LL;
            if ( v66 )
              v68 = v67;
            if ( !qword_140D53448 )
            {
              v7 = -1073741637;
              goto LABEL_90;
            }
            v7 = qword_140D53448(v23, v34, v6, v55, v54, v60, v59, v68, v66);
            if ( v7 < 0 )
              goto LABEL_90;
            v69 = *(_DWORD *)(a2 + 32);
            if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
            {
              v70 = *(_DWORD *)(a2 + 16) + 52;
              v71 = v7;
              if ( v70 >= *(_DWORD *)(a2 + 16) + 48 )
              {
                v7 = v70 + v69 < v70 ? 0xC0000095 : 0;
                if ( v70 + v69 < v70 )
                  goto LABEL_90;
                *(_DWORD *)(a4 + 4) = 20;
                v72 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
                v7 = 0;
                if ( !v72 )
                  goto LABEL_54;
                *(_QWORD *)(a4 + 8) = v72;
                *(_DWORD *)a4 = 0;
                v73 = v71 | 0x10000000;
                if ( v72 + 1 >= v72 )
                {
                  if ( v72 + 2 > (_DWORD *)((char *)v72 + *(unsigned int *)(a4 + 4)) )
                  {
LABEL_96:
                    v7 = -1073741789;
                    goto LABEL_90;
                  }
                  *v72 = 4;
                  v72[1] = v73;
                  ++*(_DWORD *)a4;
                  v74 = *(_QWORD *)(a4 + 8);
                  if ( !v74 )
                  {
                    v75 = *(_DWORD *)(a4 + 4);
                    if ( v75 + 12 < v75 )
                    {
                      *(_DWORD *)(a4 + 4) = -1;
                      goto LABEL_89;
                    }
                    *(_DWORD *)(a4 + 4) = v75 + 12;
                    goto LABEL_100;
                  }
                  v76 = *(_QWORD *)(a4 + 8);
                  v77 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v78 = *(_DWORD *)v76 + 4;
                      if ( *(_DWORD *)v76 >= 0xFFFFFFFC || v76 + v78 < v76 )
                        break;
                      ++v77;
                      v76 += v78;
                      if ( v77 >= *(_DWORD *)a4 )
                        goto LABEL_105;
                    }
                  }
                  else
                  {
LABEL_105:
                    if ( v76 + 4 >= v76 )
                    {
                      if ( v76 + 12 > v74 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_96;
                      *(_DWORD *)v76 = 8;
                      *(_QWORD *)(v76 + 4) = v15;
LABEL_100:
                      ++*(_DWORD *)a4;
                      goto LABEL_90;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_89:
        v7 = -1073741675;
        goto LABEL_90;
      }
    }
  }
  v7 = -1073741762;
LABEL_90:
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v7;
}
