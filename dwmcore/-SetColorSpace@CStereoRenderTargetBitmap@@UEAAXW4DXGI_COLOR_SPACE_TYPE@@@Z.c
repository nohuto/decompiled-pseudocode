void __fastcall CStereoRenderTargetBitmap::SetColorSpace(CStereoRenderTargetBitmap *this, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  CRenderTargetBitmap::SetColorSpace(this, a2);
}
