LONG __stdcall HT_Get8BPPMaskPalette(
        LPPALETTEENTRY pPaletteEntry,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LPPALETTEENTRY v6; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // r15d
  int v13; // r12d
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // r12d
  bool v17; // cf
  unsigned int v18; // ebp
  bool v19; // cf
  int v20; // r13d
  BYTE v21; // cl
  unsigned int v22; // r15d
  int v23; // eax
  bool v24; // cf
  unsigned int v25; // r8d
  int v26; // eax
  int v27; // edx
  unsigned int v28; // r13d
  unsigned int i; // r15d
  int v30; // r12d
  BYTE v31; // cl
  unsigned int v32; // ebp
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  __int64 v37; // rdx
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
    v10 = 4;
    v8 = 125;
    goto LABEL_12;
  }
  if ( CMYMask == 2 )
  {
    v10 = 5;
    v8 = 216;
LABEL_12:
    v9 = v10;
    v11 = v10;
    goto LABEL_13;
  }
  v8 = 0;
  v9 = (CMYMask >> 2) & 7;
  v10 = CMYMask >> 5;
  v11 = CMYMask & 3;
  if ( CMYMask && (!v10 || !v9 || (CMYMask & 3) == 0) )
    return 0;
LABEL_13:
  if ( pPaletteEntry )
  {
    v12 = 0;
    v39 = 512;
    v13 = 1;
    if ( *pPaletteEntry == 809650002 )
    {
      v6 = pPaletteEntry + 255;
      v13 = -1;
      if ( CMYMask )
      {
        v8 = (v10 + 1) * (v9 + 1) * (v11 + 1);
        v12 = (256 - v8) >> 1;
        if ( ((((_BYTE)v10 + 1) * ((_BYTE)v9 + 1) * ((_BYTE)v11 + 1)) & 1) != 0 )
          v39 = v12 + (v8 >> 1);
      }
    }
    memset_0(pPaletteEntry, 0, 0x400uLL);
    v42 = 0;
    if ( v8 )
    {
      v14 = v13;
      if ( v12 )
      {
        v15 = v12;
        v42 = v12;
        do
        {
          *(_WORD *)&v6->peGreen = -1;
          v6->peRed = -1;
          v6 += v13;
          --v15;
        }
        while ( v15 );
      }
      v16 = 0;
      v40 = 4 * v14;
      v17 = v10 != 0;
      do
      {
        if ( v17 )
          v38 = (int)(255500000 - 255 * DivFD6(v16, v10)) / 1000000;
        else
          LOBYTE(v38) = 0;
        v18 = 0;
        v19 = v9 != 0;
        do
        {
          if ( v19 )
            v20 = (int)(255500000 - 255 * DivFD6(v18, v9)) / 1000000;
          else
            LOBYTE(v20) = 0;
          v21 = v38;
          v22 = 0;
          v23 = v39;
          v24 = v11 != 0;
          v25 = v42;
          do
          {
            if ( v24 )
            {
              v26 = DivFD6(v22, v11);
              v25 = v42;
              v21 = v38;
              v27 = (255500000 - 255 * v26) / 1000000;
              v23 = v39;
            }
            else
            {
              LOBYTE(v27) = 0;
            }
            v6->peRed = v21;
            v6->peGreen = v20;
            v6->peBlue = v27;
            if ( v25 == v23 )
            {
              ++v25;
              v6 = (LPPALETTEENTRY)((char *)v6 + v40);
              v6->peRed = v21;
              v6->peGreen = v20;
              v6->peBlue = v27;
            }
            v6 = (LPPALETTEENTRY)((char *)v6 + v40);
            ++v25;
            ++v22;
            v42 = v25;
            v24 = v22 < v11;
          }
          while ( v22 <= v11 );
          v19 = ++v18 < v9;
        }
        while ( v18 <= v9 );
        v17 = ++v16 < v10;
      }
      while ( v16 <= v10 );
    }
    else if ( v10 && v9 && v11 )
    {
      v28 = 0;
      v41 = 4LL * v13;
      do
      {
        if ( v28 >= v10 )
          LOBYTE(v43) = 0;
        else
          v43 = (int)(255500000 - 255 * DivFD6(v28, v10)) / 1000000;
        for ( i = 0; i <= 7; ++i )
        {
          if ( i >= v9 )
            LOBYTE(v30) = 0;
          else
            v30 = (int)(255500000 - 255 * DivFD6(i, v9)) / 1000000;
          v31 = v43;
          v32 = 0;
          v33 = v41;
          do
          {
            if ( v32 >= v11 )
            {
              LOBYTE(v35) = 0;
            }
            else
            {
              v34 = DivFD6(v32, v11);
              v31 = v43;
              v35 = (255500000 - 255 * v34) / 1000000;
              v33 = v41;
            }
            v6->peRed = v31;
            ++v32;
            v6->peGreen = v30;
            v6->peBlue = v35;
            v6 = (LPPALETTEENTRY)((char *)v6 + v33);
          }
          while ( v32 <= 3 );
        }
        ++v28;
      }
      while ( v28 <= 7 );
    }
    else
    {
      v36 = 255;
      v37 = 256LL;
      do
      {
        v6->peBlue = v36;
        v6->peGreen = v36;
        v6->peRed = v36--;
        v6 += v13;
        --v37;
      }
      while ( v37 );
    }
  }
  return 256;
}
