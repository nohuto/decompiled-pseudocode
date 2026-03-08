/*
 * XREFs of ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00737A8
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001DE50 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001E650 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1C007371C (-GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETR.c)
 *     ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C0073848 (-GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_DOLB.c)
 *     ?GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1C007394C (-GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 *     ?GetHdmiForumVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00739F0 (-GetHdmiForumVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_F.c)
 *     ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0073A84 (-GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC.c)
 *     ?GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0073B20 (-GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT.c)
 * Callees:
 *     <none>
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        int a2,
        struct _EDID_V1_CEA_861_DATA_HEADER **a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r9d
  unsigned int v6; // r10d
  struct _EDID_V1_CEA_861_DATA_HEADER *v7; // rdx

  v3 = *((_DWORD *)this + 2);
  v4 = 0;
  *a3 = 0LL;
  v6 = 4;
  if ( v3 )
  {
    while ( v6 < 0x7F )
    {
      v7 = (struct _EDID_V1_CEA_861_DATA_HEADER *)(*(_QWORD *)this + v6);
      if ( v4 == a2 )
      {
        *a3 = v7;
        return 1;
      }
      ++v4;
      v6 += (*(_BYTE *)v7 & 0x1F) + 1;
      if ( v4 >= v3 )
        return 0;
    }
  }
  return 0;
}
