__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CRedirectedGDISurface **this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  CRedirectedGDISurface *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int Bitmap; // eax
  __int64 v10; // rcx

  v2 = 0;
  *a2 = 0LL;
  if ( !this[43] )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this - 12, (enum DXGI_FORMAT)*((_DWORD *)this + 8));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Bitmap, 0xA5u, 0LL);
  }
  if ( this[43] )
  {
    v5 = this[43];
    if ( v5 )
      v6 = (__int64)v5 + *(int *)(*((_QWORD *)v5 + 1) + 12LL) + 8;
    else
      v6 = 0LL;
    *a2 = (struct IBitmapRealization *)v6;
    v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v2;
}
