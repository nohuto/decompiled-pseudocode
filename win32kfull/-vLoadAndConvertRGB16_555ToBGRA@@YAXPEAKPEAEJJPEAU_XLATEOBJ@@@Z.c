void __fastcall vLoadAndConvertRGB16_555ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 *v5; // r8
  unsigned int v6; // ecx
  unsigned __int8 *v7; // r11
  unsigned int v8; // edx
  int v9; // eax

  v5 = &a2[2 * a3];
  if ( ((unsigned __int8)v5 & 2) != 0 )
  {
    v6 = *(unsigned __int16 *)v5;
    v5 += 2;
    *a1++ = (v6 >> 2) & 7 | (2
                           * (v6 & 0x380 | (4
                                          * (v6 & 0x1F | (2
                                                        * (v6 & 0x7000 | (4
                                                                        * (v6 & 0x3E0 | (8 * (v6 & 0xFC00 | 0xFFFF8000))))))))));
    --a4;
  }
  v7 = &v5[2 * (a4 & 0xFFFFFFFFFFFFFFFEuLL)];
  while ( v5 != v7 )
  {
    v8 = *(_DWORD *)v5;
    v9 = *(_DWORD *)v5;
    *a1 = (*(_DWORD *)v5 >> 2) & 7 | (2
                                    * (*(_DWORD *)v5 & 0x380 | (4
                                                              * (*(_DWORD *)v5 & 0x1F | (2
                                                                                       * (*(_DWORD *)v5 & 0x7000 | (4 * (*(_DWORD *)v5 & 0x3E0 | (8 * (*(_DWORD *)v5 & 0x7C00 | 0xFFFF8000))))))))));
    a1[1] = ((v8 & 0xFC00007F | ((v8 & 0x3E00000 | ((v8 & 0x70000000 | ((v8 & 0x1F0000 | ((v9 & 0x3800000 | (v8 >> 3) & 0x38000) >> 2)) >> 1)) >> 2)) >> 3)) >> 7) | 0xFF000000;
    a1 += 2;
    v5 += 4;
  }
  if ( (a4 & 1) != 0 )
    *a1 = (*(unsigned __int16 *)v5 >> 2) & 7 | (2
                                              * (*(_WORD *)v5 & 0x380 | (4
                                                                       * (*(_WORD *)v5 & 0x1F | (2
                                                                                               * (*(_WORD *)v5 & 0x7000 | (4 * (*(_WORD *)v5 & 0x3E0 | (8 * (*(_WORD *)v5 & 0xFC00 | 0xFFFF8000))))))))));
}
