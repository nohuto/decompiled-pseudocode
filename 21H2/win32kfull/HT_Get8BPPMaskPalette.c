/*
 * XREFs of HT_Get8BPPMaskPalette @ 0x1C0142F60
 * Callers:
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C009700C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C0142E30 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     HT_Get8BPPFormatPalette @ 0x1C025E120 (HT_Get8BPPFormatPalette.c)
 */

LONG __stdcall HT_Get8BPPMaskPalette(
        LPPALETTEENTRY pPaletteEntry,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LPPALETTEENTRY v6; // rbx
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r15d
  int v12; // r12d
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r12d
  bool v19; // cf
  unsigned int v20; // r15d
  bool v21; // cf
  int v22; // r13d
  BYTE v23; // cl
  unsigned int v24; // ebp
  unsigned int v25; // eax
  bool v26; // cf
  int v27; // r8d
  int v28; // eax
  int v29; // edx
  unsigned int v30; // r13d
  unsigned int i; // r15d
  int v32; // r12d
  BYTE v33; // cl
  unsigned int v34; // ebp
  __int64 v35; // rax
  int v36; // eax
  int v37; // edx
  int v38; // [rsp+20h] [rbp-38h]
  int v39; // [rsp+24h] [rbp-34h]
  __int64 v40; // [rsp+28h] [rbp-30h]
  __int64 v41; // [rsp+28h] [rbp-30h]
  unsigned int v42; // [rsp+68h] [rbp+10h]
  int v43; // [rsp+68h] [rbp+10h]

  v6 = pPaletteEntry;
  if ( !Use8BPPMaskPal )
    return HT_Get8BPPFormatPalette(pPaletteEntry, RedGamma, GreenGamma, BlueGamma);
  if ( CMYMask == 1 )
  {
    v9 = 4;
    v7 = 125;
    goto LABEL_20;
  }
  if ( CMYMask == 2 )
  {
    v9 = 5;
    v7 = 216;
LABEL_20:
    v8 = v9;
    v10 = v9;
    goto LABEL_5;
  }
  v7 = 0;
  v8 = (CMYMask >> 2) & 7;
  v9 = CMYMask >> 5;
  v10 = CMYMask & 3;
  if ( CMYMask && (!v9 || !v8 || (CMYMask & 3) == 0) )
    return 0;
LABEL_5:
  if ( pPaletteEntry )
  {
    v11 = 0;
    v39 = 512;
    v12 = 1;
    if ( *pPaletteEntry == 809650002 )
    {
      v6 = pPaletteEntry + 255;
      v12 = -1;
      if ( CMYMask )
      {
        v7 = (v9 + 1) * (v8 + 1) * (v10 + 1);
        v11 = (256 - v7) >> 1;
        if ( ((((_BYTE)v9 + 1) * ((_BYTE)v8 + 1) * ((_BYTE)v10 + 1)) & 1) != 0 )
          v39 = v11 + (v7 >> 1);
      }
    }
    memset(pPaletteEntry, 0, 0x400uLL);
    v42 = 0;
    if ( v7 )
    {
      v16 = v12;
      if ( v11 )
      {
        v17 = v11;
        v42 = v11;
        do
        {
          *(_WORD *)&v6->peGreen = -1;
          v6->peRed = -1;
          v6 += v12;
          --v17;
        }
        while ( v17 );
      }
      v18 = 0;
      v40 = 4 * v16;
      v19 = v9 != 0;
      do
      {
        if ( v19 )
          v38 = (int)(255500000 - 255 * DivFD6(v18, v9)) / 1000000;
        else
          LOBYTE(v38) = 0;
        v20 = 0;
        v21 = v8 != 0;
        do
        {
          if ( v21 )
            v22 = (int)(255500000 - 255 * DivFD6(v20, v8)) / 1000000;
          else
            LOBYTE(v22) = 0;
          v23 = v38;
          v24 = 0;
          v25 = v42;
          v26 = v10 != 0;
          v27 = v39;
          do
          {
            if ( v26 )
            {
              v28 = DivFD6(v24, v10);
              v27 = v39;
              v23 = v38;
              v29 = (255500000 - 255 * v28) / 1000000;
              v25 = v42;
            }
            else
            {
              LOBYTE(v29) = 0;
            }
            v6->peRed = v23;
            v6->peGreen = v22;
            v6->peBlue = v29;
            if ( v25 == v27 )
            {
              ++v25;
              v6 = (LPPALETTEENTRY)((char *)v6 + v40);
              v6->peRed = v23;
              v6->peGreen = v22;
              v6->peBlue = v29;
            }
            v6 = (LPPALETTEENTRY)((char *)v6 + v40);
            ++v25;
            ++v24;
            v42 = v25;
            v26 = v24 < v10;
          }
          while ( v24 <= v10 );
          v21 = ++v20 < v8;
        }
        while ( v20 <= v8 );
        v19 = ++v18 < v9;
      }
      while ( v18 <= v9 );
    }
    else if ( v9 && v8 && v10 )
    {
      v30 = 0;
      v41 = 4LL * v12;
      do
      {
        if ( v30 >= v9 )
          LOBYTE(v43) = 0;
        else
          v43 = (int)(255500000 - 255 * DivFD6(v30, v9)) / 1000000;
        for ( i = 0; i <= 7; ++i )
        {
          if ( i >= v8 )
            LOBYTE(v32) = 0;
          else
            v32 = (int)(255500000 - 255 * DivFD6(i, v8)) / 1000000;
          v33 = v43;
          v34 = 0;
          v35 = v41;
          do
          {
            if ( v34 >= v10 )
            {
              LOBYTE(v37) = 0;
            }
            else
            {
              v36 = DivFD6(v34, v10);
              v33 = v43;
              v37 = (255500000 - 255 * v36) / 1000000;
              v35 = v41;
            }
            v6->peRed = v33;
            ++v34;
            v6->peGreen = v32;
            v6->peBlue = v37;
            v6 = (LPPALETTEENTRY)((char *)v6 + v35);
          }
          while ( v34 <= 3 );
        }
        ++v30;
      }
      while ( v30 <= 7 );
    }
    else
    {
      v13 = 255;
      v14 = 256LL;
      do
      {
        v6->peBlue = v13;
        v6->peGreen = v13;
        v6->peRed = v13--;
        v6 += v12;
        --v14;
      }
      while ( v14 );
    }
  }
  return 256;
}
