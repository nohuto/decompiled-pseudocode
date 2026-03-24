/*
 * XREFs of EnforceColorDependentSettings @ 0x1C00922B0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C77F4 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0092320 (GreGetDeviceCaps.c)
 */

_BOOL8 EnforceColorDependentSettings()
{
  _BOOL8 result; // rax

  result = (*(_DWORD *)(gpDispInfo + 132) & 2) != 0
        || (unsigned int)GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 24) != -1;
  gbDisableAlpha = result;
  return result;
}
