/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x18004EEB0
 * Callers:
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlWakeConditionVariable @ 0x18004F0A0 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x18009DC60 (ZwDuplicateObject.c)
 */

__int64 __fastcall TppPoolUpdateTrimmedWorker(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 result; // rax
  _QWORD *Heap; // rbx
  _QWORD *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    return RtlReleaseSRWLockExclusive(v4);
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 24LL);
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(v4);
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v10, 0, 0, 2) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (__int64)Heap);
    return RtlReleaseSRWLockExclusive(v4);
  }
  Heap[2] = v10;
  v8 = *(_QWORD **)(a1 + 464);
  if ( *v8 != a1 + 456 )
    __fastfail(3u);
  Heap[1] = v8;
  *Heap = a1 + 456;
  *v8 = Heap;
  *(_QWORD *)(a1 + 464) = Heap;
  v9 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v9;
  RtlReleaseSRWLockExclusive(v4);
  result = v9 ^ (v9 >> 11);
  if ( (((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 11)) & 0xFFE) == 0 )
    return RtlWakeConditionVariable(a1 + 448);
  return result;
}
