__int64 __fastcall MonDescParser::EDID_MODES::ModesFromEstablishedTimings(
        MonDescParser::EDID_MODES *this,
        unsigned __int64 a2,
        struct _VideoModeDescriptor *a3)
{
  __int64 v6; // r9
  __int16 v7; // ax
  unsigned int v8; // r10d
  USHORT v9; // bp
  USHORT v10; // r14
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // di
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  bool v18; // cf

  v6 = **(_QWORD **)this;
  v7 = *(_WORD *)(v6 + 35);
  v8 = *(unsigned __int8 *)(v6 + 37);
  v9 = *(unsigned __int8 *)(v6 + 21);
  v10 = *(unsigned __int8 *)(v6 + 22);
  v11 = 0;
  v12 = 0;
  v13 = (v8 >> 7) | (2 * (HIBYTE(v7) | ((unsigned __int8)v7 << 8)));
  if ( !v13 )
  {
LABEL_6:
    v18 = v11 < a2;
    return v18 ? 0xC01D0008 : 0;
  }
  while ( v11 < a2 )
  {
    if ( (v13 & 1) != 0 )
    {
      v14 = v11;
      v15 = 56LL * v12;
      ++v11;
      v16 = *(_OWORD *)((char *)&unk_1C009A890 + v15 + 16);
      *(_OWORD *)&a3[v14].PixelClockRate = *(_OWORD *)((char *)&unk_1C009A890 + v15);
      v17 = *(_OWORD *)((char *)&unk_1C009A890 + v15 + 32);
      *(_OWORD *)&a3[v14].HorizontalRefreshRateDenominator = v16;
      *(_QWORD *)&v16 = *(_QWORD *)((char *)&unk_1C009A890 + v15 + 48);
      *(_OWORD *)&a3[v14].HorizontalSyncPulseWidth = v17;
      *(_QWORD *)&a3[v14].IsSyncOnRGB = v16;
      a3[v14].HorizontalImageSize = v9;
      a3[v14].VerticalImageSize = v10;
      a3[v14].Origin = *((_BYTE *)this + 8);
    }
    ++v12;
    v13 >>= 1;
    if ( !v13 )
      goto LABEL_6;
  }
  v18 = 0;
  if ( v11 != a2 )
    return v18 ? 0xC01D0008 : 0;
  return 3221225507LL;
}
