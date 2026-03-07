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
