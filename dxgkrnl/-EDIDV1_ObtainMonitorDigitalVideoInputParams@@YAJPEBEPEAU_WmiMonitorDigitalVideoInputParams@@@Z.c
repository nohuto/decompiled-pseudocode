__int64 __fastcall EDIDV1_ObtainMonitorDigitalVideoInputParams(
        unsigned __int8 *a1,
        struct _WmiMonitorDigitalVideoInputParams *a2)
{
  __int64 result; // rax
  _BYTE *v3; // r11
  char v4; // cl
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v5, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v4 = *(_BYTE *)(v5[0] + 20LL);
    if ( v4 < 0 )
    {
      *v3 = v4 & 1;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
