char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        char a2,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a3)
{
  __int64 v3; // r9
  char v4; // cl
  unsigned __int8 v5; // dl
  _BYTE *v6; // rcx

  v3 = *(_QWORD *)this;
  v4 = *(_BYTE *)(*(_QWORD *)this + 2LL);
  if ( !v4 )
    return 0;
  v5 = v4 + 18 * a2;
  if ( v5 >= 0x6Eu )
    return 0;
  v6 = (_BYTE *)(v3 + v5);
  if ( !*v6 && !v6[1] )
    return 0;
  *(_QWORD *)a3 = v6;
  return 1;
}
