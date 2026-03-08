/*
 * XREFs of RtlpFreeHandleForAtom @ 0x1407DC658
 * Callers:
 *     RtlpFreeAllAtom @ 0x140355B04 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1409B8EA0 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExDestroyHandle @ 0x1407D76E4 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1407D80C0 (ExMapHandleToPointer.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (_QWORD *)ExMapHandleToPointer(*(unsigned int **)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
