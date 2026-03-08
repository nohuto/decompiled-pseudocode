/*
 * XREFs of ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0073A84
 * Callers:
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C001D920 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00737A8 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiLLCVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  bool result; // al
  int v7; // ecx
  struct _EDID_V1_CEA_861_DATA_HEADER *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v8 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v8) )
    {
      if ( (*(_BYTE *)v8 & 0xE0) == 0x60
        && (*(_BYTE *)v8 & 0x1Fu) >= 5
        && (*(_DWORD *)((_BYTE *)v8 + 1) & 0xFFFFFF) == 0xC03LL )
      {
        break;
      }
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  result = 1;
  v7 = *(_DWORD *)((char *)v8 + 9);
  *(_QWORD *)a2 = *(_QWORD *)((char *)v8 + 1);
  *((_DWORD *)a2 + 2) = v7;
  return result;
}
