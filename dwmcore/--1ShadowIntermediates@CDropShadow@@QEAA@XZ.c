void __fastcall CDropShadow::ShadowIntermediates::~ShadowIntermediates(CDropShadow::ShadowIntermediates *this)
{
  CResource *v2; // rcx

  v2 = (CResource *)*((_QWORD *)this + 5);
  if ( v2 )
    CResource::UnRegisterNotifierInternal(v2, *((struct CResource **)this + 6));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 56);
}
