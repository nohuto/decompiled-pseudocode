/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1403714E0
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1403713DC (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14034FED0 (RtlpHpSegAlloc.c)
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x1403715C4 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x14037193C (RtlpHpVsContextAllocate.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rax

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*(unsigned __int16 *)(a1 + 956) - 16
    || (v10 = RtlpHpLfhContextAllocate(a1 + 896, a2, a3, a4), a3 = (unsigned int)v6, a2 = (unsigned int)v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 528) )
        v11 = RtlpHpLargeAlloc(a1, v7, v6, v5);
      else
        v11 = RtlpHpSegAlloc(a1 + (*(unsigned int *)(a1 + 336) < v6 ? 512LL : 320LL), v7, v6, v6, v5);
    }
    else
    {
      v11 = RtlpHpVsContextAllocate(a1 + 704, a2, a3, v5);
    }
    v10 = v11;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
