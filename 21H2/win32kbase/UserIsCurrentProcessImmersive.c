/*
 * XREFs of UserIsCurrentProcessImmersive @ 0x1C0139A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersive(__int64 a1)
{
  return (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 820) & 0x30) == 16;
}
