void __fastcall CCachedVisualImage::CCachedTarget::MarkDirty(CCachedVisualImage::CCachedTarget *this)
{
  if ( !*((_BYTE *)this + 57) )
  {
    (*(void (__fastcall **)(_QWORD, CCachedVisualImage::CCachedTarget *))(**(_QWORD **)this + 248LL))(
      *(_QWORD *)this,
      this);
    *((_BYTE *)this + 57) = 1;
  }
}
