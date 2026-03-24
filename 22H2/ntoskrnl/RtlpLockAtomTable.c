/*
 * XREFs of RtlpLockAtomTable @ 0x14061BE34
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140259BB0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1403157B4 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x14061B9E0 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x14061BBF0 (RtlQueryAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406860C0 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140686200 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406936D0 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140913100 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140913208 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
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
