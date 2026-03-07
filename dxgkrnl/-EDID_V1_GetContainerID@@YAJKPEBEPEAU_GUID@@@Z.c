__int64 __fastcall EDID_V1_GetContainerID(unsigned int a1, unsigned __int8 *a2, struct _GUID *a3)
{
  __int64 result; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v7; // [rsp+90h] [rbp-18h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v7 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v6, a2, a1);
  if ( (int)result >= 0 )
  {
    memset(v5, 0, 21);
    if ( MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v6,
           (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)v5)
      && (v5[0] & 0xFF000000) >= 0x1000000 )
    {
      *a3 = *(struct _GUID *)((char *)v5 + 5);
      a3->Data1 = _byteswap_ulong(a3->Data1);
      a3->Data2 = __ROR2__(a3->Data2, 8);
      a3->Data3 = __ROR2__(a3->Data3, 8);
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
