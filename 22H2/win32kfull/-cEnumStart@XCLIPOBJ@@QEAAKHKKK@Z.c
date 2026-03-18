/*
 * XREFs of ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00541A0
 * Callers:
 *     CLIPOBJ_cEnumStart @ 0x1C000E940 (CLIPOBJ_cEnumStart.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C001EC30 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C002D880 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngCopyBits @ 0x1C0030980 (EngCopyBits.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0034764 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0053D40 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     EngTextOut @ 0x1C0055630 (EngTextOut.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0090588 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00AA1D0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00B24D8 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     EngTransparentBlt @ 0x1C00B9F70 (EngTransparentBlt.c)
 *     EngAlphaBlend @ 0x1C00D6070 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00D7380 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00F89B0 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0107D28 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0137A34 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C015F080 (-vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     WNDOBJ_cEnumStart @ 0x1C02887F0 (WNDOBJ_cEnumStart.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0291930 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0295B18 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02C84B0 (NtGdiCLIPOBJ_cEnumStart.c)
 *     EngHTBlt @ 0x1C02DECB0 (EngHTBlt.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E3430 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E3920 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E3C40 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E3F80 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02E54B0 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02E57D0 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 *     ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C03010B0 (-vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C03012D0 (-vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0301670 (-vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C03018A0 (-vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0301C40 (-vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0301EE0 (-vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0302290 (-vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::cEnumStart(XCLIPOBJ *this, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r11d
  __int128 v8; // xmm0
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // r9d
  unsigned __int64 i; // rdx
  __int64 result; // rax
  int *v16; // rdx
  int v17; // eax
  _DWORD *v18; // rdx
  int v19; // r9d
  __int64 v20; // rdx
  unsigned int v21; // ecx

  v5 = 0;
  *((_DWORD *)this + 28) = a3;
  *((_DWORD *)this + 32) = a2;
  if ( a4 != 4 )
    v5 = a4;
  *((_DWORD *)this + 27) = v5;
  if ( a2 )
    v8 = *(_OWORD *)(*((_QWORD *)this + 7) + 56LL);
  else
    v8 = *(_OWORD *)((char *)this + 4);
  v9 = *((_QWORD *)this + 7);
  *((_OWORD *)this + 4) = v8;
  v10 = *(_DWORD *)(v9 + 52);
  *((_DWORD *)this + 29) = 0;
  v11 = v10 - 1;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 22) = v11;
  if ( v5 >= 2 )
  {
    v16 = (int *)(*(_QWORD *)(v9 + 40) - 4LL);
    v17 = *v16;
    *((_DWORD *)this + 30) = -1;
    v18 = (int *)((char *)v16 - (unsigned int)(4 * v17 + 16));
    *((_QWORD *)this + 10) = v18 + 1;
    if ( !a2 )
    {
      v19 = *((_DWORD *)this + 19);
      while ( 1 )
      {
        v20 = (__int64)v18 - (unsigned int)(4 * *v18 + 16) + 4;
        if ( *(_DWORD *)(v20 + 4) < v19 )
          break;
        *((_DWORD *)this + 22) = --v11;
        if ( !v11 )
          return 0xFFFFFFFFLL;
        *((_QWORD *)this + 10) = v20;
        v18 = (_DWORD *)(v20 - 4);
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(v9 + 32);
    *((_QWORD *)this + 10) = v12;
    *((_DWORD *)this + 30) = 1;
    if ( !a2 )
    {
      v13 = *((_DWORD *)this + 17);
      for ( i = (unsigned int)(4 * *(_DWORD *)v12 + 16); ; v12 = (unsigned int)(4 * *(_DWORD *)i + 16) )
      {
        i += v12;
        if ( *(_DWORD *)(i + 8) > v13 )
          break;
        *((_DWORD *)this + 22) = --v11;
        if ( !v11 )
          return 0xFFFFFFFFLL;
        *((_QWORD *)this + 10) = i;
      }
    }
  }
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 25) = 4 * ((v5 & 1) == 0) - 2;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v21 = *((_DWORD *)this + 34);
  result = 0xFFFFFFFFLL;
  if ( v21 <= a5 )
    return v21;
  return result;
}
