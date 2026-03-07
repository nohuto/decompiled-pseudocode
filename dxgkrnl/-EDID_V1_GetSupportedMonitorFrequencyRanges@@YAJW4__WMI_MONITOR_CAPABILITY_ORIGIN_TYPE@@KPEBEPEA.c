__int64 __fastcall EDID_V1_GetSupportedMonitorFrequencyRanges(
        int a1,
        unsigned int a2,
        unsigned __int8 *a3,
        __int64 a4,
        struct _FrequencyRangeDescriptor *a5)
{
  __int64 result; // rax
  unsigned __int16 *v7; // r11
  _BYTE *v8; // [rsp+20h] [rbp-78h] BYREF
  int v9; // [rsp+28h] [rbp-70h]
  _BYTE v10[80]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+80h] [rbp-18h]

  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  v11 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v10, a3, a2);
  if ( (int)result >= 0 )
  {
    v8 = v10;
    v9 = a1;
    return MonDescParser::EDID_MODES::ObtainSupportedFrequencyRanges((MonDescParser::EDID_MODES *)&v8, v7, a5);
  }
  return result;
}
