/*
 * XREFs of U64DivU32RoundUp @ 0x1C0255DA0
 * Callers:
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C0255BE8 (MulDivFD6Pairs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall U64DivU32RoundUp(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  unsigned int v5; // edi
  int v6; // r10d
  int v7; // ebx
  int v8; // r9d
  unsigned __int16 v9; // ax
  int v10; // r9d
  unsigned int v11; // edx
  int v12; // ebp
  unsigned __int16 v13; // r11
  unsigned int v14; // ebx
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  unsigned __int16 v21; // ax
  unsigned int v22; // esi
  __int16 v23; // r11
  unsigned int v24; // ebx
  unsigned int v25; // r9d
  unsigned __int16 v26; // ax

  v3 = a1 + 1;
  v4 = a2 + (a3 >> 1);
  if ( v4 >= a2 )
    v3 = a1;
  v5 = HIWORD(a3);
  if ( (_WORD)a3 && HIWORD(a3) )
  {
    v6 = v3 / v5;
    v7 = (unsigned __int16)(v3 / v5) * (unsigned __int16)a3;
    v8 = HIWORD(v4) | ((v3 - v5 * (unsigned __int16)(v3 / v5)) << 16);
    if ( v7 < 0 )
    {
      v9 = (v7 - v8) / a3;
      LOWORD(v6) = v6 - v9;
      v7 -= a3 * v9;
    }
    v10 = v8 - v7;
    if ( v10 < 0 )
    {
      LOWORD(v6) = v6 - 1;
      v10 += a3;
      if ( v10 < 0 )
      {
        LOWORD(v6) = v6 - 1;
        v10 += a3;
        if ( v10 < 0 )
        {
          LOWORD(v6) = v6 - 1;
          v10 += a3;
          if ( v10 < 0 )
          {
            LOWORD(v6) = v6 - 1;
            v10 += a3;
            if ( v10 < 0 )
            {
              LOWORD(v6) = v6 - 1;
              v10 += a3;
              if ( v10 < 0 )
              {
                LOWORD(v6) = v6 - 1;
                v10 += a3;
                if ( v10 < 0 )
                {
                  LOWORD(v6) = v6 - -v10 / a3;
                  v11 = -v10 % a3;
                  if ( v11 )
                  {
                    LOWORD(v6) = v6 - 1;
                    v10 = a3 - v11;
                  }
                }
              }
            }
          }
        }
      }
    }
    v12 = (unsigned __int16)v4;
    if ( HIWORD(v10) >= HIWORD(a3) )
    {
      v22 = ((unsigned __int16)a3 << 16) - ((unsigned __int16)v4 | (v10 << 16));
      v23 = v22 / a3 + 1;
      if ( v22 <= a3 * (unsigned __int16)(v22 / a3) )
        v23 = v22 / a3;
      v13 = -v23;
    }
    else
    {
      v13 = v10 / v5;
      v14 = (unsigned __int16)a3 * v13;
      v15 = v12 | ((v10 - v5 * v13) << 16);
      if ( v15 < v14 )
      {
        --v13;
        v16 = a3 + v15;
        if ( v16 < v14 )
        {
          --v13;
          v17 = a3 + v16;
          if ( v17 < v14 )
          {
            --v13;
            v18 = a3 + v17;
            if ( v18 < v14 )
            {
              --v13;
              v19 = a3 + v18;
              if ( v19 < v14 )
              {
                v20 = v14 - v19;
                v21 = v20 / a3;
                v13 -= v21;
                if ( v20 > a3 * v21 )
                  --v13;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v24 = HIWORD(v4);
    if ( (_WORD)a3 )
    {
      v25 = v24 | (v3 << 16);
      LOWORD(v6) = v25 / (unsigned __int16)a3;
      v26 = ((unsigned __int16)v4 | (unsigned __int64)((v25 % (unsigned __int16)a3) << 16)) / (unsigned __int16)a3;
    }
    else
    {
      LOWORD(v6) = v3 / v5;
      v26 = (v24 | (unsigned __int64)((v3 % v5) << 16)) / v5;
    }
    v13 = v26;
  }
  return v13 | ((unsigned __int16)v6 << 16);
}
