/*
 * XREFs of IsImmersiveAppRestricted @ 0x1C005AF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppRestricted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 812) & 0x30) == 16;
}
