/*
 * XREFs of ?CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z @ 0x1C001E4B8
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C001E364 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::CalculateVerticalActivePixelsFrom(
        MonDescParser *this,
        unsigned __int16 a2,
        unsigned __int16 a3,
        _WORD *a4)
{
  int v4; // r10d

  v4 = a3 * (unsigned __int16)this;
  *a4 = 0;
  if ( v4 % a2 )
    return 3223126020LL;
  *a4 = v4 / a2;
  return 0LL;
}
