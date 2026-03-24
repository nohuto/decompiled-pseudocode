/*
 * XREFs of RtlpLockAtomTable @ 0x14061BA14
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14025A350 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1402BC604 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x14061B580 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x14061B790 (RtlQueryAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406A1340 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406A1480 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406B0510 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409130B0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409131B8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
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
