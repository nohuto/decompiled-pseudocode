CExternalLayer *__fastcall CExternalLayer::CExternalLayer(
        CExternalLayer *this,
        const struct MilPointAndSizeL *a2,
        struct IRenderTargetBitmap *a3)
{
  __int128 v5; // xmm0

  *(_QWORD *)this = &CExternalLayer::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    (char *)this + 8,
    a3);
  v5 = *(_OWORD *)a2;
  *((_DWORD *)this + 8) = 0;
  *((_OWORD *)this + 1) = v5;
  *((_QWORD *)this + 5) = 0LL;
  CMILMatrix::SetToIdentity((CExternalLayer *)((char *)this + 48));
  return this;
}
