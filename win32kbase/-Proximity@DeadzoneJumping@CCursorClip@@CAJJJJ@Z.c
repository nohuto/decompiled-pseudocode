/*
 * XREFs of ?Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z @ 0x1C020B004
 * Callers:
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1C020A744 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorClip::DeadzoneJumping::Proximity(int a1, int a2, int a3)
{
  if ( a1 < a2 )
    return (unsigned int)(a2 - a1);
  if ( a1 <= a3 )
    return 0LL;
  return (unsigned int)(a1 - a3);
}
