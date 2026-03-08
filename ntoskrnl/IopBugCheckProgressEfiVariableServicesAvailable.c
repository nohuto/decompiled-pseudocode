/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x14054FEA4
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x14054E7F0 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14054EC04 (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140574598 (KeFrozenProcessorCount.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  return BugCheckProgressEfiSafeToCall
      && (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1
      && !BugCheckProgressEfiCalled
      && (unsigned __int8)off_140C01D50[0]() == 0;
}
