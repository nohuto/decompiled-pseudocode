void __fastcall CCachedVisualImage::UnRegisterRootVisualAsNotifier(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
}
