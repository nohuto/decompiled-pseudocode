/*
 * XREFs of CcWriteBehindAsyncPreProcess @ 0x140539404
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1405387F4 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcWriteBehindPreProcess @ 0x140219A70 (CcWriteBehindPreProcess.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcWriteBehindAsyncPreProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v7; // ebx
  void *PoolWithTagFromNode; // rax
  int v9; // eax
  unsigned int v10; // ebx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v7 = *(_DWORD *)(v3 + 248);
    memset((void *)v3, 0, 0x108uLL);
    *(_DWORD *)(v3 + 248) = v7;
  }
  else
  {
    PoolWithTagFromNode = (void *)ExpAllocatePoolWithTagFromNode(
                                    NonPagedPoolNx,
                                    0x108uLL,
                                    1113023299LL,
                                    KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000,
                                    0);
    v3 = (__int64)PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      *(_DWORD *)a2 = -1073741670;
      return 0LL;
    }
    memset(PoolWithTagFromNode, 0, 0x108uLL);
    *(_QWORD *)(a1 + 16) = v3;
  }
  *(_QWORD *)(a2 + 8) = a1;
  *(_WORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 112) = a2;
  *(_QWORD *)(v3 + 256) = a1;
  *(_BYTE *)(v3 + 139) = 0;
  v9 = CcWriteBehindPreProcess(v3);
  v10 = v9;
  if ( !v9 )
  {
    *(_DWORD *)(v3 + 104) = 1;
    *(_QWORD *)(v3 + 96) = &CcNoDelay;
    *(_QWORD *)(v3 + 72) = a3;
    return 0LL;
  }
  DbgPrintEx(
    0x7Fu,
    3u,
    "[%04x:%04x]CcWriteBehindAsyncPreProcess: WBPreProcess FAILED (%lx): PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    v9,
    *(const void **)(a1 + 144),
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
  if ( v10 == 2 )
  {
    ExFreePoolWithTag((PVOID)v3, 0x42576343u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return v10;
}
