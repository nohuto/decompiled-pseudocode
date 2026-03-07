CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::CCachedTarget::CCachedTarget(
        CCachedVisualImage::CCachedTarget *this,
        struct CCachedVisualImage *a2,
        struct IRenderTargetBitmap *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)this = a2;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    (__int64)a3);
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 8) = 2;
  *((_WORD *)this + 28) = 256;
  v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 40LL))(
    v6,
    ((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL));
  return this;
}
