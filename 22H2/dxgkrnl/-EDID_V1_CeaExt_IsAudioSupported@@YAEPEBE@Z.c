/*
 * XREFs of ?EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z @ 0x1C005FA38
 * Callers:
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C02A999C (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 * Callees:
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0061348 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 */

char __fastcall EDID_V1_CeaExt_IsAudioSupported(union _EDID_V1_BLOCK *a1)
{
  char v1; // cl
  _BYTE *v3; // [rsp+20h] [rbp-18h] BYREF

  MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)&v3, a1);
  if ( *v3 != 2 )
    return 0;
  v1 = 1;
  if ( v3[1] <= 1u || (v3[3] & 0x40) == 0 )
    return 0;
  return v1;
}
