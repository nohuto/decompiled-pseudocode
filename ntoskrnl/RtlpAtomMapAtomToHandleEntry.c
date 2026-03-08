/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1407D8D38
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x1407DA4D0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1407DA630 (RtlpHashStringToAtom.c)
 *     RtlQueryAtomInAtomTable @ 0x1407DB4E0 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1407DBE40 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1407DBF30 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1407D80C0 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  volatile signed __int64 *v5; // rdi
  unsigned __int64 HandlePointer; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (__int64 *)ExMapHandleToPointer(*(unsigned int **)(a1 + 16), (unsigned int)(4 * a2));
  v5 = v4;
  if ( v4 )
  {
    HandlePointer = ExGetHandlePointer(v4);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = HandlePointer;
    _InterlockedExchangeAdd64(v5, 1uLL);
    _InterlockedOr(v10, 0);
    if ( *(_QWORD *)(v7 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  }
  else
  {
    v8 = 0LL;
  }
  KeLeaveCriticalRegion();
  return v8;
}
