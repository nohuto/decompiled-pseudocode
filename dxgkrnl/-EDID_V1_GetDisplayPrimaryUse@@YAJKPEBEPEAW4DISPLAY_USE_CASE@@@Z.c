__int64 __fastcall EDID_V1_GetDisplayPrimaryUse(unsigned int a1, unsigned __int8 *a2, enum DISPLAY_USE_CASE *a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-88h] BYREF
  int v6; // [rsp+30h] [rbp-78h]
  char v7; // [rsp+34h] [rbp-74h]
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v9; // [rsp+90h] [rbp-18h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v9 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v8, a2, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0;
    v7 = 0;
    v5 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v8,
           (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)&v5)
      && ((unsigned int)v5 & 0xFF000000) >= 0x1000000 )
    {
      *(_BYTE *)a3 = BYTE4(v5) & 0x1F;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
