/*
 * XREFs of RtlAllocateActivationContextStack @ 0x180071840
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlAllocateActivationContextStack(_QWORD *a1)
{
  char *Heap; // rax
  char *v3; // rdx
  _QWORD *v4; // rax

  if ( *a1 )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 6) = 0;
    *(_QWORD *)Heap = 0LL;
    v4 = Heap + 8;
    *((_DWORD *)v3 + 7) = 1;
    v4[1] = v4;
    *v4 = v4;
    *((_DWORD *)v3 + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    *a1 = v3;
    return 0LL;
  }
  return 3221225495LL;
}
