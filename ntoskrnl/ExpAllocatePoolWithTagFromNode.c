/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x140310130
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140216768 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncCopyRead @ 0x140216AA0 (CcAsyncCopyRead.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     CcInitializePartition @ 0x14039B5F0 (CcInitializePartition.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403B90D0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializeNumaNodeForVolume @ 0x1403BB12C (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeQuickLWSThreadItem @ 0x1403BB470 (CcInitializeQuickLWSThreadItem.c)
 *     CcInitializeAsyncLazywriteForNodeHelper @ 0x140537B10 (CcInitializeAsyncLazywriteForNodeHelper.c)
 *     CcInitializeNumaNode @ 0x140538418 (CcInitializeNumaNode.c)
 *     CcWriteBehindAsyncPreProcess @ 0x140539404 (CcWriteBehindAsyncPreProcess.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAB128 (ExpAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExpAllocatePoolWithTagPriority @ 0x140AAB2A4 (ExpAllocatePoolWithTagPriority.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  int v9; // ebx
  __int64 result; // rax
  _QWORD *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 >= 0 )
    v7 = 1;
  else
    v7 = (unsigned __int16)KeNumberNodes;
  v8 = a5;
  v9 = a4 & 0x7FFFFFFF;
  v12 = 0;
  if ( a4 >= 0 )
    v9 = a4;
  while ( 1 )
  {
    result = ExAllocateHeapPool(a1, v8);
    if ( result )
      break;
    if ( !--v7 || (unsigned int)MmGetNextNode(v9, &v12) == -1 )
    {
      ++ExPoolFailures;
      if ( (a1 & 2) != 0 )
      {
        v11 = (_QWORD *)qword_140C74680[0];
        if ( (a1 & 0x200) != 0 )
          v11 = (_QWORD *)qword_140C74688;
        KeBugCheckEx(0x41u, a2, (unsigned int)v11[17], (unsigned int)v11[21] + (unsigned int)v11[23], 0LL);
      }
      if ( (a1 & 0x10) != 0 )
        RtlRaiseStatus(-1073741670);
      return 0LL;
    }
  }
  return result;
}
