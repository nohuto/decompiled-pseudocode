/*
 * XREFs of EnforceColorDependentSettings @ 0x1C0062830
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C00642D0 (GreGetDeviceCaps.c)
 */

_BOOL8 EnforceColorDependentSettings()
{
  _BOOL8 result; // rax

  result = (*((_DWORD *)gpDispInfo + 33) & 2) != 0 || (unsigned int)GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 24) != -1;
  gbDisableAlpha = result;
  return result;
}
