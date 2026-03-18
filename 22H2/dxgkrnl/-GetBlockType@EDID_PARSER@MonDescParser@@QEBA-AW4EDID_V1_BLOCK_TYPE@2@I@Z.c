/*
 * XREFs of ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001F11C
 * Callers:
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C001DB80 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 *     ?GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1C001DBD0 (-GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C001DC20 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 *     ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1C001DDF4 (-GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C001DEF8 (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001E0B0 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001E8B0 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x1C001F52C (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1C0027D5C (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION.c)
 *     ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0074884 (-GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VE.c)
 * Callees:
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C0023170 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_PARSER::GetBlockType(MonDescParser::EDID_PARSER *a1, unsigned int a2)
{
  union _EDID_V1_BLOCK *const *IterAtElement; // rax
  union _EDID_V1_BLOCK *v3; // rcx
  __int64 result; // rax

  IterAtElement = MonDescParser::EDID_PARSER::GetIterAtElement(a1, a2);
  v3 = *IterAtElement;
  result = **(unsigned __int8 **)IterAtElement;
  if ( !__PAIR16__(*((_BYTE *)v3 + 1), result) )
    return 256LL;
  return result;
}
