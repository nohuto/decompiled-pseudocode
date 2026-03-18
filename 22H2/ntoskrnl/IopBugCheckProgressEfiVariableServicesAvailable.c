/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x140552344
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x140550C90 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1405510A4 (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140576BB4 (KeFrozenProcessorCount.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  return BugCheckProgressEfiSafeToCall
      && (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1
      && !BugCheckProgressEfiCalled
      && (unsigned __int8)off_140C01D50[0]() == 0;
}
