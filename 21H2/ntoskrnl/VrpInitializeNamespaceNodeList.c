/*
 * XREFs of VrpInitializeNamespaceNodeList @ 0x140863DE8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpInitializeNamespaceNodeList(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbp
  size_t v9; // r15
  size_t v10; // rsi
  void *v11; // r14
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  void *v14; // rcx

  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 16LL;
  *(_QWORD *)(a1 + 40) = 8LL;
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0x14 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = v4 - 1;
    v6 = v4 + 19;
    if ( v6 < 0x14 )
    {
      v3 = -2147483637;
      goto LABEL_22;
    }
    v7 = *(_QWORD *)(a1 + 40);
    v8 = v6 & ~v5;
    v9 = v2 * v7;
    if ( !is_mul_ok(v2, v7) || (v10 = v8 * v7, !is_mul_ok(v8, v7)) )
    {
      v3 = -2147483637;
      goto LABEL_19;
    }
    v11 = *(void **)(a1 + 72);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8 * v7, 0x72615452u);
    v13 = PoolWithTag;
    if ( v11 )
    {
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v10);
      if ( !v13 )
        goto LABEL_18;
      if ( v9 >= v10 )
        v9 = v10;
      memmove(v13, v11, v9);
      ExFreePoolWithTag(v11, 0x72615452u);
    }
    else if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
    }
    if ( v13 )
    {
      *(_QWORD *)(a1 + 72) = v13;
      v3 = 0;
      *(_QWORD *)(a1 + 56) = v8;
      goto LABEL_19;
    }
LABEL_18:
    v3 = -2147024882;
LABEL_19:
    if ( !v3 )
      return v3;
    goto LABEL_22;
  }
  v3 = -2147024809;
LABEL_22:
  v14 = *(void **)(a1 + 72);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x72615452u);
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  return v3;
}
