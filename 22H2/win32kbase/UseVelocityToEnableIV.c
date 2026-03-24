/*
 * XREFs of UseVelocityToEnableIV @ 0x1C00429C0
 * Callers:
 *     IsMouseIVEnabled @ 0x1C0042988 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00A9B40 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01BA634 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BA66C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA6BC (IsTouchIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C00429EC (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop() )
    return 1;
  return v0;
}
