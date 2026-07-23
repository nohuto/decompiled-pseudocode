/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800FE8CC
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800FE390 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpHeapTrkHash @ 0x1800FE2E0 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FEBD4 (RtlpHeapTrkTrackStack.c)
 */

void __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax

  Heap = RtlAllocateHeap(HeapHandle, 0, 0x28uLL);
  if ( Heap )
  {
    v5 = (unsigned int)RtlpHeapTrkHash(a2);
    Heap[2] = a1;
    Heap[3] = a2;
    v6 = RtlpHeapTrkTrackStack();
    Heap[4] = v6;
    if ( v6 )
    {
      v7 = v5 & 0xF;
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016DBC0 + 8 * v7));
      v8 = qword_18016DA50 + 16 * v5;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap = v9;
      Heap[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016DBC0 + 8 * v7));
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
    }
  }
}
