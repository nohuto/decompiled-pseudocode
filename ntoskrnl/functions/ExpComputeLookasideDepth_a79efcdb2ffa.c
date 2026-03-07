__int64 __fastcall ExpComputeLookasideDepth(__int64 a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v5; // ecx
  int v6; // r11d
  __int64 result; // rax
  int v8; // r9d
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // edx

  v3 = *(_DWORD *)(a1 + 20);
  v5 = v3 - *(_DWORD *)(a1 + 80);
  v6 = *(unsigned __int16 *)(a1 + 18);
  *(_DWORD *)(a1 + 80) = v3;
  result = 0xFFFFLL;
  if ( (_WORD)v6 != 0xFFFF )
  {
    v8 = *(unsigned __int16 *)(a1 + 16);
    result = (unsigned int)(25 * a3);
    if ( v5 >= (unsigned int)result )
    {
      result = 1000 * a2 / v5;
      if ( (unsigned int)result >= 5 )
      {
        v10 = result * (v6 - v8);
        result = 30LL;
        v11 = v10 / 0x7D0 + 5;
        if ( v11 > 0x1E )
          v11 = 30;
        v9 = v11 + v8;
        if ( v9 > v6 )
          LOWORD(v9) = v6;
        goto LABEL_6;
      }
      v9 = v8 - 1;
    }
    else
    {
      v9 = v8 - 10;
    }
    if ( v9 < 4 )
      LOWORD(v9) = 4;
LABEL_6:
    *(_WORD *)(a1 + 16) = v9;
  }
  return result;
}
