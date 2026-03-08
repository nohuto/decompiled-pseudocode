/*
 * XREFs of ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18010DB8C
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18004523C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180042DF0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180046020 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::NotifyDirty(CGdiSpriteBitmap *this, __int64 a2)
{
  __int64 v2; // rbx
  signed int LastError; // eax
  HGDIOBJ ho[2]; // [rsp+50h] [rbp-78h] BYREF
  int *v7; // [rsp+60h] [rbp-68h] BYREF
  int v8; // [rsp+68h] [rbp-60h] BYREF

  v2 = *((_QWORD *)this + 15);
  ho[0] = 0LL;
  SetLastError(0);
  if ( (unsigned int)DwmHLSurfGetDirtyRgn(*(_QWORD *)(v2 + 24), a2, ho, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL) )
  {
    if ( ho[0] )
    {
      v8 = 0;
      v7 = &v8;
      CRegion::SetHRGN((CRegion *)&v7, (HRGN)ho[0]);
      CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v7, 1);
      DeleteObject(ho[0]);
      FastRegion::CRegion::FreeMemory((void **)&v7);
    }
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, &dword_180355950, 4u, LastError, 0xBEu, 0LL);
  }
}
