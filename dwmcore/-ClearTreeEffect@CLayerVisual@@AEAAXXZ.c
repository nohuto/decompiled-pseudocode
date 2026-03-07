void __fastcall CLayerVisual::ClearTreeEffect(struct CResource ***this)
{
  struct CResource **v2; // rdi
  struct CResource *v3; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, *this[89]);
  v2 = this[89];
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
    }
    operator delete(v2);
  }
  this[89] = 0LL;
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect((CLayerVisual *)this);
}
