/*
 * XREFs of LdrpLogDllRelocationEtwEvent @ 0x180083784
 * Callers:
 *     LdrpRelocateImage @ 0x1800834CC (LdrpRelocateImage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

int __fastcall LdrpLogDllRelocationEtwEvent(const void **a1, _RTL_USER_PROCESS_PARAMETERS *a2, void *a3, void *a4)
{
  struct _PEB *Heap; // rax
  __int64 v9; // rbx
  __int64 v10; // r10
  unsigned int v11; // esi
  struct _PEB *v12; // rdi

  LODWORD(Heap) = RtlGetCurrentServiceSessionId();
  v9 = 2147353476LL;
  if ( (_DWORD)Heap )
  {
    Heap = NtCurrentPeb();
    v10 = (__int64)Heap->SharedData + 554;
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( *(_BYTE *)v10 )
  {
    v11 = *(unsigned __int16 *)a1 + 64;
    Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v11);
    v12 = Heap;
    if ( Heap )
    {
      Heap->ProcessParameters = a2;
      Heap->SubSystemData = a3;
      *(_WORD *)&Heap->Padding0[2] = 5152;
      Heap->ProcessHeap = a4;
      memmove(&Heap->FastPebLock, a1[1], *(unsigned __int16 *)a1);
      *((_WORD *)&v12->FastPebLock + ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, v11 - 32, v12);
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
  }
  return (int)Heap;
}
