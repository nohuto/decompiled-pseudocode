/*
 * XREFs of QueryRegistryValue @ 0x18011A024
 * Callers:
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(__int64 a1, __int64 a2, _DWORD *a3, void *a4, _DWORD *a5)
{
  _DWORD *Heap; // rdi
  int ValueKey; // ebx
  size_t v10; // rax

  if ( !a5 )
    return 3221225485LL;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(*a5 + 12));
  if ( !Heap )
    return 3221225626LL;
  ValueKey = NtQueryValueKey();
  if ( ValueKey < 0 )
    goto LABEL_13;
  v10 = (unsigned int)Heap[2];
  if ( (_DWORD)v10 )
  {
    if ( (unsigned int)v10 > *a5 )
    {
LABEL_15:
      ValueKey = -1073741789;
      *a5 = Heap[2];
      goto LABEL_16;
    }
    *a5 = v10;
    if ( a4 )
      memmove(a4, Heap + 3, v10);
    if ( a3 )
      *a3 = Heap[1];
LABEL_13:
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_16;
    goto LABEL_15;
  }
  ValueKey = -1073741811;
LABEL_16:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)ValueKey;
}
