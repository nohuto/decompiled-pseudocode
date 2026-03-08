/*
 * XREFs of ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C001156C
 * Callers:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0011090 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00111AC (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001DE50 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C00115AC (-Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

bool __fastcall MonDescParser::EDID_PARSER::GetDetTimParser(
        MonDescParser::EDID_PARSER *this,
        int a2,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r10
  _QWORD *v5; // r11
  bool result; // al

  if ( !MonDescParser::EDID_PARSER::Is18ByteDetTim(this, a2) )
    return 0;
  result = 1;
  *v5 = *v4 + 18 * (v3 + 3);
  return result;
}
