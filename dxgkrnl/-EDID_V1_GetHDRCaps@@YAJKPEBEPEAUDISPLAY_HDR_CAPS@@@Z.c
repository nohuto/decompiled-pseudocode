/*
 * XREFs of ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C001DAA4
 * Callers:
 *     ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x1C01FC6D0 (-GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z.c)
 *     ?IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C01FC760 (-IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1C001DB94 (-GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 */

__int64 __fastcall EDID_V1_GetHDRCaps(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_HDR_CAPS *a3)
{
  __int64 result; // rax
  char v5; // cl
  char v6; // al
  _BYTE v7[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]
  int v9; // [rsp+98h] [rbp+10h] BYREF
  char v10; // [rsp+9Ch] [rbp+14h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v8 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a2, a1);
  if ( (int)result >= 0 )
  {
    v9 = 0;
    v10 = 0;
    if ( MonDescParser::EDID_PARSER::GetHDRDataBlock(
           (MonDescParser::EDID_PARSER *)v7,
           (struct _EDID_V1_CEA_861_HDR_DESC *)&v9) )
    {
      v5 = v9;
      *(_BYTE *)a3 = v9 & 1;
      *((_BYTE *)a3 + 1) = (v5 & 2) != 0;
      *((_BYTE *)a3 + 2) = (v5 & 4) != 0;
      v6 = BYTE1(v9) & 1;
      *((_BYTE *)a3 + 3) = (v5 & 8) != 0;
      *((_BYTE *)a3 + 4) = v6;
      *(_WORD *)((char *)a3 + 5) = HIWORD(v9);
      *((_BYTE *)a3 + 7) = v10;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
