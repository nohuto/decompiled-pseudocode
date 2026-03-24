/*
 * XREFs of PsGetCurrentProcess @ 0x1402BBC90
 * Callers:
 *     MiGetPageProtection @ 0x1402B1430 (MiGetPageProtection.c)
 *     MiInitializeMdlBatchPages @ 0x140354E44 (MiInitializeMdlBatchPages.c)
 *     KiLockExtendedServiceTable @ 0x1403DB7C8 (KiLockExtendedServiceTable.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     IopCreateFile @ 0x14060B920 (IopCreateFile.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     PopAvlGetPowerRequestKey @ 0x1406F5D74 (PopAvlGetPowerRequestKey.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087E4BC (CmFcpInitializeChangeSubscription.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C690 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
