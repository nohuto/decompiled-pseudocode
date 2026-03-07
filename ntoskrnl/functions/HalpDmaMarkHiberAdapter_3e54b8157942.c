void __fastcall HalpDmaMarkHiberAdapter(PVOID MemoryMap)
{
  unsigned int v1; // r12d
  unsigned int i; // ebx
  _QWORD *v4; // rbp
  __int64 v5; // r14
  __int64 j; // rbx
  __int64 v7; // rax
  unsigned int *v8; // rdi
  _QWORD **v9; // r14
  _QWORD *v10; // r13
  unsigned int k; // ebx
  unsigned int v12; // ecx
  _QWORD *v13; // r14
  __int64 v14; // rbp
  unsigned int *v15; // r8
  __int64 *m; // rbx
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // r14
  _QWORD *v20; // r12
  unsigned int v21; // r13d
  unsigned int *v22; // r8
  __int64 *n; // rbx
  __int64 ii; // rbx
  unsigned int jj; // edi
  __int64 v26; // rax
  __int64 v27; // rcx
  void *v28; // r8
  __int64 v29; // [rsp+60h] [rbp+8h]
  __int64 v30; // [rsp+60h] [rbp+8h]

  v1 = 0;
  if ( MemoryMap )
  {
    if ( HalpDmaHibernateAdapter )
    {
      for ( i = 0; i < HalpDmaHibernateRegisterSetIndex; ++i )
      {
        v4 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * i);
        v5 = *((unsigned int *)&HalpDmaHibernateRegisterSets + 4 * i + 2);
        if ( *((_DWORD *)HalpDmaHibernateAdapter + 130) && !HalpHvIommu )
          HalpIommuDmarPageTableMarkHiberPhase(MemoryMap);
        if ( (_DWORD)v5 )
        {
          do
          {
            PoSetHiberRange(MemoryMap, 2u, v4, 0x48uLL, 0x746C6168u);
            v4 = (_QWORD *)v4[1];
            --v5;
          }
          while ( v5 );
        }
      }
    }
    for ( j = HalpDmaHibernateAdapters; (__int64 *)j != &HalpDmaHibernateAdapters; j = *(_QWORD *)j )
    {
      v7 = 2LL;
      v8 = (unsigned int *)(j - 16);
      v29 = 2LL;
      v9 = (_QWORD **)(j - 32);
      do
      {
        v10 = *v9;
        if ( *(_DWORD *)(j + 232) && !HalpHvIommu )
        {
          HalpIommuDmarPageTableMarkHiberPhase(MemoryMap);
          v7 = v29;
        }
        if ( *v8 )
        {
          do
          {
            PoSetHiberRange(MemoryMap, 2u, v10, 0x48uLL, 0x746C6168u);
            v10 = (_QWORD *)v10[1];
            ++v1;
          }
          while ( v1 < *v8 );
          v7 = v29;
        }
        ++v9;
        ++v8;
        --v7;
        v1 = 0;
        v29 = v7;
      }
      while ( v7 );
    }
  }
  else
  {
    if ( HalpDmaHibernateAdapter )
    {
      PoSetHiberRange(0LL, 0x10000u, HalpDmaHibernateAdapter, 0x288uLL, 0);
      for ( k = 0; k < HalpDmaHibernateRegisterSetIndex; ++k )
      {
        v12 = *((_DWORD *)&HalpDmaHibernateRegisterSets + 4 * k + 2);
        v13 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * k);
        if ( v12 )
        {
          v14 = v12;
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v13 >> 12), 1uLL, 0x746C6168u);
            v13 = (_QWORD *)v13[1];
            --v14;
          }
          while ( v14 );
        }
      }
      v15 = (unsigned int *)*((_QWORD *)HalpDmaHibernateAdapter + 38);
      if ( v15 )
        PoSetHiberRange(0LL, 0x10000u, v15, 8 * (((unsigned __int64)v15[10] + 4095) >> 12) + 48, 0x746C6168u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaHibernateAdapters, 0x10uLL, 0);
    for ( m = (__int64 *)HalpDmaHibernateAdapters; m != &HalpDmaHibernateAdapters; m = (__int64 *)*m )
    {
      PoSetHiberRange(0LL, 0x10000u, m - 36, 0x288uLL, 0);
      v17 = 2LL;
      v18 = m - 2;
      v30 = 2LL;
      v19 = m - 4;
      do
      {
        v20 = (_QWORD *)*v19;
        v21 = 0;
        if ( *(_DWORD *)v18 )
        {
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v20 >> 12), 1uLL, 0x746C6168u);
            v20 = (_QWORD *)v20[1];
            ++v21;
          }
          while ( v21 < *(_DWORD *)v18 );
          v17 = v30;
        }
        ++v19;
        v18 = (__int64 *)((char *)v18 + 4);
        v30 = --v17;
      }
      while ( v17 );
      v22 = (unsigned int *)m[2];
      if ( v22 )
        PoSetHiberRange(0LL, 0x10000u, v22, 8 * (((unsigned __int64)v22[10] + 4095) >> 12) + 48, 0x746C6168u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaShadowDumpAdapters, 0x10uLL, 0);
    for ( n = (__int64 *)HalpDmaShadowDumpAdapters; n != &HalpDmaShadowDumpAdapters; n = (__int64 *)*n )
      PoSetHiberRange(0LL, 0x10000u, n - 4, 0x30uLL, 0);
    for ( ii = HalpDmaControllers; (__int64 *)ii != &HalpDmaControllers; ii = *(_QWORD *)ii )
    {
      for ( jj = 0; jj < *(_DWORD *)(ii + 44); ++jj )
      {
        v26 = *(_QWORD *)(ii + 56);
        v27 = 160LL * jj;
        v28 = *(void **)(v27 + v26 + 128);
        if ( v28 )
          PoSetHiberRange(0LL, 0x10000u, v28, *(unsigned int *)(v27 + v26 + 120), 0x456C6148u);
      }
    }
  }
}
