__int64 __fastcall EDID_V1_GetColorimetryData(
        unsigned int a1,
        unsigned __int8 *a2,
        struct DISPLAY_COLORIMETRY_DATA *a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // al
  bool v6; // cl
  _BYTE v7[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]
  __int16 v9; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v8 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a2, a1);
  if ( (int)result >= 0 )
  {
    v9 = 0;
    if ( MonDescParser::EDID_PARSER::GetColorimetryDataBlock(
           (MonDescParser::EDID_PARSER *)v7,
           (struct _EDID_V1_CEA_861_COLORIMETRY_DESC *)&v9) )
    {
      v5 = v9;
      *(_BYTE *)a3 = v9 & 1;
      *((_BYTE *)a3 + 1) = (v5 & 2) != 0;
      *((_BYTE *)a3 + 2) = (v5 & 4) != 0;
      *((_BYTE *)a3 + 3) = (v5 & 8) != 0;
      *((_BYTE *)a3 + 4) = (v5 & 0x10) != 0;
      *((_BYTE *)a3 + 5) = (v5 & 0x20) != 0;
      v6 = (v5 & 0x40) != 0;
      *((_BYTE *)a3 + 7) = v5 >> 7;
      result = 0LL;
      *((_BYTE *)a3 + 6) = v6;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
