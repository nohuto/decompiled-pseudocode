/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x140604EC8
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140605758 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     ExpPoolTrackerReturnLimit @ 0x140313B50 (ExpPoolTrackerReturnLimit.c)
 *     ExGetHeapFromVA @ 0x140313BF0 (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140462C3A (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(ULONG_PTR BugCheckParameter3, unsigned __int64 a2)
{
  __int64 v4; // rax
  int v5; // r10d
  __int64 v6; // rcx
  int v7; // r11d
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r9
  ULONG_PTR HeapFromVA; // rax

  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v4 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, 512, 1819242320, BugCheckParameter3, a2);
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  v5 = PoolTrackTableMask;
  v6 = PoolTrackTableMask & 0x40DEDA5;
  v7 = PoolTrackTableMask & 0x40DEDA5;
  v8 = (__int64)*(&ExPoolTagTables + v4);
  while ( 1 )
  {
    v9 = v8 + 80 * v6;
    if ( *(_DWORD *)v9 == 1819242320 )
      break;
    if ( *(_DWORD *)v9 || (v10 = *(_DWORD *)(PoolTrackTable + 80 * v6)) == 0 )
    {
      v6 = v5 & (unsigned int)(v6 + 1);
      if ( (_DWORD)v6 == v7 )
      {
        ExpRemovePoolTrackerExpansion(1819242320, a2, 0);
        goto LABEL_14;
      }
    }
    else
    {
      *(_DWORD *)v9 = v10;
      v11 = *(_QWORD *)(PoolTrackTable + 80 * v6 + 72);
      if ( v11 )
        *(_QWORD *)(v9 + 72) = v11;
    }
  }
  ExpPoolTrackerReturnLimit(1, a2, v9);
LABEL_14:
  HeapFromVA = ExGetHeapFromVA(BugCheckParameter3);
  return RtlpHpFreeHeap(HeapFromVA, BugCheckParameter3, 0, 0LL, 0LL);
}
