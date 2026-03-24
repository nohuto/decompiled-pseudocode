/*
 * XREFs of PsGetCurrentProcess @ 0x14033B600
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x1402E38E4 (MiInitializeMdlBatchPages.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     KiLockExtendedServiceTable @ 0x1403DBEC8 (KiLockExtendedServiceTable.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     PopAvlGetPowerRequestKey @ 0x14062BAEC (PopAvlGetPowerRequestKey.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087E46C (CmFcpInitializeChangeSubscription.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C640 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
