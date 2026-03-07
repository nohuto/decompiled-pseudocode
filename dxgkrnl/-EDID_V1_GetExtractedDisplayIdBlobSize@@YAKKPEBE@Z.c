__int64 __fastcall EDID_V1_GetExtractedDisplayIdBlobSize(unsigned int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r11d
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+70h] [rbp-18h]

  if ( !a2 || a1 < 0x80 )
    return 0LL;
  v5 = 0LL;
  if ( (int)MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v4, a2, a1) >= 0 )
    return 126 * (unsigned int)MonDescParser::EDID_PARSER::GetBlockTypeCount(v4);
  return v2;
}
