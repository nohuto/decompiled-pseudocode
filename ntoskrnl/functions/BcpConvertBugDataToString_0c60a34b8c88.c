__int64 __fastcall BcpConvertBugDataToString(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  _WORD *v4; // r8
  unsigned int v5; // edx
  char i; // r10
  unsigned __int8 v7; // al
  __int16 v8; // cx

  v2 = *(unsigned __int16 *)(a2 + 2) >> 1;
  v4 = *(_WORD **)(a2 + 8);
  v5 = 0;
  for ( i = 60; v5 < v2; ++v4 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        *v4 = 120;
      }
      else if ( v5 == v2 - 1 )
      {
        *v4 = 0;
      }
      else
      {
        v7 = (a1 >> i) & 0xF;
        if ( v7 >= 0xAu )
          v8 = (unsigned __int8)(v7 - 10) + 65;
        else
          v8 = v7 + 48;
        *v4 = v8;
        i -= 4;
      }
    }
    else
    {
      *v4 = 48;
    }
    ++v5;
  }
  return 0LL;
}
