void __fastcall CCachedVisualImage::CCachedTarget::~CCachedTarget(CCachedVisualImage::CCachedTarget *this)
{
  __int64 v2; // r9
  __int64 v3; // rax
  _QWORD *v4; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)this + 88LL;
  v4 = (_QWORD *)(*(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL) + *((_QWORD *)this + 1) + 8LL);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*v4 + 48LL))(v4, v3 & -(__int64)(v2 != 0), *v4, -v2);
  (*(void (__fastcall **)(_QWORD, CCachedVisualImage::CCachedTarget *))(**(_QWORD **)this + 248LL))(
    *(_QWORD *)this,
    this);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 8);
}
