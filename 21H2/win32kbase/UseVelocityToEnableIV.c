/*
 * XREFs of UseVelocityToEnableIV @ 0x1C0041550
 * Callers:
 *     IsMouseIVEnabled @ 0x1C0041518 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00A9640 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01BA704 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BA73C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA78C (IsTouchIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C004157C (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C0041628 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop() )
    return 1;
  return v0;
}
