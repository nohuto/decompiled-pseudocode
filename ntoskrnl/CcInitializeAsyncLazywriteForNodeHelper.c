/*
 * XREFs of CcInitializeAsyncLazywriteForNodeHelper @ 0x140537B10
 * Callers:
 *     <none>
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall CcInitializeAsyncLazywriteForNodeHelper(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r12
  char v8; // di
  int v11; // r15d
  __int64 PoolWithTagFromNode; // rax
  __int64 *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 *v16; // rcx

  v4 = CcMaxAsyncLazywriteWorkers;
  *(_QWORD *)(a3 + 320) = a3 + 312;
  v5 = a3 + 288;
  *(_QWORD *)(a3 + 312) = a3 + 312;
  v6 = a3 + 400;
  *(_QWORD *)(a3 + 296) = a3 + 288;
  *(_QWORD *)(a3 + 432) = a3 + 424;
  *(_QWORD *)(a3 + 424) = a3 + 424;
  v8 = 0;
  *(_QWORD *)(a3 + 288) = a3 + 288;
  *(_QWORD *)(a3 + 408) = a3 + 400;
  *(_QWORD *)(a3 + 400) = a3 + 400;
  *(_WORD *)(a3 + 328) = 1;
  *(_BYTE *)(a3 + 330) = 6;
  *(_DWORD *)(a3 + 332) = 0;
  *(_QWORD *)(a3 + 344) = a3 + 336;
  *(_QWORD *)(a3 + 336) = a3 + 336;
  *(_DWORD *)(a3 + 304) = 0;
  *(_DWORD *)(a3 + 416) = 0;
  memset((void *)(a3 + 352), 255, 4LL * v4);
  v11 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(
                              NonPagedPoolNx,
                              0x50uLL,
                              1901552451LL,
                              *(_DWORD *)(a3 + 24) | 0x80000000,
                              0);
      if ( !PoolWithTagFromNode )
        break;
      *(_QWORD *)(PoolWithTagFromNode + 32) = 7LL;
      *(_QWORD *)(PoolWithTagFromNode + 56) = a1;
      *(_QWORD *)(PoolWithTagFromNode + 64) = a2;
      *(_QWORD *)(PoolWithTagFromNode + 72) = a3;
      *(_DWORD *)(PoolWithTagFromNode + 40) = v11;
      *(_QWORD *)(PoolWithTagFromNode + 16) = CcAsyncLazywriteWorkerThread;
      *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
      *(_QWORD *)PoolWithTagFromNode = 0LL;
      v13 = *(__int64 **)(v5 + 8);
      if ( *v13 != v5 )
LABEL_12:
        __fastfail(3u);
      *(_QWORD *)PoolWithTagFromNode = v5;
      *(_QWORD *)(PoolWithTagFromNode + 8) = v13;
      *v13 = PoolWithTagFromNode;
      *(_QWORD *)(v5 + 8) = PoolWithTagFromNode;
      if ( (*(_DWORD *)(a2 + 1600) & 2) == 0 && ++v11 < (unsigned int)CcMaxAsyncLazywriteWorkers )
        continue;
      goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v14 = 0;
    if ( *(_DWORD *)(a2 + 1596) )
    {
      while ( 1 )
      {
        v15 = ExpAllocatePoolWithTagFromNode(
                NonPagedPoolNx,
                0x50uLL,
                1901552451LL,
                *(_DWORD *)(a3 + 24) | 0x80000000,
                0);
        if ( !v15 )
          break;
        *(_QWORD *)(v15 + 32) = 8LL;
        *(_QWORD *)(v15 + 56) = a1;
        *(_QWORD *)(v15 + 64) = a2;
        *(_QWORD *)(v15 + 72) = a3;
        *(_DWORD *)(v15 + 40) = v14;
        *(_QWORD *)(v15 + 16) = CcCompleteAsyncLazywriteWorkerThread;
        *(_QWORD *)(v15 + 24) = v15;
        *(_QWORD *)v15 = 0LL;
        v16 = *(__int64 **)(v6 + 8);
        if ( *v16 != v6 )
          goto LABEL_12;
        *(_QWORD *)v15 = v6;
        ++v14;
        *(_QWORD *)(v15 + 8) = v16;
        *v16 = v15;
        *(_QWORD *)(v6 + 8) = v15;
        if ( v14 >= *(_DWORD *)(a2 + 1596) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v8 = 1;
    }
  }
  *a4 = v8;
  return v8;
}
