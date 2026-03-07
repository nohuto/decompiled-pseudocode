__int64 __fastcall CVisualBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // edi
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v1 = 0;
  if ( !this[13] )
  {
    v3 = (CCachedVisualImage *)CCachedVisualImage::operator new();
    if ( v3 )
      v4 = CCachedVisualImage::CCachedVisualImage(v3, this[2], 0, 1);
    else
      v4 = 0LL;
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v4 + 48LL))(v4);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Eu, 0LL);
    }
    else
    {
      CCachedVisualImage::SetForVisualBitmap(v4);
      v7 = CCachedVisualImage::SetRootVisual(v4, this[9]);
      v1 = v7;
      if ( v7 >= 0 )
      {
        this[13] = v4;
        return v1;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x22u, 0LL);
    }
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v1;
}
