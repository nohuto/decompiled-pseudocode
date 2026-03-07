__int64 __fastcall LdrpGenericProcessRelocation(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r11d
  unsigned __int16 v5; // bx
  unsigned int v6; // r10d
  _QWORD *v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r10d
  unsigned int v10; // r10d
  unsigned int v11; // r10d

  v3 = *a1;
  v4 = 1;
  v5 = v3 & 0xFFF;
  v6 = v3 >> 12;
  v7 = (_QWORD *)(a2 + v5);
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 6 )
              *v7 += a3;
            else
              return 0;
          }
          else
          {
            v4 = 2;
            if ( (v5 & 2) == 0 )
              *(_WORD *)v7 = (a1[1] + 0x8000 + (unsigned int)a3 + (*(unsigned __int16 *)v7 << 16)) >> 16;
          }
        }
        else
        {
          *(_DWORD *)v7 += a3;
        }
      }
      else
      {
        *(_WORD *)v7 += a3;
      }
    }
    else
    {
      *(_WORD *)v7 = ((unsigned int)a3 + (*(unsigned __int16 *)v7 << 16)) >> 16;
    }
  }
  return v4;
}
