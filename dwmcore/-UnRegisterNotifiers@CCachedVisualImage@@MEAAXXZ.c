void __fastcall CCachedVisualImage::UnRegisterNotifiers(struct CResource **this)
{
  (*((void (__fastcall **)(struct CResource **))*this + 24))(this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
}
