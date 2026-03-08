/*
 * XREFs of x86BiosCall @ 0x1403B8400
 * Callers:
 *     HalpBiosDisplayReset @ 0x1404FCF30 (HalpBiosDisplayReset.c)
 * Callees:
 *     x86BiosExecuteInterruptShadowed @ 0x1403B8450 (x86BiosExecuteInterruptShadowed.c)
 */

bool x86BiosCall()
{
  bool v0; // r8

  v0 = 0;
  if ( HalpVideoBiosPresent )
  {
    if ( _InterlockedIncrement(&HalpBiosCallCount) == 1 || HalpBugcheckInProgress )
      v0 = (unsigned int)x86BiosExecuteInterruptShadowed() == 1;
    else
      __int2c();
    _InterlockedDecrement(&HalpBiosCallCount);
    return v0;
  }
  else
  {
    __int2c();
    return 0;
  }
}
