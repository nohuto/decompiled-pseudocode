/*
 * XREFs of ?GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1C007371C
 * Callers:
 *     ?GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1C001D970 (-GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00737A8 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetColorimetryData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_COLORIMETRY_DESC *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  bool result; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v7 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v7)
      && (*(_BYTE *)v7 & 0xE0) == 0xE0
      && *((_BYTE *)v7 + 1) == 5
      && (*(_BYTE *)v7 & 0x1Fu) >= 3 )
    {
      break;
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  result = 1;
  *(_BYTE *)a2 = *((_BYTE *)v7 + 2);
  *((_BYTE *)a2 + 1) = 0;
  return result;
}
