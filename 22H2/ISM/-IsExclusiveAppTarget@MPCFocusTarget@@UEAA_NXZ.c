/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x18001C270
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WEA@EAA_NXZ @ 0x18004BB20 (-IsExclusiveAppTarget@MPCFocusTarget@@WEA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 40);
}
