void __fastcall CStereoRenderTargetBitmap::SetSDRBoost(CStereoRenderTargetBitmap *this, float a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 40LL))(*((_QWORD *)this + 6));
  CRenderTargetBitmap::SetSDRBoost(this, a2);
}
