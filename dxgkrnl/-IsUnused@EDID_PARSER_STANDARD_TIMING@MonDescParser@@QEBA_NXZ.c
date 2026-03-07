bool __fastcall MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(MonDescParser::EDID_PARSER_STANDARD_TIMING *this)
{
  __int16 v1; // cx
  bool result; // al

  v1 = **(_WORD **)this;
  if ( v1 == 257 )
    return 1;
  result = 0;
  if ( !v1 )
    return 1;
  return result;
}
