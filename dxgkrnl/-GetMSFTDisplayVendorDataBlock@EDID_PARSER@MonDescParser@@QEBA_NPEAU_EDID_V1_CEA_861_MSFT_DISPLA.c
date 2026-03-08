/*
 * XREFs of ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C001DC98
 * Callers:
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C001DA2C (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C0023DB8 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x1C0071C3C (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1C0071CF0 (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 * Callees:
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001EEBC (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C0023660 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C00736D0 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0073B20 (-GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 1 )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, v2) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, v5);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v8,
        *IterAtElement);
      if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetMsftDisplayVendorData(
             (MonDescParser::EDID_PARSER_CEA_861_EXT *)v8,
             a2) )
      {
        break;
      }
    }
    if ( ++v2 >= *((_DWORD *)this + 20) )
      return 0;
  }
  return 1;
}
