__int64 __fastcall CCaptureRenderTarget::ProcessSetSDRBoost(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST *a3)
{
  float v3; // xmm1_4

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 475) != v3 )
  {
    *((float *)this + 475) = v3;
    CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(this);
  }
  return 0LL;
}
