/*
 * XREFs of RtlpLockAtomTable @ 0x140718140
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140297670 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140363F5C (RtlDestroyLowBoxAtoms.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14069EA50 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14069EB40 (RtlDestroyAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140715170 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140717E80 (RtlLookupAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1407D1010 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409BBDC0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409BBEC8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
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
