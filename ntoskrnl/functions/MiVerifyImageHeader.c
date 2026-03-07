__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v6; // cx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int16 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int16 v15; // ax
  __int16 v16; // r8
  __int64 v17; // r11
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  __int16 v22; // ax

  if ( (a2 & 3) != 0 )
  {
    dword_140C65490 = 59;
    return 3221225776LL;
  }
  if ( *(_DWORD *)a2 != 17744 )
    return MiComputeBadImageHeaderType(a2, a3, a4);
  if ( !*(_WORD *)(a2 + 4) && !*(_WORD *)(a2 + 20) )
  {
    dword_140C65490 = 70;
    return 3221225776LL;
  }
  if ( (*(_BYTE *)(a2 + 22) & 2) == 0 )
  {
    dword_140C65490 = 71;
    return 3221225595LL;
  }
  v6 = *(_WORD *)(a2 + 24);
  *(_WORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
  if ( v6 != 523 )
  {
    v19 = *(_DWORD *)(a2 + 112);
    *(_DWORD *)(a1 + 20) = v19;
    *(_QWORD *)a1 = *(unsigned int *)(a2 + 52);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a2 + 96);
    *(_QWORD *)(a1 + 40) = *(unsigned int *)(a2 + 100);
    *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
    *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
    *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
    *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
    *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
    *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( *(_DWORD *)(a2 + 116) > 6u )
    {
      v20 = *(_DWORD *)(a2 + 168);
      if ( v20 )
      {
        *(_DWORD *)(a1 + 104) = v20;
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 172);
      }
    }
    if ( *(_DWORD *)(a2 + 116) > 0xCu )
    {
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 216);
      *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 220);
    }
    if ( *(_DWORD *)(a2 + 116) <= 0xEu )
    {
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    else
    {
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 232);
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 236);
      if ( *(_DWORD *)(a2 + 232) && *(_DWORD *)(a2 + 236) )
        *(_DWORD *)(a1 + 20) = v19 | 1;
    }
    if ( *(_DWORD *)(a2 + 116) <= 5u )
    {
      *(_DWORD *)(a1 + 88) = 0;
      v21 = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 160);
      v21 = *(_DWORD *)(a2 + 164);
    }
    *(_DWORD *)(a1 + 92) = v21;
    if ( *(_DWORD *)(a2 + 116) > 0xAu )
    {
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 200);
      v10 = *(_DWORD *)(a2 + 204);
      goto LABEL_17;
    }
LABEL_61:
    *(_DWORD *)(a1 + 96) = 0;
    v10 = 0;
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 20) = v7;
  *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 104);
  *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
  *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
  *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
  *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
  *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
  *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( *(_DWORD *)(a2 + 132) > 6u )
  {
    v8 = *(_DWORD *)(a2 + 184);
    if ( v8 )
    {
      *(_DWORD *)(a1 + 104) = v8;
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 188);
    }
  }
  if ( *(_DWORD *)(a2 + 132) > 0xCu )
  {
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 232);
    *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 236);
  }
  if ( *(_DWORD *)(a2 + 132) <= 0xEu )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 248);
    *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 252);
    if ( *(_DWORD *)(a2 + 248) && *(_DWORD *)(a2 + 252) )
      *(_DWORD *)(a1 + 20) = v7 | 1;
  }
  if ( *(_DWORD *)(a2 + 132) <= 5u )
  {
    *(_DWORD *)(a1 + 88) = 0;
    v9 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 176);
    v9 = *(_DWORD *)(a2 + 180);
  }
  *(_DWORD *)(a1 + 92) = v9;
  if ( *(_DWORD *)(a2 + 132) <= 0xAu )
    goto LABEL_61;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 216);
  v10 = *(_DWORD *)(a2 + 220);
LABEL_17:
  *(_DWORD *)(a1 + 100) = v10;
  if ( dword_140C65508 && dword_140C6550C == *(_DWORD *)(a1 + 64) && dword_140C65510 == *(_DWORD *)(a1 + 16) )
    __debugbreak();
  v11 = *(_WORD *)(a1 + 48);
  if ( ((v11 - 267) & 0xFEFF) != 0 )
  {
    dword_140C65490 = 73;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 8);
    if ( (v12 & 0x1FF) == 0 || v12 == *(_DWORD *)(a1 + 12) )
    {
      if ( v12 )
      {
        v13 = *(_DWORD *)(a1 + 12);
        if ( ((v13 - 1) & v13) != 0 )
        {
          dword_140C65490 = 78;
        }
        else if ( ((v12 - 1) & v12) != 0 )
        {
          dword_140C65490 = 79;
        }
        else if ( v13 < v12 )
        {
          dword_140C65490 = 80;
        }
        else
        {
          v14 = *(_DWORD *)(a1 + 16);
          if ( v14 > 0x77000000 )
          {
            dword_140C65490 = 81;
          }
          else
          {
            if ( v11 == 267 )
            {
              v22 = *(_WORD *)(a2 + 4);
              if ( v22 != 332 && v22 != 452 )
              {
                dword_140C65490 = 82;
                return 3221225595LL;
              }
            }
            else if ( v11 == 523 )
            {
              v15 = *(_WORD *)(a2 + 4);
              if ( v15 != -31132 && v15 != -21916 )
              {
                dword_140C65490 = 83;
                return 3221225595LL;
              }
            }
            if ( *(_DWORD *)(a1 + 24) >= v14 )
            {
              dword_140C65490 = 84;
            }
            else if ( *(_WORD *)a1 )
            {
              dword_140C65490 = 85;
            }
            else
            {
              if ( (*(_BYTE *)(a2 + 20) & 7) == 0 )
              {
                if ( MiLegacyImageArchitecture(*(_WORD *)(a2 + 4)) )
                {
                  if ( v16 && _bittest16((const signed __int16 *)(v17 + 60), 0xCu) )
                  {
                    dword_140C65490 = 87;
                    return 3221225595LL;
                  }
                }
                else
                {
                  if ( v16 )
                  {
                    dword_140C65490 = 88;
                    return 3221225595LL;
                  }
                  if ( (*(_WORD *)(v17 + 60) & 0x140) != 0x140 )
                  {
                    dword_140C65490 = 89;
                    return 3221225595LL;
                  }
                }
                return 0LL;
              }
              dword_140C65490 = 86;
            }
          }
        }
      }
      else
      {
        dword_140C65490 = 77;
      }
    }
    else
    {
      dword_140C65490 = 76;
    }
  }
  return 3221225595LL;
}
