__int16 __fastcall KiBugCheckConvertProgressValueToUnicodeString(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r11d
  __int64 v4; // r9
  __int64 v5; // rdi
  _WORD *v6; // rbx
  __int64 v7; // rcx
  _WORD *v8; // rdi
  __int16 result; // ax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a1;
  v4 = (*(unsigned __int16 *)(a2 + 2) >> 1) - 1;
  if ( a1 > 0x64 )
  {
    if ( *(unsigned __int16 *)(a2 + 2) >> 1 != 1 )
    {
      v7 = (unsigned int)v4;
      v8 = *(_WORD **)(a2 + 8);
      while ( v7 )
      {
        *v8++ = 45;
        --v7;
      }
    }
  }
  else
  {
    LODWORD(v5) = (*(unsigned __int16 *)(a2 + 2) >> 1) - 1;
    do
    {
      v5 = (unsigned int)(v5 - 1);
      v6 = (_WORD *)(v2 + 2 * v5);
      *v6 = v3 % 0xA + 48;
      v3 /= 0xAu;
    }
    while ( v3 && (_DWORD)v5 );
    for ( ; (_DWORD)v5; LODWORD(v5) = v5 - 1 )
      *--v6 = 32;
  }
  *(_WORD *)(v2 + 2 * v4) = 0;
  result = *(_WORD *)(a2 + 2) - 2;
  *(_WORD *)a2 = result;
  return result;
}
