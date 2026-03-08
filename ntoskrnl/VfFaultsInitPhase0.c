/*
 * XREFs of VfFaultsInitPhase0 @ 0x140AD2E18
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140ABFE40 (VfInitVerifierComponents.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ViFaultsInitializeAppsList @ 0x140AD37A8 (ViFaultsInitializeAppsList.c)
 *     ViFaultsInitializeTagsList @ 0x140AD387C (ViFaultsInitializeTagsList.c)
 */

__int64 VfFaultsInitPhase0()
{
  __int64 v0; // rax
  __int64 result; // rax

  ViFaultInjectionLock = 0LL;
  v0 = (unsigned int)ViFaultTracesLength;
  ViRequiredTimeSinceBootInMsecs = 60000LL * (unsigned int)VfFaultInjectionBootMinutes;
  if ( (unsigned int)ViFaultTracesLength > 0x101000 )
  {
    v0 = 1052672LL;
    ViFaultTracesLength = 1052672;
  }
  ViFaultTraces = ExAllocatePool3(64LL, 72 * v0, 0x74746C46u, (__int64)&VfExtendedParameters, 1u);
  ViFaultsInitializeTagsList();
  result = ViFaultsInitializeAppsList();
  ViFaultsInitialized = 1;
  return result;
}
