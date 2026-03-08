/*
 * XREFs of ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001EEE8
 * Callers:
 *     ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1C01FCA00 (-GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorManufactureDate(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int16 *a3)
{
  __int64 result; // rax
  _BYTE *v5; // r11
  unsigned __int8 *v6; // rcx
  unsigned __int8 v7; // al
  bool v8; // cc
  _QWORD v9[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v9[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v9, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v6 = (unsigned __int8 *)v9[0];
    *v5 = *(_BYTE *)(v9[0] + 16LL);
    *a3 = v6[17] + 1990;
    v7 = v6[18];
    if ( v7 == 1 )
    {
      if ( v6[19] == 3 )
      {
        v8 = *v5 <= 0x36u;
        goto LABEL_8;
      }
      if ( v6[19] >= 4u )
        goto LABEL_18;
    }
    if ( v7 >= 3u )
    {
LABEL_18:
      if ( *v5 != 0xFF )
      {
        v8 = *v5 <= 0x36u;
LABEL_8:
        if ( !v8 )
        {
          result = 3223126026LL;
          *v5 = 0;
          return result;
        }
        goto LABEL_9;
      }
      *v5 = 0;
    }
    else if ( (unsigned __int8)(*v5 - 1) > 0x35u )
    {
      *v5 = 0;
      return 3223126026LL;
    }
LABEL_9:
    if ( *a3 > 0x7C9u )
      return 0LL;
    *a3 = 0;
    return 3223126026LL;
  }
  return result;
}
