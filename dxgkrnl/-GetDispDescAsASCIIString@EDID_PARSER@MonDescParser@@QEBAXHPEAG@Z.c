void __fastcall MonDescParser::EDID_PARSER::GetDispDescAsASCIIString(
        MonDescParser::EDID_PARSER *this,
        int a2,
        unsigned __int16 *a3)
{
  unsigned __int64 DispDescAsASCIIStringLength; // rax
  _QWORD *v5; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r9
  UCHAR *v10; // rdx
  WCHAR v11; // ax
  __int64 v12; // rcx
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  DispDescAsASCIIStringLength = MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength(this, a2);
  v6 = *v5 + 59LL;
  *a3 = 0;
  v7 = DispDescAsASCIIStringLength;
  LODWORD(v8) = 0;
  v10 = (UCHAR *)(v6 + 18 * v9);
  SourceCharacter = v10;
  if ( DispDescAsASCIIStringLength )
  {
    while ( *v10 != 10 )
    {
      v11 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      v12 = (unsigned int)v8;
      v8 = (unsigned int)(v8 + 1);
      a3[v12] = v11;
      a3[v8] = 0;
      if ( (unsigned int)v8 >= v7 )
        break;
      v10 = SourceCharacter;
    }
  }
}
