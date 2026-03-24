/*
 * XREFs of ?CanHitTestInDwm@@YA_NXZ @ 0x1C004CED4
 * Callers:
 *     xxxSpeedHitTest @ 0x1C004CD94 (xxxSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C02179DC (xxxPointerSpeedHitTest.c)
 * Callees:
 *     <none>
 */

char CanHitTestInDwm(void)
{
  char v0; // cl

  if ( gbNoMoreDITHitTest )
    return 0;
  if ( !(unsigned __int8)IsInputThread() )
    return 0;
  if ( !(unsigned __int8)IsInputProcessingActivated() )
    return 0;
  v0 = 1;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 0;
  return v0;
}
