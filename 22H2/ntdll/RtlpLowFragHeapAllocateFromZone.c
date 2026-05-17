/*
 * XREFs of RtlpLowFragHeapAllocateFromZone @ 0x1800712B4
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocateFromZone(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 Heap; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 3280);
    if ( v4 )
    {
      v5 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 1u);
      if ( (unsigned int)v5 < 0xF )
        return (v5 << 6) + v4 + 32;
    }
    Heap = RtlAllocateHeap(*(_QWORD *)(a1 + 24), 0x800000u, 1008LL);
    v12 = (_QWORD *)Heap;
    if ( !Heap )
      return 0LL;
    *(_DWORD *)(Heap + 16) = 1;
    v6 = (Heap + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive(a1, v9, v10, v11);
    if ( v4 == *(_QWORD *)(a1 + 8 * v3 + 3280) )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    RtlFreeHeap(*(_QWORD *)(a1 + 24), 0x800000u, (__int64)v12);
  }
  v13 = *(_QWORD **)(a1 + 16);
  if ( *v13 != a1 + 8 )
    __fastfail(3u);
  v12[1] = v13;
  *v12 = a1 + 8;
  *v13 = v12;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 8 * v3 + 3280) = v12;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
