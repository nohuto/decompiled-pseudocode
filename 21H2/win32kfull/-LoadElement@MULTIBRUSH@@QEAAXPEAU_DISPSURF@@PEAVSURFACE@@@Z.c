/*
 * XREFs of ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C029FEC0
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C016F090 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A1630 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A1B50 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A2950 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A2C30 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A2FB0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A38B8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A3D30 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 */

void __fastcall MULTIBRUSH::LoadElement(MULTIBRUSH *this, struct _DISPSURF *a2, struct SURFACE *a3)
{
  __int64 v5; // rdx
  int v7; // ecx
  __int64 v8; // rbx
  struct PALETTE *v9; // r10
  struct PALETTE *v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  int NearestIndexFromColorref; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 1);
  if ( v5 && a3 )
  {
    v7 = *((_DWORD *)a2 + 6);
    if ( v7 )
    {
      v8 = *((_QWORD *)a2 + 6);
      v9 = ppalDefault;
      if ( (*(_DWORD *)(v8 + 2140) & 0x100) != 0 )
      {
        v10 = DrvRealizeHalftonePalette(*((_QWORD **)a2 + 6), 0);
        v7 = *((_DWORD *)a2 + 6);
        v9 = v10;
      }
      if ( v7 <= 0
        || (v11 = (_DWORD *)*((_QWORD *)this + 1), *v11 != -1)
        || (v12 = (unsigned int)v11[7], (_DWORD)v12 == -1) )
      {
        v13 = *((_QWORD *)this + 1);
        if ( *(_DWORD *)v13 == -1 )
        {
          v17 = *((_QWORD *)this + 4);
          if ( v17 )
          {
            *((_QWORD *)this + 5) = *(_QWORD *)(v13 + 32);
            *(_QWORD *)(v13 + 32) = *(_QWORD *)(v17 + 16 * (*((unsigned int *)a2 + 4) + 1LL));
            *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 4)
                                                                 + 16LL * *((unsigned int *)a2 + 4)
                                                                 + 8);
          }
        }
        else
        {
          v14 = *((_QWORD *)a3 + 16);
          v15 = *(unsigned int *)(v13 + 28);
          v20 = v14;
          if ( v14 && (v15 & 0x3000000) == 0 && (*(_DWORD *)(v8 + 2140) & 0x100) != 0 )
            NearestIndexFromColorref = XEPALOBJ::ulDispatchGFPEFunction(&v20, *(unsigned int *)(v14 + 96), v15);
          else
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v14, v9, *(unsigned int *)(v13 + 28), 1LL);
          **((_DWORD **)this + 1) = NearestIndexFromColorref;
        }
      }
      else
      {
        **((_DWORD **)this + 1) = ulGetNearestIndexFromColorref(*((_QWORD *)a3 + 16), v9, v12, 1LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = 0LL;
      }
    }
    else
    {
      v18 = *((_QWORD *)this + 4);
      if ( v18 )
        *(_QWORD *)(v5 + 8) = *(_QWORD *)(v18 + 16LL * *((unsigned int *)a2 + 4) + 8);
    }
    if ( *((_QWORD *)this + 4) )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 80LL) = a3;
      v19 = *((_QWORD *)a3 + 16);
      if ( v19 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) = v19;
    }
  }
}
