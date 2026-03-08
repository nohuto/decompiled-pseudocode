/*
 * XREFs of bCvtPts1 @ 0x1C0086D84
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0055DA0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C0081D78 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     GreDrawStream @ 0x1C0082A90 (GreDrawStream.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00837F0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     GreRectVisible @ 0x1C0086F6C (GreRectVisible.c)
 *     GreExcludeClipRect @ 0x1C0088000 (GreExcludeClipRect.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C008B840 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreGetAppClipBox @ 0x1C008C244 (GreGetAppClipBox.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 */

__int64 __fastcall bCvtPts1(unsigned __int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v5; // rbp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+40h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+20h] BYREF

  v20 = 0;
  v3 = a3;
  v21 = 0;
  v5 = (_DWORD *)a1;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          do
          {
            v14 = a2 + 1;
            bFToL(a1, a2, 6LL);
            bFToL(v15, a2 + 1, v16);
            *a2 += v5[6];
            a2 += 2;
            *v14 += v5[7];
            --v3;
          }
          while ( v3 );
        }
        break;
      case 3:
        if ( a3 )
        {
          do
          {
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *(a2 - 1) += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 8:
        if ( a3 )
        {
          do
          {
            bFToL(a1, &v20, 6LL);
            bFToL(v12, &v21, v13);
            a1 = (unsigned int)((((v5[6] + v20) >> 3) + 1) >> 1);
            *a2 = a1;
            a2[1] = (((v21 + v5[7]) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          do
          {
            bFToL(a1, &v20, 6LL);
            bFToL(v10, &v21, v11);
            a1 = (unsigned int)((((v5[6] + v20) >> 3) + 1) >> 1);
            *a2 = a1;
            a2 += 2;
            *(a2 - 1) = (((v21 + v5[7]) >> 3) + 1) >> 1;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        v8 = ((v6 >> 3) + 1) >> 1;
        if ( a3 )
        {
          do
          {
            *a2 += v8;
            a2[1] += v7;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
    }
  }
  else if ( a3 )
  {
    do
    {
      v17 = a2 + 1;
      bFToL(a1, a2, 6LL);
      bFToL(v18, a2 + 1, v19);
      *a2 += v5[6];
      a2 += 2;
      a1 = (unsigned int)v5[7];
      *v17 += a1;
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
