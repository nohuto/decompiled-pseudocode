/*
 * XREFs of IsDesktopApp @ 0x1C00AD810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDesktopApp(__int64 a1)
{
  return (*(_DWORD *)(a1 + 812) & 0x30) == 0;
}
