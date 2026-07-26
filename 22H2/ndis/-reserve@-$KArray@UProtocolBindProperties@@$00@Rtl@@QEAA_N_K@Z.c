/*
 * XREFs of ?reserve@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01269E4
 * Callers:
 *     ?grow@?$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0125220 (-grow@-$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1C00ACD84 (--1ProtocolBindProperties@@QEAA@XZ.c)
 */

char __fastcall Rtl::KArray<ProtocolBindProperties,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebx
  _BYTE *PoolWithTag; // rbp
  unsigned int v7; // eax
  unsigned int i; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v5 = 0;
    if ( is_mul_ok(0x40uLL, a2) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 << 6, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v7 = a1[1];
        for ( i = 0; i < v7; v7 = a1[1] )
        {
          v9 = *((_QWORD *)a1 + 1);
          v10 = i++;
          v10 <<= 6;
          *(_OWORD *)&PoolWithTag[v10] = *(_OWORD *)(v10 + v9);
          v11 = *(_QWORD *)(v10 + v9 + 16);
          *(_QWORD *)(v10 + v9 + 16) = 0LL;
          *(_QWORD *)&PoolWithTag[v10 + 16] = v11;
          *(_DWORD *)&PoolWithTag[v10 + 24] = *(_DWORD *)(v10 + v9 + 24);
          *(_DWORD *)&PoolWithTag[v10 + 28] = *(_DWORD *)(v10 + v9 + 28);
          *(_QWORD *)&PoolWithTag[v10 + 32] = *(_QWORD *)(v10 + v9 + 32);
          LODWORD(v11) = *(_DWORD *)(v10 + v9 + 40);
          *(_QWORD *)(v10 + v9 + 32) = 0LL;
          *(_QWORD *)(v10 + v9 + 24) = 0LL;
          *(_DWORD *)&PoolWithTag[v10 + 40] = v11;
          *(_DWORD *)&PoolWithTag[v10 + 44] = *(_DWORD *)(v10 + v9 + 44);
          *(_QWORD *)&PoolWithTag[v10 + 48] = *(_QWORD *)(v10 + v9 + 48);
          *(_QWORD *)(v10 + v9 + 48) = 0LL;
          *(_QWORD *)(v10 + v9 + 40) = 0LL;
          PoolWithTag[v10 + 56] = *(_BYTE *)(v10 + v9 + 56);
          *(_DWORD *)&PoolWithTag[v10 + 60] = *(_DWORD *)(v10 + v9 + 60);
        }
        v12 = (void *)*((_QWORD *)a1 + 1);
        if ( v12 )
        {
          if ( v7 )
          {
            do
              ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)(*((_QWORD *)a1 + 1)
                                                                                       + ((unsigned __int64)v5++ << 6)));
            while ( v5 < a1[1] );
            v12 = (void *)*((_QWORD *)a1 + 1);
          }
          ExFreePoolWithTag(v12, 0x7272414Bu);
        }
        *a1 = v2;
        *((_QWORD *)a1 + 1) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
