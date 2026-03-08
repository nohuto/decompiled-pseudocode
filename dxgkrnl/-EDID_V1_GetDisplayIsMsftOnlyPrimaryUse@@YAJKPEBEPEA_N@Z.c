/*
 * XREFs of ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1C0071CF0
 * Callers:
 *     ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x1C01FC930 (-GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C001DC98 (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 */

__int64 __fastcall EDID_V1_GetDisplayIsMsftOnlyPrimaryUse(unsigned int a1, unsigned __int8 *a2, bool *a3)
{
  __int64 result; // rax
  unsigned int v5; // eax
  bool v6; // al
  __int128 v7; // [rsp+20h] [rbp-88h] BYREF
  int v8; // [rsp+30h] [rbp-78h]
  char v9; // [rsp+34h] [rbp-74h]
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v11; // [rsp+90h] [rbp-18h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v11 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v10, a2, a1);
  if ( (int)result < 0 )
    return result;
  v8 = 0;
  v9 = 0;
  v7 = 0LL;
  if ( MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
         (MonDescParser::EDID_PARSER *)v10,
         (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)&v7) )
  {
    v5 = BYTE3(v7);
    if ( BYTE3(v7) >= 3u )
    {
      v6 = (BYTE4(v7) & 0x20) == 0;
LABEL_10:
      *a3 = v6;
      return 0LL;
    }
    if ( v5 )
    {
      v6 = v5 == 1;
      goto LABEL_10;
    }
  }
  return 3221226021LL;
}
