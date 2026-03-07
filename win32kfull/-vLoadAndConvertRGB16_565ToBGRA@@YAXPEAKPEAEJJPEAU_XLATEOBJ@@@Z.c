void __fastcall vLoadAndConvertRGB16_565ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r11d
  unsigned __int8 *v6; // r10
  unsigned int v7; // ecx
  unsigned __int8 *v8; // rdi
  int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // eax

  v4 = a4;
  v6 = &a2[2 * a3];
  if ( ((unsigned __int8)v6 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 += 2;
    *a1++ = ((v7 & 0x600 | (v7 >> 1) & 0xE) >> 1) | (8
                                                   * (v7 & 0xE01F | (4 * (v7 & 0x7E0 | (8 * (v7 & 0xF800 | 0xFFFF0000))))));
    v4 = a4 - 1;
  }
  v8 = &v6[2 * (v4 & 0xFFFFFFFFFFFFFFFEuLL)];
  while ( v6 != v8 )
  {
    v9 = *(_DWORD *)v6;
    v10 = (*(_DWORD *)v6 & 0x6000000 | (*(_DWORD *)v6 >> 1) & 0xE0000u) >> 4;
    v11 = *(_DWORD *)v6 & 0xE01F1FFF;
    *a1 = ((*(_DWORD *)v6 & 0x600 | (*(_DWORD *)v6 >> 1) & 0xEu) >> 1) | (8
                                                                        * (*(_DWORD *)v6 & 0xE01F | (4 * (*(_DWORD *)v6 & 0x7E0 | (8 * (*(_DWORD *)v6 & 0xF800 | 0xFFFF0000))))));
    a1[1] = ((v9 & 0xF80000FF | ((v9 & 0x7E00000 | ((v11 | v10) >> 2)) >> 3)) >> 8) | 0xFF000000;
    a1 += 2;
    v6 += 4;
  }
  if ( (v4 & 1) != 0 )
    *a1 = ((*(_WORD *)v6 & 0x600 | (*(unsigned __int16 *)v6 >> 1) & 0xEu) >> 1) | (8
                                                                                 * (*(_WORD *)v6 & 0xE01F | (4 * (*(_WORD *)v6 & 0x7E0 | (8 * (*(_WORD *)v6 & 0xF800 | 0xFFFF0000))))));
}
