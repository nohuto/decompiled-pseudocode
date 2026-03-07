void __fastcall CCachedVisualImage::NotifyInvalidResource(CCachedVisualImage *this, const struct IDeviceResource *a2)
{
  std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((_QWORD *)this + 13);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 11) + 72LL))((char *)this - 88, 0LL, 0LL);
}
