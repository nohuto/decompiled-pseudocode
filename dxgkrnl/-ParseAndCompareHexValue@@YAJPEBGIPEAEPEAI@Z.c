__int64 __fastcall ParseAndCompareHexValue(const unsigned __int16 *a1, int a2, unsigned __int8 *a3, unsigned int *a4)
{
  __int64 v4; // r10
  int v6; // r11d
  char v7; // bl
  int v8; // edi
  unsigned __int16 v9; // dx
  int v10; // edx
  unsigned __int8 v11; // al
  bool v13; // zf

  v4 = *a4;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( a1[v4] != 35 )
  {
    v9 = a1[v4];
    if ( !v9 )
      break;
    if ( v9 == 44 )
    {
      v13 = v6 == a2;
      v6 = 0;
      v8 = 0;
      if ( v13 )
        v7 = 1;
      v4 = (unsigned int)(v4 + 1);
    }
    else
    {
      if ( (unsigned __int16)(v9 - 48) > 9u && (unsigned __int16)((v9 | 0x20) - 97) > 5u )
        goto LABEL_18;
      v10 = (unsigned __int16)(v9 - 48) > 9u ? ((_BYTE)v9 - 7) & 0xF : v9 - 48;
      v4 = (unsigned int)(v4 + 1);
      v6 = v10 + 16 * v6;
      if ( (unsigned int)++v8 > 4 )
        goto LABEL_18;
    }
  }
  if ( a1[v4] == 35 )
  {
    v11 = v7;
    *a4 = v4 + 1;
    if ( v6 == a2 )
      v11 = 1;
    *a3 = v11;
    return 0LL;
  }
  else
  {
LABEL_18:
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
}
