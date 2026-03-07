__int64 __fastcall EDIDV1_ObtainMonitorSerialNumber(unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned int i; // r9d
  int v4; // r9d
  __int64 v5; // r10
  unsigned __int16 *v6; // r11
  unsigned __int64 v7; // r8
  unsigned int v8; // ecx
  wchar_t v9; // ax
  unsigned __int64 v10; // rdx
  unsigned __int16 *v11; // r9
  unsigned __int16 *v12; // r10
  unsigned __int16 v13; // cx
  _QWORD v14[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v14[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v14, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < 4; i = v4 + 1 )
    {
      if ( MonDescParser::EDID_PARSER::Is18ByteDispDesc((MonDescParser::EDID_PARSER *)v14, i)
        && *(_BYTE *)(v5 + 18LL * v4 + 57) == 0xFF
        && MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength((MonDescParser::EDID_PARSER *)v14, v4) )
      {
        MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v14, v4, v6);
        return 0LL;
      }
    }
    v7 = 0LL;
    v8 = *(unsigned __int8 *)(v5 + 12) | ((*(unsigned __int8 *)(v5 + 13) | (*(unsigned __int16 *)(v5 + 14) << 8)) << 8);
    do
    {
      v9 = a0123456789abcd[v8 % 0xA];
      v8 /= 0xAu;
      v6[v7++] = v9;
    }
    while ( v8 && v7 < 0xD );
    v10 = v7 >> 1;
    if ( v7 >> 1 )
    {
      v11 = &v6[v10 - 1];
      v12 = &v6[v7 - v10];
      do
      {
        v13 = *v11;
        *v11-- = *v12;
        *v12++ = v13;
        --v10;
      }
      while ( v10 );
    }
    v6[v7] = 0;
    return 0LL;
  }
  return result;
}
