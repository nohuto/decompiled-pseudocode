/*
 * XREFs of RtlpAllocateUserBlock @ 0x180020A20
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A10B0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A4D0 (RtlpLogHeapSubSegmentAllocCached.c)
 */

_BYTE *__fastcall RtlpAllocateUserBlock(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  _BYTE *UserBlockFromHeap; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // eax

  v4 = a2;
  v8 = a2;
  v9 = a1 + 48 * (a2 - 5LL);
  ++*(_WORD *)(v9 + 28);
  UserBlockFromHeap = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v9);
  if ( UserBlockFromHeap )
  {
    ++*(_WORD *)(v9 + 32);
LABEL_3:
    v11 = 1LL << UserBlockFromHeap[16];
    if ( v11 > 0xF0000 )
      v11 = 983040LL;
    v12 = v11 + *((unsigned __int16 *)UserBlockFromHeap + 9);
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), UserBlockFromHeap, v12, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v12);
    goto LABEL_9;
  }
  if ( (unsigned __int8)v4 > 7u )
  {
    UserBlockFromHeap = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (v4 - 6)));
    if ( UserBlockFromHeap )
      goto LABEL_3;
  }
  UserBlockFromHeap = RtlpAllocateUserBlockFromHeap(*(PVOID *)(a1 + 24), v4, a3, a4);
  if ( UserBlockFromHeap )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 48 * v8 - 224), 1u);
LABEL_9:
  v14 = *(unsigned __int16 *)(v9 + 28);
  if ( v14 > 0x40 )
  {
    if ( v14 < *(unsigned __int16 *)(v9 + 30) + (*(unsigned __int16 *)(v9 + 30) >> 1)
      && *(unsigned __int16 *)(v9 + 32) < v14 - (v14 >> 1) )
    {
      v16 = *(_DWORD *)(v9 + 20);
      if ( v16 >= 2 )
      {
        v17 = *(_DWORD *)(v9 + 24);
        if ( v17 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), v17 - 1, v17);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 20), v16 + 1, v16);
      }
    }
    *(_WORD *)(v9 + 28) = 0;
    *(_WORD *)(v9 + 30) = 0;
    *(_WORD *)(v9 + 32) = 0;
  }
  return UserBlockFromHeap;
}
