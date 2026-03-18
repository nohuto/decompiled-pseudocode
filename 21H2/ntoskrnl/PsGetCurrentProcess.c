/*
 * XREFs of PsGetCurrentProcess @ 0x1402A3820
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403EB1A8 (KiLockExtendedServiceTable.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
