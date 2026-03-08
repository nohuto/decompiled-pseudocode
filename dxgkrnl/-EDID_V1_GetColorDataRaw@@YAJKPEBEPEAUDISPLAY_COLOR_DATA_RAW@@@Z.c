/*
 * XREFs of ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C002370C
 * Callers:
 *     ?GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C0217830 (-GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetColorDataRaw(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DATA_RAW *a3)
{
  __int64 result; // rax
  int *v4; // r11
  unsigned int v5; // r9d
  unsigned __int64 v6; // r8
  _QWORD v7[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v7[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a2, a1);
  if ( (int)result >= 0 )
  {
    v5 = *(unsigned __int16 *)(v7[0] + 33LL);
    v6 = *(_QWORD *)(v7[0] + 25LL);
    *v4 = ((unsigned __int8)v6 >> 6) | (4 * BYTE2(v6));
    v4[1] = ((unsigned __int8)v6 >> 4) & 3 | (4 * BYTE3(v6));
    v4[2] = ((unsigned __int8)v6 >> 2) & 3 | (4 * BYTE4(v6));
    v4[3] = v6 & 3 | (4 * BYTE5(v6));
    v4[4] = (BYTE1(v6) >> 6) | (4 * BYTE6(v6));
    v4[5] = (BYTE1(v6) >> 4) & 3 | (4 * HIBYTE(v6));
    v4[6] = (BYTE1(v6) >> 2) & 3 | (4 * (unsigned __int8)v5);
    v4[7] = BYTE1(v6) & 3 | (4 * (v5 >> 8));
    return 0LL;
  }
  return result;
}
