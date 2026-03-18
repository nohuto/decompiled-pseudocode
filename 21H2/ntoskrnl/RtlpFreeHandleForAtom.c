/*
 * XREFs of RtlpFreeHandleForAtom @ 0x1406AB574
 * Callers:
 *     RtlpFreeAllAtom @ 0x140233054 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1409B8CC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x1407A1AC0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1407A2B78 (ExDestroyHandle.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
