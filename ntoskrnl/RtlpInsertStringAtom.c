/*
 * XREFs of RtlpInsertStringAtom @ 0x1407DBB30
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1403546F0 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExDestroyHandle @ 0x1407D76E4 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1407D80C0 (ExMapHandleToPointer.c)
 *     ExCreateHandleEx @ 0x1407D8ABC (ExCreateHandleEx.c)
 */

char __fastcall RtlpInsertStringAtom(__int64 a1, __int64 a2)
{
  __int64 Handle; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax

  Handle = ExCreateHandleEx(*(_QWORD *)(a1 + 16), a2, 0, 0, 0LL);
  v5 = Handle;
  if ( Handle )
  {
    v6 = (unsigned int)Handle >> 2;
    if ( v6 <= 0xFFFF && v6 + 49152 >= v6 && v6 + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 10) = v6 - 0x4000;
      return 1;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (_QWORD *)ExMapHandleToPointer(*(unsigned int **)(a1 + 16), v5);
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0;
}
