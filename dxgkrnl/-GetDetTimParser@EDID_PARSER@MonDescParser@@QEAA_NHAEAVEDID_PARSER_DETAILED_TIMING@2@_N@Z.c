bool __fastcall MonDescParser::EDID_PARSER::GetDetTimParser(
        MonDescParser::EDID_PARSER *this,
        int a2,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r10
  _QWORD *v5; // r11
  bool result; // al

  if ( !MonDescParser::EDID_PARSER::Is18ByteDetTim(this, a2) )
    return 0;
  result = 1;
  *v5 = *v4 + 18 * (v3 + 3);
  return result;
}
