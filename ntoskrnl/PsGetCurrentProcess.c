/*
 * XREFs of PsGetCurrentProcess @ 0x1402C1670
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403DDCF8 (KiLockExtendedServiceTable.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
