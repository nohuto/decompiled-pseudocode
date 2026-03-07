__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetPixelFormat(
        CGdiSpriteBitmap *this,
        enum DXGI_FORMAT a2)
{
  unsigned int v2; // esi
  int v5; // edi
  __int64 v6; // rax
  int Bitmap; // eax

  v2 = 0;
  if ( a2 != *((_DWORD *)this + 16) )
  {
    v5 = 0;
    if ( *((_QWORD *)this + 15) )
    {
      if ( *((_DWORD *)this + 32) != a2 )
      {
        *((_BYTE *)this + 144) = 1;
        CGdiSpriteBitmap::UpdatePixelFormat(this, a2);
        Bitmap = CGdiSpriteBitmap::CreateBitmap(
                   (CRedirectedGDISurface **)this,
                   (enum DXGI_FORMAT)*((_DWORD *)this + 32));
        v5 = Bitmap;
        v2 = Bitmap;
        if ( Bitmap < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, Bitmap, 0x72u, 0LL);
          goto LABEL_9;
        }
      }
    }
    v2 = v5;
    if ( v5 < 0 )
    {
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0x190u, 0LL);
      return v2;
    }
    v6 = *(_QWORD *)this;
    *((_DWORD *)this + 16) = a2;
    (*(void (__fastcall **)(CGdiSpriteBitmap *, _QWORD, _QWORD))(v6 + 72))(this, 0LL, 0LL);
  }
  return v2;
}
