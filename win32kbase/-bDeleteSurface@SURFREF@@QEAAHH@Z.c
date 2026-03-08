/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0029684
 * Callers:
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C002B5B0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C006DCE4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00DE6A0 (_lambda_c42d5e148a0c8c495193b965072d0c08_--_lambda_invoker_cdecl_.c)
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1C00DE6E0 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01828EC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0186AB8 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*(_QWORD *)this, 0LL, 0LL);
  if ( (_DWORD)result )
    *(_QWORD *)this = 0LL;
  return result;
}
