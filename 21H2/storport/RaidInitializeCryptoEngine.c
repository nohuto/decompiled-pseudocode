/*
 * XREFs of RaidInitializeCryptoEngine @ 0x1C003157C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0020280 (memmove.c)
 *     memset @ 0x1C0020540 (memset.c)
 */

__int64 __fastcall RaidInitializeCryptoEngine(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  void *v4; // rcx
  unsigned int v5; // esi
  unsigned int *v6; // rbx
  size_t v8; // r14
  PVOID Pool; // rax
  __int64 v10; // r9
  SIZE_T v11; // rdx
  PVOID v12; // rax
  unsigned int i; // edi
  unsigned __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx

  v2 = a2[5];
  v4 = *(void **)(a1 + 5736);
  v5 = 0;
  v6 = 0LL;
  v8 = 20 * v2 + 12;
  if ( !v4 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 20 * v2 + 12, 0x72436152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5736) = Pool;
    v4 = Pool;
    if ( !Pool )
      goto LABEL_7;
  }
  memmove(v4, a2, v8);
  v6 = (unsigned int *)(a1 + 5744);
  *(_DWORD *)(a1 + 5744) = a2[4];
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (unsigned __int64)*(unsigned int *)(a1 + 5744) << 6;
  *(_DWORD *)(a1 + 5760) = 0;
  *(_BYTE *)(a1 + 5748) = 0;
  v12 = RaidAllocatePool(NonPagedPoolNx, v11, 0x72436152u, v10);
  *(_QWORD *)(a1 + 5752) = v12;
  if ( v12 )
  {
    memset(v12, 0, (unsigned __int64)*v6 << 6);
    for ( i = 0; i < *v6; ++i )
    {
      v14 = *((_QWORD *)v6 + 1) + ((unsigned __int64)i << 6);
      *(_DWORD *)(v14 + 44) = 0;
      *(_DWORD *)v14 = i;
      InitializeSListHead((PSLIST_HEADER)(v14 + 48));
    }
  }
  else
  {
LABEL_7:
    v15 = *(void **)(a1 + 5736);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x72436152u);
      *(_QWORD *)(a1 + 5736) = 0LL;
    }
    v16 = (void *)*((_QWORD *)v6 + 1);
    v5 = -1056964605;
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x72436152u);
      *(_QWORD *)(a1 + 5736) = 0LL;
    }
  }
  return v5;
}
