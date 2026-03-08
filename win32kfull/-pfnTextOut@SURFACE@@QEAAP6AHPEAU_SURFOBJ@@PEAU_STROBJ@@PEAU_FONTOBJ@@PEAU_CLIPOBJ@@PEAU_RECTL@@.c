/*
 * XREFs of ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1C02A2B34
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C02A2214 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     <none>
 */

int (*__fastcall SURFACE::pfnTextOut(
        SURFACE *this))(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int)
{
  if ( (*((_DWORD *)this + 28) & 8) != 0 )
    return *(int (**)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(*((_QWORD *)this + 6) + 2848LL);
  else
    return EngTextOut;
}
