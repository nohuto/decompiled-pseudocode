/*
 * XREFs of ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1800F5328
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x1800461F0 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800F5274 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetDirtyRegionFromAccum(CRedirectedGDISurface *this, HRGN *a2)
{
  signed int v4; // esi
  signed int LastError; // eax
  __int64 v7; // rcx

  v4 = 0;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfGetDirtyRgn(*((_QWORD *)this + 3), 0LL, 0LL, a2, 0LL, 0LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180358AC0, 4u, v4, 0xD6u, 0LL);
  }
  return (unsigned int)v4;
}
