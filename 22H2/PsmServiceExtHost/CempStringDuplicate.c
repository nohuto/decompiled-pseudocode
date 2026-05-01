/*
 * XREFs of CempStringDuplicate @ 0x18002EF40
 * Callers:
 *     CrmSrvActivityStart @ 0x18002ECD8 (CrmSrvActivityStart.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EFD0 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

unsigned __int16 *__fastcall CempStringDuplicate(unsigned __int16 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  SIZE_T v4; // rbp
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v6; // rsi

  v1 = -1LL;
  v3 = 0LL;
  do
    ++v1;
  while ( a1[v1] );
  v4 = 2 * v1 + 2;
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  v6 = Heap;
  if ( Heap )
  {
    StringCbCopyW(Heap, v4, a1);
    return v6;
  }
  return (unsigned __int16 *)v3;
}
