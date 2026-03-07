__int64 __fastcall RtlStringCbCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // r11d
  signed __int64 v7; // r8
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = a4 >> 1;
  if ( v4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
  }
  else
  {
    v5 = 260LL;
    v6 = 0;
    v7 = a3 - a1;
    while ( v5 + v4 - 260 )
    {
      v8 = *(_WORD *)&a1[v7];
      if ( !v8 )
        break;
      *(_WORD *)a1 = v8;
      a1 += 2;
      if ( !--v5 )
      {
        a1 -= 2;
        v6 = -2147483643;
        break;
      }
    }
    result = v6;
  }
  *(_WORD *)a1 = 0;
  return result;
}
