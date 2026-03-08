/*
 * XREFs of ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x180018E04
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D87F0 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801D3998 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsNormalDesktopRender(CDrawingContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 6) )
    return *((_BYTE *)g_pComposition + 1274) == 0;
  return v1;
}
