__int64 __fastcall SeCaptureSidAndAttributesArray(
        char *Src,
        unsigned int a2,
        char a3,
        char *a4,
        unsigned int a5,
        int a6,
        int a7,
        PVOID *a8,
        unsigned int *a9)
{
  char *v9; // r13
  char *PoolWithTag; // r9
  int v13; // r12d
  unsigned int v14; // r14d
  unsigned int v15; // edi
  unsigned int i; // edx
  char *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  char *v23; // r9
  unsigned int v24; // r8d
  unsigned __int64 v25; // rdx
  PVOID *v26; // r13
  char *v27; // rdi
  char *v28; // r15
  unsigned int v29; // r14d
  _QWORD *v30; // r12
  unsigned __int8 *v31; // rdx
  unsigned int v32; // edi
  char *v34; // rcx
  unsigned int v35; // esi
  _QWORD *v36; // r15
  unsigned int v37; // r14d
  void *v38; // rdi
  int v39; // [rsp+24h] [rbp-64h]
  unsigned int v40; // [rsp+28h] [rbp-60h]
  int v41; // [rsp+30h] [rbp-58h]
  char *v42; // [rsp+30h] [rbp-58h]
  char *P; // [rsp+38h] [rbp-50h]
  char v44; // [rsp+A0h] [rbp+18h]
  int v46; // [rsp+C0h] [rbp+38h]

  v44 = a3;
  v9 = a4;
  PoolWithTag = 0LL;
  P = 0LL;
  v13 = 0;
  v46 = 0;
  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x1000 )
    return 3221225485LL;
  v14 = 16 * a2;
  v41 = 16 * a2 + 3;
  v15 = v41 & 0xFFFFFFFC;
  v40 = v41 & 0xFFFFFFFC;
  if ( a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, v15, 0x61546553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( v14 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = &Src[v14];
      if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v18 = 0;
    v39 = 0;
    while ( v18 < a2 )
    {
      v19 = 16LL * v18;
      v20 = *(_QWORD *)&Src[v19];
      v21 = v20 + 1;
      if ( v20 + 1 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      v22 = *(unsigned __int8 *)v21;
      if ( v22 > 0xF )
      {
        v13 = -1073741704;
        v46 = -1073741704;
        v15 = v40;
        break;
      }
      v23 = &PoolWithTag[v19];
      *(_QWORD *)v23 = v20;
      v24 = 4 * v22 + 8;
      *((_DWORD *)v23 + 2) = v24;
      if ( (v20 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = v20 + v24;
      if ( v25 > 0x7FFFFFFF0000LL || v25 < v20 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v15 = ((*((_DWORD *)v23 + 2) + 3) & 0xFFFFFFFC) + v40;
      v40 = v15;
      v18 = ++v39;
      v13 = 0;
      v46 = 0;
      PoolWithTag = P;
    }
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v13;
    }
    v9 = a4;
    a3 = v44;
  }
  else
  {
    for ( i = 0; i < a2; ++i )
      v15 += (4 * *(unsigned __int8 *)(*(_QWORD *)&Src[16 * i] + 1LL) + 11) & 0xFFFFFFFC;
  }
  *a9 = v15;
  if ( !v9 )
  {
    v27 = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, v15, 0x61536553u);
    v26 = a8;
    *a8 = v27;
    if ( v27 )
    {
      a3 = v44;
      goto LABEL_32;
    }
    if ( v44 )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  if ( v15 <= a5 )
  {
    v26 = a8;
    *a8 = a4;
    v27 = a4;
LABEL_32:
    if ( a3 )
    {
      memmove(v27, Src, v14);
      v34 = &v27[v41 & 0xFFFFFFFC];
      v42 = v34;
      v35 = 0;
      v36 = *v26;
      while ( v35 < a2 && !v13 )
      {
        memmove(v34, *(const void **)&P[16 * v35], *(unsigned int *)&P[16 * v35 + 8]);
        v36[2 * v35] = v42;
        v37 = *(_DWORD *)&P[16 * v35 + 8];
        v34 = &v42[(v37 + 3) & 0xFFFFFFFC];
        v42 = v34;
        if ( (v36[2 * v35 + 1] & 0x1FFFFF80) != 0 )
        {
          v13 = -1073741811;
        }
        else
        {
          v38 = (void *)v36[2 * v35];
          if ( !RtlValidSid(v38) || RtlLengthSid(v38) != v37 )
            v13 = -1073741704;
          v34 = v42;
        }
        ++v35;
      }
    }
    else
    {
      memmove(v27, Src, v14);
      v28 = &v27[v41 & 0xFFFFFFFC];
      v29 = 0;
      v30 = *v26;
      while ( v29 < a2 )
      {
        v31 = (unsigned __int8 *)v30[2 * v29];
        v32 = 4 * v31[1] + 8;
        memmove(v28, v31, v32);
        v30[2 * v29++] = v28;
        v28 += (v32 + 3) & 0xFFFFFFFC;
      }
      v26 = a8;
      v13 = v46;
    }
    if ( v44 )
      ExFreePoolWithTag(P, 0);
    if ( !a4 && v13 < 0 )
    {
      ExFreePoolWithTag(*v26, 0);
      *v26 = 0LL;
    }
    return (unsigned int)v13;
  }
  if ( a3 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 3221225507LL;
}
