struct CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::FindExistingCachedTarget(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 24);
  v4 = (_QWORD *)*((_QWORD *)this + 25);
  while ( v2 != v4 )
  {
    CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(*v2, v6);
    if ( CanRenderToTargetFromSource(a2, (const struct RenderTargetInfo *)v6) )
      return (struct CCachedVisualImage::CCachedTarget *)*v2;
    ++v2;
  }
  return 0LL;
}
