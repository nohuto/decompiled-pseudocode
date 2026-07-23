/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1406856D0
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x140600C10 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14060F540 (RtlPinAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1406851E0 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1406853F0 (RtlQueryAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1406857D0 (RtlpHashStringToAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (volatile signed __int64 *)ExMapHandleToPointer(*(_QWORD *)(a1 + 16), (unsigned int)(4 * a2));
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    _InterlockedExchangeAdd64(v4, 1uLL);
    _InterlockedOr(v8, 0);
    if ( *(_QWORD *)(v5 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v5 + 48), 0LL);
    KeLeaveCriticalRegion();
    return v6;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
