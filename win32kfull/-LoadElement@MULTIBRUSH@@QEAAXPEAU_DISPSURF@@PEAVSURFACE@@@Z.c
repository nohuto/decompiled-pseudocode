/*
 * XREFs of ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02B0A64
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014E3F0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02B21E0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02B2700 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02B3560 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02B3830 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02B3BA0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B447C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B4900 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026E880 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 */

void __fastcall MULTIBRUSH::LoadElement(MULTIBRUSH *this, struct _DISPSURF *a2, struct SURFACE *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  struct PALETTE *v9; // r10
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  int NearestIndexFromColorref; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v6 = Gre::Base::Globals(this);
  v7 = *((_QWORD *)this + 1);
  if ( v7 && a3 )
  {
    if ( *((_DWORD *)a2 + 6) )
    {
      v8 = *((_QWORD *)a2 + 6);
      v9 = (struct PALETTE *)*((_QWORD *)v6 + 750);
      if ( (*(_DWORD *)(v8 + 2140) & 0x100) != 0 )
        v9 = DrvRealizeHalftonePalette(*((Gre::Base **)a2 + 6), 0);
      if ( *((int *)a2 + 6) <= 0
        || (v10 = (_DWORD *)*((_QWORD *)this + 1), *v10 != -1)
        || (v11 = (unsigned int)v10[7], (_DWORD)v11 == -1) )
      {
        v12 = *((_QWORD *)this + 1);
        if ( *(_DWORD *)v12 == -1 )
        {
          v16 = *((_QWORD *)this + 4);
          if ( v16 )
          {
            *((_QWORD *)this + 5) = *(_QWORD *)(v12 + 32);
            *(_QWORD *)(v12 + 32) = *(_QWORD *)(v16 + 16 * (*((unsigned int *)a2 + 4) + 1LL));
            *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 4)
                                                                 + 16LL * *((unsigned int *)a2 + 4)
                                                                 + 8);
          }
        }
        else
        {
          v13 = *((_QWORD *)a3 + 16);
          v14 = *(unsigned int *)(v12 + 28);
          v20 = v13;
          if ( v13 && (v14 & 0x3000000) == 0 && (*(_DWORD *)(v8 + 2140) & 0x100) != 0 )
            NearestIndexFromColorref = XEPALOBJ::ulDispatchGFPEFunction(&v20, *(unsigned int *)(v13 + 96), v14);
          else
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v13, v9, *(unsigned int *)(v12 + 28), 1LL);
          **((_DWORD **)this + 1) = NearestIndexFromColorref;
        }
      }
      else
      {
        **((_DWORD **)this + 1) = ulGetNearestIndexFromColorref(*((_QWORD *)a3 + 16), v9, v11, 1LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = 0LL;
      }
      v17 = (_QWORD *)((char *)this + 32);
    }
    else
    {
      v17 = (_QWORD *)((char *)this + 32);
      v18 = *((_QWORD *)this + 4);
      if ( v18 )
        *(_QWORD *)(v7 + 8) = *(_QWORD *)(v18 + 16LL * *((unsigned int *)a2 + 4) + 8);
    }
    if ( *v17 )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 80LL) = a3;
      v19 = *((_QWORD *)a3 + 16);
      if ( v19 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) = v19;
    }
  }
}
