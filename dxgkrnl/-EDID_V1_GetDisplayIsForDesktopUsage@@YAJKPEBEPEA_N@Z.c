__int64 __fastcall EDID_V1_GetDisplayIsForDesktopUsage(unsigned int a1, unsigned __int8 *a2, bool *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-88h] BYREF
  int v8; // [rsp+30h] [rbp-78h]
  char v9; // [rsp+34h] [rbp-74h]
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v11; // [rsp+90h] [rbp-18h]

  v3 = 0;
  if ( a2 && a1 && a3 )
  {
    v11 = 0LL;
    v5 = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v10, a2, a1);
    if ( v5 >= 0 )
    {
      v8 = 0;
      v9 = 0;
      v7 = 0LL;
      if ( !MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
              (MonDescParser::EDID_PARSER *)v10,
              (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)&v7) )
        return (unsigned int)-1073741275;
      if ( ((unsigned int)v7 & 0xFF000000) >= 0x3000000 && (unsigned __int8)((BYTE4(v7) & 0x1F) - 7) > 1u )
      {
        *a3 = (BYTE4(v7) & 0x40) != 0;
        return v3;
      }
      v5 = 0;
      *a3 = 0;
    }
    return (unsigned int)v5;
  }
  return 3221225485LL;
}
