/*
 * XREFs of ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1800F82A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800A8784 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800F195C (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetSurface(
        struct CRedirectedGDISurface **this,
        struct CRedirectedGDISurface *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebp
  __int64 v9; // rcx

  v2 = 0;
  if ( a2 != this[9] )
  {
    if ( this[15] || !a2 )
    {
      v2 = -2003303421;
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x50u, 0LL);
    }
    else
    {
      v5 = CRedirectedGDISurface::Create(
             (HLSURF)a2,
             (struct CGdiSpriteBitmap *)this,
             (struct CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 28) + 152LL),
             this + 15);
      v7 = v5;
      v2 = v5;
      if ( v5 >= 0 )
      {
        this[9] = a2;
        *((_BYTE *)this + 144) = 1;
        CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)this);
        return v2;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x55u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x1DAu, 0LL);
  }
  return v2;
}
