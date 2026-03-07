__int64 __fastcall SepSddlParseWideStringUlong(wchar_t *Buffer, wchar_t **FinalPosition, unsigned int *Value)
{
  wchar_t v3; // r9
  int v5; // r10d
  const wchar_t *v6; // r11
  unsigned int v7; // r8d
  int v8; // eax
  __int64 result; // rax

  v3 = *Buffer;
  *Value = 0;
  *FinalPosition = Buffer;
  if ( v3 == 48 )
  {
    if ( ((Buffer[1] - 88) & 0xFFDF) == 0 )
    {
      v3 = Buffer[2];
      Buffer += 2;
      goto LABEL_4;
    }
  }
  else if ( (unsigned __int16)(v3 - 48) > 9u )
  {
LABEL_4:
    v5 = 16;
    v6 = Buffer;
    v7 = 0;
    if ( v3 )
      goto LABEL_5;
    return 0LL;
  }
  v5 = 10;
  v6 = Buffer;
  v7 = 0;
  do
  {
LABEL_5:
    if ( (unsigned __int16)(v3 - 48) > 9u )
    {
      if ( v5 != 16 )
        break;
      if ( (unsigned __int16)(v3 - 65) > 5u )
      {
        if ( (unsigned __int16)(v3 - 97) > 5u )
          break;
        v8 = v3 - 87;
      }
      else
      {
        v8 = v3 - 55;
      }
    }
    else
    {
      v8 = v3 - 48;
    }
    if ( v8 + v7 * v5 < v7 )
      return 0LL;
    ++Buffer;
    v7 = v8 + v7 * v5;
    v3 = *Buffer;
  }
  while ( *Buffer );
  if ( Buffer != v6 )
  {
    *FinalPosition = Buffer;
    result = 1LL;
    *Value = v7;
    return result;
  }
  return 0LL;
}
