/*
 * XREFs of ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00111AC
 * Callers:
 *     ?GetNativeMode@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C01CFCA0 (-GetNativeMode@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C03CB670 (-GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA-AW4MonitorDescriptorParseResult@2@XZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C001156C (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 */

__int64 __fastcall EDID_V1_GetPreferredMode(unsigned __int8 *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 result; // rax
  bool v4; // r9
  unsigned __int8 *v5; // rax
  _BYTE v6[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+70h] [rbp-18h]
  unsigned __int8 *v8; // [rsp+90h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v6, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetDetTimParser(
           (MonDescParser::EDID_PARSER *)v6,
           0,
           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v8,
           v4) )
    {
      v5 = v8;
      *(_DWORD *)a2 = v8[2] + (v8[4] >> 4 << 8);
      *((_DWORD *)a2 + 1) = v5[5] + (v5[7] >> 4 << 8);
      *((_BYTE *)a2 + 8) = v5[17] >> 7;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
