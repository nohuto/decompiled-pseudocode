__int64 __fastcall EDIDV1_ObtainMonitorManufacturerName(unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  _WORD *v3; // r11
  unsigned __int8 v4; // dl
  char v5; // cl
  unsigned __int8 v6; // al
  _QWORD v7[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v4 = *(_BYTE *)(v7[0] + 9LL);
    v5 = 8 * (*(_BYTE *)(v7[0] + 8LL) & 3);
    v6 = ((*(_BYTE *)(v7[0] + 8LL) >> 2) & 0x1F) + 64;
    v3[3] = 0;
    *v3 = v6;
    v3[1] = (unsigned __int8)(((v4 >> 5) | v5) + 64);
    v3[2] = (unsigned __int8)((v4 & 0x1F) + 64);
    return 0LL;
  }
  return result;
}
