void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[233]);
  this[233] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[234]);
  this[234] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[235]);
  this[235] = 0LL;
}
