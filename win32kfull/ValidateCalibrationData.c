__int64 __fastcall ValidateCalibrationData(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rdi
  unsigned __int16 v13; // r11
  int v14; // edx

  v5 = 0;
  if ( a1 >= 0x40
    && a2
    && *(_DWORD *)(a2 + 4) == 2
    && *(_DWORD *)a2 < 0xFFFFu
    && *(_DWORD *)(a2 + 16) == 0x8000
    && *(_DWORD *)(a2 + 20) == 0x8000 )
  {
    v5 = 1;
    v6 = a3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return v5;
        if ( *(_WORD *)(a2 + 28) != 2 || *(_WORD *)(a2 + 30) != 2 )
          v5 = 0;
        v8 = 4;
      }
      else
      {
        if ( *(_WORD *)(a2 + 28) != 4 || *(_WORD *)(a2 + 30) != 4 )
          v5 = 0;
        v8 = 16;
      }
    }
    else
    {
      v8 = *(unsigned __int16 *)(a2 + 28) * *(unsigned __int16 *)(a2 + 30);
    }
    if ( a1 == 8 * v8 + 32 )
    {
      v9 = *(unsigned __int16 *)(a2 + 34);
      v10 = 0LL;
      while ( (unsigned int)v10 < v8 )
      {
        if ( !v5 )
          break;
        v11 = (unsigned int)v10 % *(unsigned __int16 *)(a2 + 28);
        v12 = v11;
        if ( !v11 )
          v9 = *(unsigned __int16 *)(a2 + 8 * v10 + 34);
        v13 = *(_WORD *)(a2 + 8 * v10 + 32);
        if ( v13 <= 0x8000u )
        {
          v14 = *(unsigned __int16 *)(a2 + 8 * v10 + 34);
          if ( (unsigned __int16)v14 <= 0x8000u
            && *(_WORD *)(a2 + 8 * v10 + 36) <= 0x8000u
            && *(_WORD *)(a2 + 8 * v10 + 38) <= 0x8000u
            && v14 == v9 )
          {
            v5 = 1;
            if ( (unsigned int)v10 <= *(unsigned __int16 *)(a2 + 28) || v13 == *(_WORD *)(a2 + 8 * v12 + 32) )
              continue;
          }
        }
        v5 = 0;
        v10 = (unsigned int)(v10 + 1);
      }
    }
  }
  return v5;
}
