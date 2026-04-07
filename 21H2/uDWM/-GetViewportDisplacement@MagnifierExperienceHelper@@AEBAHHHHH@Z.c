/*
 * XREFs of ?GetViewportDisplacement@MagnifierExperienceHelper@@AEBAHHHHH@Z @ 0x1800BD3AC
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BCD8C (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MagnifierExperienceHelper::GetViewportDisplacement(
        MagnifierExperienceHelper *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  bool v5; // cc

  v5 = a5 < a3;
  if ( a5 > a3 )
  {
    if ( a5 < a4 )
      return 0LL;
    v5 = a5 < a3;
  }
  if ( v5 && a2 > 0 || a5 > a4 && a2 < 0 )
    return 0LL;
  if ( a5 < a3 && a2 < 0 )
    return (unsigned int)(a5 - a3);
  if ( a5 <= a4 || a2 <= 0 )
    return (unsigned int)a2;
  return (unsigned int)(a5 - a4);
}
