/*
 * XREFs of ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001DBE4
 * Callers:
 *     ?GetSupportedModes@EdidMonitorDescriptor@DxgMonitor@@UEBAJPEAK0PEAU_VideoModeDescriptor@@@Z @ 0x1C01FCB00 (-GetSupportedModes@EdidMonitorDescriptor@DxgMonitor@@UEBAJPEAK0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001DE50 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 */

__int64 __fastcall EDID_V1_GetMonitorModes(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned __int16 *a4,
        struct _VideoModeDescriptor *a5,
        _DWORD *a6)
{
  __int64 result; // rax
  int v8; // r11d
  _DWORD *v9; // rdx
  unsigned __int16 v10; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v11; // [rsp+28h] [rbp-31h] BYREF
  int v12; // [rsp+30h] [rbp-29h]
  _BYTE v13[80]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v14; // [rsp+90h] [rbp+37h]
  unsigned __int16 v15; // [rsp+C0h] [rbp+67h] BYREF

  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  v14 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v13, a3, a2);
  if ( (int)result >= 0 )
  {
    v15 = *a4;
    v10 = 0;
    v11 = v13;
    v12 = v8;
    result = MonDescParser::EDID_MODES::ObtainSupportedModes((MonDescParser::EDID_MODES *)&v11, &v15, &v10, a5);
    v9 = a6;
    *(_DWORD *)a4 = v15;
    if ( v9 )
      *v9 = v10;
  }
  return result;
}
