__int64 __fastcall EDIDV1_ObtainMonitorProductCodeID(unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  _WORD *v3; // r11
  unsigned __int64 v4; // rcx
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v5, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v4 = *(unsigned __int16 *)(v5[0] + 10LL);
    v3[4] = 0;
    *v3 = a0123456789abcd[v4 >> 12];
    v3[1] = a0123456789abcd[(v4 >> 8) & 0xF];
    v3[2] = a0123456789abcd[(unsigned __int8)v4 >> 4];
    v3[3] = a0123456789abcd[v4 & 0xF];
    return 0LL;
  }
  return result;
}
