void __fastcall CCachedVisualImage::MarkAllTargetsDirty(CCachedVisualImage *this)
{
  char *v1; // r14
  CCachedVisualImage::CCachedTarget **v3; // rbx
  CCachedVisualImage::CCachedTarget *v4; // rsi
  CCachedVisualImage::CCachedTarget **v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 192;
  v3 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
  while ( v3 != *((CCachedVisualImage::CCachedTarget ***)this + 25) )
  {
    v4 = *v3;
    if ( CCachedVisualImage::CCachedTarget::IsValid(*v3) )
    {
      CCachedVisualImage::CCachedTarget::MarkDirty(v4);
      ++v3;
    }
    else
    {
      v3 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase((__int64)v1, &v5, v3);
    }
  }
}
