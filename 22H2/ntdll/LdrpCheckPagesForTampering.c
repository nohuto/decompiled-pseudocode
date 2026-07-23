/*
 * XREFs of LdrpCheckPagesForTampering @ 0x180089F9C
 * Callers:
 *     LdrpGetImportDescriptorForSnap @ 0x1800142DC (LdrpGetImportDescriptorForSnap.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ZwQueryVirtualMemory @ 0x18009D940 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrpCheckPagesForTampering(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  char v3; // bl
  unsigned __int64 v4; // rbp
  _QWORD *Heap; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rax

  v2 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 16 * v2);
  if ( !Heap )
    return 1;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0LL;
    do
    {
      ++v6;
      Heap[2 * v7] = v4;
      v4 += 4096LL;
      v7 = v6;
    }
    while ( v6 < v2 );
  }
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, Heap, 16 * v2, 0LL) < 0 )
    goto LABEL_13;
  v8 = 0;
  if ( v2 )
  {
    v9 = 0LL;
    while ( (Heap[2 * v9 + 1] & 0x40000000) != 0 )
    {
      v9 = ++v8;
      if ( v8 >= v2 )
        goto LABEL_10;
    }
LABEL_13:
    v3 = 1;
  }
LABEL_10:
  RtlFreeHeap(LdrpHeap, 0, Heap);
  return v3;
}
