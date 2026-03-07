__int64 __fastcall CmpConvertLangId(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r8
  unsigned int v4; // edx
  unsigned __int16 i; // r9
  __int16 v6; // cx
  unsigned __int16 v7; // ax

  v2 = 0;
  v4 = a2 >> 1;
  for ( i = 0; i < v4; v2 = v7 | (16 * v2) )
  {
    v6 = *(_WORD *)(a1 + 2LL * i);
    v7 = v6 - 48;
    if ( (unsigned __int16)(v6 - 48) > 9u )
    {
      if ( (unsigned __int16)(v6 - 65) <= 5u )
      {
        v7 = v6 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v6 - 97) > 5u )
          return v2;
        v7 = v6 - 87;
      }
      if ( v7 >= 0x10u )
        break;
    }
    ++i;
  }
  return v2;
}
