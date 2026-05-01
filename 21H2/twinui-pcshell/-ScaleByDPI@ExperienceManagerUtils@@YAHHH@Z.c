/*
 * XREFs of ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x1801A7884
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18001B498 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180234504 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall ExperienceManagerUtils::ScaleByDPI(ExperienceManagerUtils *this, int a2)
{
  return MulDiv((int)this, a2, 96);
}
