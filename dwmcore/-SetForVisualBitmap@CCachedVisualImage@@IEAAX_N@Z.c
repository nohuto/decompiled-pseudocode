void __fastcall CCachedVisualImage::SetForVisualBitmap(CCachedVisualImage *this)
{
  *((_BYTE *)this + 1778) = 1;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  CCachedVisualImage::ChoosePixelFormat(this);
  (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
