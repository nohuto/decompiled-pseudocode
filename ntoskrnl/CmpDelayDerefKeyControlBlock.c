/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1407AF9B0
 * Callers:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14067D4A8 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1407A751C (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407ACFB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A16968 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A21354 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406C01CC (CmpDoQueueLateUnloadWorker.c)
 */

int __fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  signed __int64 v2; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  _QWORD *v6; // r10
  bool v7; // dl
  _QWORD *v8; // rax
  _QWORD *v9; // rdx

  v2 = *(_QWORD *)BugCheckParameter2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)BugCheckParameter2 <= 1uLL )
  {
LABEL_9:
    v8 = (_QWORD *)(BugCheckParameter2 + 224);
    if ( (_QWORD *)*v8 != v8 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
    v9 = *(_QWORD **)(a2 + 8);
    if ( *v9 != a2 )
      __fastfail(3u);
    *v8 = a2;
    *(_QWORD *)(BugCheckParameter2 + 232) = v9;
    *v9 = v8;
    *(_QWORD *)(a2 + 8) = v8;
    *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
  }
  else
  {
    while ( 1 )
    {
      v5 = v2 - 1;
      v6 = (_QWORD *)v2;
      v7 = v2 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v4 + 2944) == 1;
      v8 = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v2);
      v2 = (signed __int64)v8;
      if ( v8 == v6 )
        break;
      if ( (unsigned __int64)v8 <= 1 )
        goto LABEL_9;
    }
    if ( (unsigned __int64)v8 < v5 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
    if ( v7 )
      LODWORD(v8) = CmpDoQueueLateUnloadWorker(v4);
  }
  return (int)v8;
}
