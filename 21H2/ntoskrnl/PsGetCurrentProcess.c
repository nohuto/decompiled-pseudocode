/*
 * XREFs of PsGetCurrentProcess @ 0x140346350
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x140294C34 (MiInitializeMdlBatchPages.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     KiLockExtendedServiceTable @ 0x1403DC038 (KiLockExtendedServiceTable.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PopAvlGetPowerRequestKey @ 0x1406706C4 (PopAvlGetPowerRequestKey.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087E5CC (CmFcpInitializeChangeSubscription.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
