/*
 * XREFs of HalacpiIrqTranslateResourceRequirementsIsa @ 0x1408422C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1402FCE50 (HalpIsInterruptTypeSecondary.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalacpiIrqTranslateResourceRequirementsIsa(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 *a5)
{
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  char *v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // r13d
  char v14; // r12
  int v15; // r14d
  char *v16; // r9
  unsigned int v17; // ecx
  unsigned int v18; // eax
  _BYTE *v19; // r8
  unsigned int v20; // r10d
  unsigned int *v21; // r9
  __int64 v22; // r14
  unsigned int v23; // edx
  unsigned int v24; // r11d
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 Pool2; // rax
  _OWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // r10
  __int64 v36; // rsi
  __int64 v37; // [rsp+20h] [rbp-48h]
  unsigned int v38; // [rsp+78h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v38 = 0;
  v9 = 0;
  if ( v5 + 0x100000 <= 0xFFFFE )
    goto LABEL_34;
  v10 = *(_DWORD *)(a2 + 12);
  if ( v10 + 0x100000 <= 0xFFFFE )
    return 3221225473LL;
  if ( HalpIsInterruptTypeSecondary(0, v5) && HalpIsInterruptTypeSecondary(0, v10) )
  {
LABEL_34:
    Pool2 = ExAllocatePool2(256LL, 32LL, 1768710472LL);
    *a5 = Pool2;
    if ( Pool2 )
    {
      *a4 = 1;
      v30 = (_OWORD *)*a5;
      *v30 = *(_OWORD *)a2;
      v30[1] = *(_OWORD *)(a2 + 16);
      return 0LL;
    }
    return 3221225626LL;
  }
  v37 = 32 * (v10 - v5 + 3);
  v11 = (char *)ExAllocatePool2(256LL, v37, 1768710472LL);
  if ( !v11 )
    return 3221225626LL;
  v12 = *(_DWORD *)(a2 + 8);
  if ( v12 > 2 || *(_DWORD *)(a2 + 12) < 2u )
  {
    v9 = 1;
    *(_OWORD *)v11 = *(_OWORD *)a2;
    *((_OWORD *)v11 + 1) = *(_OWORD *)(a2 + 16);
  }
  else
  {
    if ( v12 < 2 )
    {
      v9 = 1;
      *(_OWORD *)v11 = *(_OWORD *)a2;
      *((_OWORD *)v11 + 1) = *(_OWORD *)(a2 + 16);
      *((_DWORD *)v11 + 2) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v11 + 3) = 1;
    }
    if ( *(_DWORD *)(a2 + 12) > 2u )
    {
      v31 = 32LL * v9++;
      *(_OWORD *)&v11[v31] = *(_OWORD *)a2;
      *(_OWORD *)&v11[v31 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v11[v31 + 12] = *(_DWORD *)(a2 + 12);
      *(_DWORD *)&v11[v31 + 8] = 3;
    }
    if ( *(_DWORD *)(a2 + 8) > 9u || *(_DWORD *)(a2 + 12) < 9u )
    {
      v32 = 32LL * v9++;
      *(_OWORD *)&v11[v32] = *(_OWORD *)a2;
      *(_OWORD *)&v11[v32 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v11[v32 + 8] = 9;
      *(_DWORD *)&v11[v32 + 12] = 9;
    }
  }
  v13 = (unsigned __int16)word_140C61CCE;
  v14 = 0;
  v15 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v16 = &v11[32 * v15];
      v17 = *((_DWORD *)v16 + 3);
      if ( v17 >= 0x10 )
        break;
      v18 = *((_DWORD *)v16 + 2);
      if ( v18 >= 0x10 )
        break;
      if ( v17 >= v13 && v18 <= v13 )
      {
        if ( v14 )
        {
          v6 = -1073741595;
          goto LABEL_23;
        }
        v14 = 1;
        if ( v18 < v13 )
        {
          v33 = 32LL * v9++;
          *(_DWORD *)&v11[v33 + 8] = v18;
          *(_DWORD *)&v11[v33 + 12] = v13 - 1;
        }
        if ( *((_DWORD *)v16 + 3) > v13 )
        {
          v34 = 32LL * v9++;
          *(_DWORD *)&v11[v34 + 8] = v13 + 1;
          *(_DWORD *)&v11[v34 + 12] = *((_DWORD *)v16 + 3);
        }
        memmove(&v11[32 * v15], v16 + 32, 32LL * (v9 - v15));
        --v9;
      }
      if ( ++v15 >= v9 )
        goto LABEL_12;
    }
    v6 = -1073741823;
  }
  else
  {
LABEL_12:
    v19 = (_BYTE *)ExAllocatePool2(256LL, v37, 1768710472LL);
    if ( v19 )
    {
      v20 = 0;
      if ( v9 )
      {
        v21 = (unsigned int *)(v11 + 12);
        v22 = v9;
        do
        {
          v23 = *(v21 - 1);
          v24 = *v21;
          do
          {
            v25 = v23;
            if ( v23 < v24 )
            {
              v35 = (_DWORD *)HalpPicVectorRedirect + v23;
              do
              {
                v36 = v23 + 1;
                if ( *v35 + 1 != *((_DWORD *)HalpPicVectorRedirect + v36) )
                  break;
                ++v35;
                ++v23;
              }
              while ( (unsigned int)v36 < v24 );
              v20 = v38;
            }
            v26 = 32LL * v20;
            *(_OWORD *)&v19[v26] = *(_OWORD *)a2;
            *(_OWORD *)&v19[v26 + 16] = *(_OWORD *)(a2 + 16);
            if ( v20 )
              v19[v26] = 8;
            ++v20;
            *(_DWORD *)&v19[v26 + 8] = *((_DWORD *)HalpPicVectorRedirect + v25);
            v27 = v23++;
            v38 = v20;
            *(_DWORD *)&v19[v26 + 12] = *((_DWORD *)HalpPicVectorRedirect + v27);
          }
          while ( v23 <= v24 );
          v21 += 8;
          --v22;
        }
        while ( v22 );
      }
      *a4 = v20;
      if ( v20 )
        *a5 = (__int64)v19;
      else
        ExFreePoolWithTag(v19, 0);
    }
    else
    {
      v6 = -1073741670;
    }
  }
LABEL_23:
  ExFreePoolWithTag(v11, 0);
  return v6;
}
