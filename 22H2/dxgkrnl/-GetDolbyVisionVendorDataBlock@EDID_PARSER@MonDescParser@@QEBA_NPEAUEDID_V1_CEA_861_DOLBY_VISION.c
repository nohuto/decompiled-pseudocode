/*
 * XREFs of ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1C0027D5C
 * Callers:
 *     ?EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0027544 (-EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001F11C (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C0023170 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1C0027B50 (-GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0074300 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetDolbyVisionVendorDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct EDID_V1_CEA_861_DOLBY_VISION_DATABLOCK *a2)
{
  char v2; // di
  unsigned int v3; // ebx
  int v6; // edx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0;
  if ( !*((_DWORD *)this + 20) )
    return v2;
  while ( 1 )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, v3) != 2 )
      goto LABEL_6;
    IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, v6);
    MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)v9, *IterAtElement);
    if ( !MonDescParser::EDID_PARSER_CEA_861_EXT::GetDolbyVisionVendorData(
            (MonDescParser::EDID_PARSER_CEA_861_EXT *)v9,
            a2) )
      goto LABEL_6;
    if ( v2 )
      return 0;
    v2 = 1;
LABEL_6:
    if ( ++v3 >= *((_DWORD *)this + 20) )
      return v2;
  }
}
