/*
 * XREFs of ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0023E30
 * Callers:
 *     ?GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0219580 (-GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInpu.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetWmiAnalogVideoInputParams@EDID_PARSER@MonDescParser@@QEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0023E84 (-GetWmiAnalogVideoInputParams@EDID_PARSER@MonDescParser@@QEBAJAEAU_WmiMonitorAnalogVideoInputPar.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorAnalogVideoInputParams(
        unsigned __int8 *a1,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  __int64 result; // rax
  struct _WmiMonitorAnalogVideoInputParams *v3; // r11
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v4, a1, 0x80u);
  if ( (int)result >= 0 )
    return MonDescParser::EDID_PARSER::GetWmiAnalogVideoInputParams((MonDescParser::EDID_PARSER *)v4, v3);
  return result;
}
