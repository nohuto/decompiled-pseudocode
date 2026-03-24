/*
 * XREFs of ?IsUnspecifiedFrequency@DMMVIDEOSIGNALMODE@@QEBA_NXZ @ 0x1C000B884
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0144804 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C0144AC8 (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOSIGNALMODE::IsUnspecifiedFrequency(DMMVIDEOSIGNALMODE *this)
{
  return *((_DWORD *)this + 5) == -2 && *((_DWORD *)this + 6) == -2;
}
