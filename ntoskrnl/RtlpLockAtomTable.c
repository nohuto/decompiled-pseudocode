/*
 * XREFs of RtlpLockAtomTable @ 0x1407DA790
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1403546F0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140355F84 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x1407DA4D0 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1407DB4E0 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1407DBE40 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1407DBF30 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1407DC4F0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409B8EA0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409B8FA8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
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
