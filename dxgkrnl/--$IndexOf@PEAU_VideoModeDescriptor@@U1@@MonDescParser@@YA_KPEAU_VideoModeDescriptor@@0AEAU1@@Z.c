/*
 * XREFs of ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C001E208
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001DE50 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ??8MonDescParser@@YA_NAEBU_VideoModeDescriptor@@0@Z @ 0x1C001E240 (--8MonDescParser@@YA_NAEBU_VideoModeDescriptor@@0@Z.c)
 */

__int64 __fastcall MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9

  if ( a1 == a2 )
    return -1LL;
  while ( !(unsigned __int8)MonDescParser::operator==(a1, a3) )
  {
    a1 = v3 + 56;
    if ( a1 == v4 )
      return -1LL;
  }
  return 0LL;
}
