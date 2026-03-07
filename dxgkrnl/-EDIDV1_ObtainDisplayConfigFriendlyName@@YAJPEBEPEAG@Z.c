__int64 __fastcall EDIDV1_ObtainDisplayConfigFriendlyName(const unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 v4; // r8
  int v5; // r9d
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  int v10; // esi
  unsigned __int64 DispDescAsASCIIStringLength; // rdi
  _QWORD v12[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = 0LL;
  v13 = 0LL;
  v5 = 0;
  do
  {
    v6 = v5++;
    v12[v4] = &a1[v6 << 7];
    v4 = ++v13;
  }
  while ( !v5 );
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v12, (bool)a2);
  if ( (int)result >= 0 )
  {
    memset(a2, 0, 0x52uLL);
    v8 = v12[0];
    v9 = 0LL;
    v10 = 0;
    while ( 1 )
    {
      if ( !*(_WORD *)(v8 + 18LL * v10 + 54) && !*(_BYTE *)(v8 + 18LL * v10 + 56) )
      {
        if ( *(_BYTE *)(v8 + 18LL * v10 + 58) )
        {
          if ( *(_BYTE *)(v8 + 18LL * v10 + 57) == 0xFD )
          {
LABEL_11:
            if ( *(_BYTE *)(v8 + 18LL * v10 + 57) == 0xFC )
            {
              DispDescAsASCIIStringLength = MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength(
                                              (MonDescParser::EDID_PARSER *)v12,
                                              v10);
              if ( DispDescAsASCIIStringLength + v9 > 0x28 )
                DispDescAsASCIIStringLength = 40 - v9;
              if ( DispDescAsASCIIStringLength && (unsigned __int64)(v9 + 13) <= 0x28 )
              {
                MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v12, v10, &a2[v9]);
                v8 = v12[0];
                v9 += DispDescAsASCIIStringLength;
              }
            }
          }
        }
        else if ( *(_BYTE *)(v8 + 18LL * v10 + 57) != 16 )
        {
          goto LABEL_11;
        }
      }
      if ( (unsigned int)++v10 >= 4 )
      {
        result = 0LL;
        if ( !v9 )
          return 3221226021LL;
        return result;
      }
    }
  }
  return result;
}
