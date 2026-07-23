/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1402233E0
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1402232D4 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpLargeAlloc @ 0x140222AE0 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x1402234C4 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x140223844 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x1403145A0 (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  size_t v6; // rbx
  unsigned int v7; // esi
  int v9; // ebp
  __int64 v10; // rcx
  void *v12; // rax

  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*(unsigned __int16 *)(a1 + 892) - 16
    || (v10 = RtlpHpLfhContextAllocate(a1 + 832), a3 = (unsigned int)v6, a2 = v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 464) )
        v12 = RtlpHpLargeAlloc(a1, v7, v6, a4);
      else
        v12 = (void *)RtlpHpSegAlloc((unsigned int)a1 + (*(unsigned int *)(a1 + 272) < v6 ? 448 : 256), v7, v6, v6, a4);
    }
    else
    {
      v12 = (void *)RtlpHpVsContextAllocate(a1 + 640, a2, a3, a4);
    }
    v10 = (__int64)v12;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
