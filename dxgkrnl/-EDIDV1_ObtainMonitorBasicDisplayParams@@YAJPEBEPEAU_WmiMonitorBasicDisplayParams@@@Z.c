__int64 __fastcall EDIDV1_ObtainMonitorBasicDisplayParams(
        unsigned __int8 *a1,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  __int64 result; // rax
  _BYTE v4[80]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+70h] [rbp-38h]
  _WmiMonitorBasicDisplayParams v6; // [rsp+80h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v4, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    *a2 = *MonDescParser::EDID_PARSER::GetWmiBasicDisplayParams((MonDescParser::EDID_PARSER *)v4, &v6);
    return 0LL;
  }
  return result;
}
