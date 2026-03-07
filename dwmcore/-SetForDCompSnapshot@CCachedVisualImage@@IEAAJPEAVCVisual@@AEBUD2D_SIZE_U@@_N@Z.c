__int64 __fastcall CCachedVisualImage::SetForDCompSnapshot(
        CCachedVisualImage *this,
        struct CVisual *a2,
        const struct D2D_SIZE_U *a3,
        char a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  signed int height; // eax

  v7 = CCachedVisualImage::SetRootVisual(this, a2);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1B5u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
    *((float *)this + 26) = (float)(int)a3->width;
    *((float *)this + 27) = (float)(int)a3->height;
    *((double *)this + 15) = (float)(int)a3->width;
    height = a3->height;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 44) = 2;
    *((_BYTE *)this + 1779) = a4;
    *((double *)this + 16) = (float)height;
    CCachedVisualImage::ChoosePixelFormat(this);
    (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  return v9;
}
