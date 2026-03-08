/*
 * XREFs of CcWriteBehind @ 0x140219768
 * Callers:
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140217120 (CcCachemapUninitWorkerThread.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402E1014 (CcWaitForUninitializeCacheMap.c)
 * Callees:
 *     CcGetCurrentNumaNode @ 0x14020D750 (CcGetCurrentNumaNode.c)
 *     CcAllocateWorkQueueEntry @ 0x140219880 (CcAllocateWorkQueueEntry.c)
 *     CcWriteBehindInternal @ 0x140219990 (CcWriteBehindInternal.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140219E24 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  void *v4; // r14
  __int64 CurrentNumaNode; // r15
  __int64 v8; // r13
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r9
  ULONG_PTR PoolWithTagFromNode; // rax
  _QWORD v14[20]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v15; // [rsp+108h] [rbp+67h] BYREF

  v3 = *(_QWORD *)(a1 + 536);
  v4 = 0LL;
  v15 = 0LL;
  CurrentNumaNode = a3;
  if ( !a3 )
    CurrentNumaNode = CcGetCurrentNumaNode(v3, a1);
  v8 = *(_QWORD *)(a1 + 600);
  v9 = CcAllocateWorkQueueEntry(v3, v8, CurrentNumaNode, &v15);
  v10 = (_QWORD *)v15;
  if ( v9 < 0 )
    goto LABEL_5;
  *(_DWORD *)(v15 + 128) = 2;
  v10[1] = 0LL;
  *v10 = 0LL;
  v10[2] = a1;
  v10[3] = a2;
  if ( !(unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v3) )
    goto LABEL_5;
  if ( *(_QWORD *)(v3 + 1256) == v11
    && *(_DWORD *)(a1 + 524) == (_DWORD)v11
    && (*(_DWORD *)(a1 + 152) & 0x10000) == 0
    && *(_BYTE *)(v3 + 1294) == (_BYTE)v11
    && (v12 = *(unsigned int *)(CurrentNumaNode + 24),
        LODWORD(v12) = v12 | 0x80000000,
        PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(512LL, 80LL, 1901552451LL, v12, v11),
        (v4 = (void *)PoolWithTagFromNode) != 0LL) )
  {
    *(_QWORD *)(PoolWithTagFromNode + 56) = v3;
    *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
    *(_QWORD *)(PoolWithTagFromNode + 64) = v8;
    *(_QWORD *)(PoolWithTagFromNode + 72) = CurrentNumaNode;
    *((_BYTE *)v10 + 56) = 1;
    v10[6] = v10 + 5;
    v10[5] = v10 + 5;
    *((_WORD *)v10 + 16) = 1;
    *((_BYTE *)v10 + 34) = 6;
    *((_DWORD *)v10 + 9) = 0;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcWriteBehindInternal;
    *(_QWORD *)(PoolWithTagFromNode + 24) = v10;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    ExQueueWorkItemToPartition(PoolWithTagFromNode);
    KeWaitForSingleObject(v10 + 4, Executive, 0, 0, 0LL);
  }
  else
  {
LABEL_5:
    memset(v14, 0, sizeof(v14));
    if ( !v10 )
    {
      v14[17] = v3;
      v10 = v14;
      v14[18] = v8;
      v14[1] = 0LL;
      v14[0] = 0LL;
      LOBYTE(v14[7]) = 0;
      v14[19] = CurrentNumaNode;
      LODWORD(v14[16]) = 2;
      v14[2] = a1;
      v14[3] = a2;
    }
    *((_BYTE *)v10 + 56) = 0;
    CcWriteBehindInternal(v10);
    if ( v10 == v14 )
      v10 = 0LL;
  }
  if ( v10 )
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v10);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}
