__int64 __fastcall HalDmaAllocateCrashDumpRegistersEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rsi
  __int64 *v6; // r13
  __int64 v8; // rax
  int v9; // edx
  signed int v10; // r8d
  _QWORD *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rbx
  unsigned int *v14; // r15
  __int64 v15; // rdi
  __int64 *i; // rcx
  __int64 result; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  unsigned int v20; // ebp
  __int64 MapRegisters; // rax
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r12
  _QWORD *v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  __int64 *j; // rcx
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  __int128 v40; // [rsp+40h] [rbp-48h] BYREF
  __int64 v41; // [rsp+50h] [rbp-38h]
  int v42; // [rsp+90h] [rbp+8h] BYREF

  v5 = a2;
  LODWORD(v41) = 0;
  v6 = (__int64 *)a1;
  if ( *(_DWORD *)(a1 + 16) != 1634550870 )
    v6 = 0LL;
  v40 = 0LL;
  v8 = HalpDmaExtractFromVerifierShadowAdapter();
  v13 = v8;
  if ( !v8 )
    return 3221225485LL;
  if ( !v9 )
    return 3221225485LL;
  if ( !v11 )
    return 3221225485LL;
  v14 = a5;
  if ( !a5 || (unsigned int)v10 > 1 )
    return 3221225485LL;
  if ( *(_BYTE *)(v8 + 440) == (_BYTE)v12 && *(_BYTE *)(v8 + 445) != (_BYTE)v12 )
  {
    *v11 = v12;
    *v14 = v5;
    v15 = v10;
    *(_QWORD *)(v8 + 240) = v12;
    *(_DWORD *)(v8 + 248) = v12;
    *(_QWORD *)(v8 + 8LL * v10 + 256) = v12;
    *(_DWORD *)(v8 + 4LL * v10 + 272) = v12;
LABEL_11:
    if ( *(_QWORD *)a4 )
      *(_QWORD *)(*(_QWORD *)a4 + 56LL) = *(_QWORD *)a4;
    ++*(_DWORD *)(v13 + 4 * v15 + 280);
    for ( i = (__int64 *)HalpDmaHibernateAdapters; i != &HalpDmaHibernateAdapters; i = (__int64 *)*i )
    {
      if ( i - 36 == (__int64 *)v13 )
        goto LABEL_16;
    }
    v18 = (_QWORD *)qword_140C63FB8;
    v19 = (_QWORD *)(v13 + 288);
    if ( *(__int64 **)qword_140C63FB8 == &HalpDmaHibernateAdapters )
    {
      *v19 = &HalpDmaHibernateAdapters;
      v19[1] = v18;
      *v18 = v19;
      qword_140C63FB8 = (__int64)v19;
LABEL_16:
      if ( !v6 )
        return 0LL;
      for ( j = (__int64 *)HalpDmaShadowDumpAdapters; j != &HalpDmaShadowDumpAdapters; j = (__int64 *)*j )
      {
        if ( j - 4 == v6 )
          return 0LL;
      }
      v38 = (_QWORD *)qword_140C63FC8;
      v39 = v6 + 4;
      if ( *(__int64 **)qword_140C63FC8 == &HalpDmaShadowDumpAdapters )
      {
        *v39 = &HalpDmaShadowDumpAdapters;
        v6[5] = (__int64)v38;
        *v38 = v39;
        qword_140C63FC8 = (__int64)(v6 + 4);
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  v15 = v10;
  v20 = *(_DWORD *)(v8 + 4LL * v10 + 272);
  if ( (unsigned int)v5 <= v20 )
  {
    *a5 = v5;
    *v11 = *(_QWORD *)(v8 + 8LL * v10 + 256);
    goto LABEL_11;
  }
  if ( (unsigned int)v5 > *(_DWORD *)(v8 + 232) )
    return 3221225485LL;
  if ( KeGetCurrentIrql() )
  {
    if ( v8 == -272 || *(_BYTE *)(v8 + 442) != (_BYTE)v12 )
    {
      if ( HalpDmaHibernateRegisterPhase != 1 )
      {
        v42 = v5 - v20;
        v31 = HalpDmaAllocateMapRegistersAtHighLevel(v8, &v42);
        v32 = v31;
        if ( v31 )
        {
          if ( v42 == (_DWORD)v5 - v20 )
          {
            if ( *(_QWORD *)(v13 + 8 * v15 + 256) )
            {
              _mm_lfence();
              v33 = *(_DWORD *)(v13 + 4 * v15 + 272);
              v34 = *(_QWORD *)(v13 + 8 * v15 + 256);
              if ( v33 > 1 )
              {
                v35 = v33 - 1;
                do
                {
                  v34 = *(_QWORD *)(v34 + 8);
                  --v35;
                }
                while ( v35 );
              }
              v36 = v42;
              *(_QWORD *)(v34 + 8) = v32;
              *(_DWORD *)(v13 + 4 * v15 + 272) += v36;
              *(_DWORD *)(v13 + 248) = v5;
            }
            else
            {
              *(_QWORD *)(v13 + 240) = v31;
              *(_DWORD *)(v13 + 248) = v5;
              *(_QWORD *)(v13 + 8 * v15 + 256) = v31;
              *(_DWORD *)(v13 + 4 * v15 + 272) = v5;
            }
            *(_QWORD *)a4 = *(_QWORD *)(v13 + 8 * v15 + 256);
            *v14 = v5;
            goto LABEL_11;
          }
          v30 = v42 + v20;
          *(_QWORD *)a4 = 0LL;
          *v14 = v30;
          HalpDmaFreeMapRegisters(v13, v32);
        }
        else
        {
          *(_QWORD *)a4 = 0LL;
          *v14 = v20;
        }
        return 3221225626LL;
      }
      result = 3221225659LL;
    }
    else
    {
      result = 3221225626LL;
    }
    *v11 = v12;
    *v14 = *(_DWORD *)(v13 + 4LL * v10 + 272);
    return result;
  }
  MapRegisters = HalpDmaAllocateMapRegisters(v8, (unsigned int)v5);
  v22 = MapRegisters;
  if ( !MapRegisters )
    return 3221225626LL;
  *(_QWORD *)(v13 + 8 * v15 + 256) = MapRegisters;
  *(_DWORD *)(v13 + 4 * v15 + 272) = v5;
  if ( *(_DWORD *)(v13 + 520) != 3 )
    goto LABEL_37;
  v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))(HalpDmaIommuInterfaceFcnTable + 128))(
          *(_QWORD *)(*(_QWORD *)(v13 + 512) + 40LL),
          v5 << 12,
          0LL,
          0LL,
          0LL,
          MapRegisters + 24);
  if ( v42 >= 0 )
  {
    if ( !HalpIsHvPresent() )
      goto LABEL_37;
    LODWORD(v40) = 2;
    v41 = v5;
    v24 = HalpMmAllocCtxAlloc(v23, 8 * v5);
    v25 = v24;
    if ( v24 )
    {
      *((_QWORD *)&v40 + 1) = v24;
      v26 = (_QWORD *)v22;
      v27 = 0LL;
      do
      {
        *(_QWORD *)(v25 + 8 * v27) = *v26 >> 12;
        v27 = (unsigned int)(v27 + 1);
        v26 = (_QWORD *)v26[1];
      }
      while ( v26 );
      v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, __int64))(HalpDmaIommuInterfaceFcnTable + 144))(
              *(_QWORD *)(v22 + 24),
              0LL,
              3LL,
              &v40,
              v22 + 24);
      HalpMmAllocCtxFree(v28, v25);
      v29 = v42;
      if ( v42 < 0 )
      {
        HalpDmaFreeMapRegisters(v13, v22);
        return v29;
      }
      *(_BYTE *)(v22 + 64) = 1;
LABEL_37:
      *v14 = v5;
      *(_QWORD *)a4 = *(_QWORD *)(v13 + 8 * v15 + 256);
      goto LABEL_11;
    }
  }
  HalpDmaFreeMapRegisters(v13, v22);
  return (unsigned int)v42;
}
