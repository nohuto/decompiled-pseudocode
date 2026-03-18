/*
 * XREFs of UseVelocityToEnableIV @ 0x1C004FE94
 * Callers:
 *     IsMouseIVEnabled @ 0x1C0052D74 (IsMouseIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C00A8664 (IsKeyboardIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C00A8698 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C00A86CC (IsPenIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00A8700 (IsPTPIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C004FEC0 (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop(v1, v0) )
    return 1;
  return v2;
}
