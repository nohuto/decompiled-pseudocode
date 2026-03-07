__int16 __fastcall KiBugCheckConvertParameterValueToUnicodeString(unsigned __int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  int v4; // edi
  _WORD *v5; // rbx
  unsigned int i; // r11d
  unsigned __int16 v7; // dx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _WORD *v10; // rdi
  __int16 result; // ax

  v2 = *(_DWORD **)(a2 + 8);
  v4 = *(unsigned __int16 *)(a2 + 2) >> 1;
  if ( v4 == 19 )
  {
    *v2 = 7864368;
    v5 = v2 + 1;
    for ( i = 0; i < 0x40; i += 4 )
    {
      v7 = (a1 >> (60 - (unsigned __int8)i)) & 0xF;
      *v5++ = v7 + (v7 < 0xAu ? 48 : 55);
    }
    v8 = 18LL;
  }
  else
  {
    v8 = (unsigned int)(v4 - 1);
    if ( v4 != 1 )
    {
      v9 = (unsigned int)v8;
      v10 = v2;
      while ( v9 )
      {
        *v10++ = 45;
        --v9;
      }
    }
  }
  *((_WORD *)v2 + v8) = 0;
  result = *(_WORD *)(a2 + 2) - 2;
  *(_WORD *)a2 = result;
  return result;
}
