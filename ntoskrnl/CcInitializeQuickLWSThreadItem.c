/*
 * XREFs of CcInitializeQuickLWSThreadItem @ 0x1403BB470
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1403BAB18 (CcInitializePrivateVolumeCacheMap.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall CcInitializeQuickLWSThreadItem(_QWORD *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 PoolWithTagFromNode; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdx

  v1 = a1[8];
  v2 = 0;
  if ( !v1 )
    KeBugCheckEx(0x34u, 0xD06uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(
                          NonPagedPoolNx,
                          0x50uLL,
                          1901552451LL,
                          *(_DWORD *)(v1 + 24) | 0x80000000,
                          0);
  v5 = PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    *(_DWORD *)(PoolWithTagFromNode + 32) = 6;
    v6 = a1[4];
    *(_DWORD *)(v5 + 36) = -1;
    *(_QWORD *)(v5 + 56) = v6;
    *(_QWORD *)(v5 + 64) = a1;
    *(_QWORD *)(v5 + 72) = v1;
    *(_DWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 16) = CcQuickLazyWriteScanForVolume;
    *(_QWORD *)(v5 + 24) = v5;
    *(_QWORD *)v5 = 0LL;
    v7 = (__int64 *)a1[194];
    if ( (_QWORD *)*v7 != a1 + 193 )
      __fastfail(3u);
    *(_QWORD *)v5 = a1 + 193;
    v2 = 1;
    *(_QWORD *)(v5 + 8) = v7;
    *v7 = v5;
    a1[194] = v5;
  }
  return v2;
}
