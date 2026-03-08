/*
 * XREFs of ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C0073848
 * Callers:
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C001D9C0 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00737A8 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDolbyVisionVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1 *a2,
        struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2 *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebp
  int v5; // ebx
  struct _EDID_V1_CEA_861_DATA_HEADER *v10; // rdx
  unsigned __int8 v11; // r8
  char v12; // cl
  __int16 v14; // cx
  struct _EDID_V1_CEA_861_DATA_HEADER *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 2);
  v5 = 0;
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v15 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v5, &v15) )
    {
      v10 = v15;
      if ( (*(_BYTE *)v15 & 0xE0) == 0xE0 && *((_BYTE *)v15 + 1) == 1 )
      {
        v11 = *(_BYTE *)v15 & 0x1F;
        if ( v11 >= 5u
          && (*((unsigned __int8 *)v15 + 2) | (*(unsigned __int16 *)((char *)v15 + 3) << 8)) == 0xD046
          && v11 == 11 )
        {
          v12 = *((_BYTE *)v15 + 5) >> 5;
          if ( v12 == 1 && (*((_BYTE *)v15 + 8) & 3) == 1 )
          {
            v14 = *(_WORD *)((char *)v15 + 13);
            *(_QWORD *)a2 = *(_QWORD *)((char *)v15 + 5);
            *((_WORD *)a2 + 4) = v14;
            *a4 = 1;
            return 1;
          }
          if ( v12 == 2 )
            break;
        }
      }
    }
    if ( ++v5 >= v4 )
      return 0;
  }
  *(_DWORD *)a3 = *(_DWORD *)((char *)v15 + 5);
  *((_WORD *)a3 + 2) = *(_WORD *)((char *)v10 + 9);
  *((_BYTE *)a3 + 6) = *((_BYTE *)v10 + 11);
  *a4 = 2;
  return 1;
}
