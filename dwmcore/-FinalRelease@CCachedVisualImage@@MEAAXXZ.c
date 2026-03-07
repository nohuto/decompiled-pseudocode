void __fastcall CCachedVisualImage::FinalRelease(CCachedVisualImage *this)
{
  std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((char *)this + 192);
  (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 64LL))(this);
}
