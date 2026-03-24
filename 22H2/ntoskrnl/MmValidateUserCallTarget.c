/*
 * XREFs of MmValidateUserCallTarget @ 0x1408D7EC8
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D0F90 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14025A880 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1406FA2A4 (MiValidateUserCallTarget.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // r8d
  unsigned __int64 v1; // r9

  if ( MiIsProcessCfgEnabled() )
    return MiValidateUserCallTarget(
             v1,
             KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + (v0 != 0 ? 472LL : 440LL));
  else
    return 1LL;
}
