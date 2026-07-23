/*
 * XREFs of RtlpLockAtomTable @ 0x140685688
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x14023AB94 (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x14027B8C0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x140600AD0 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140600C10 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14060F540 (RtlPinAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1406851E0 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1406853F0 (RtlQueryAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140913210 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140913318 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  return 1;
}
