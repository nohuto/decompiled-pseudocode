__int64 __fastcall CCaptureController::ProcessSetDefaultSDRBoost(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETDEFAULTSDRBOOST *a3)
{
  float v3; // xmm1_4
  CCaptureRenderTarget **v5; // rsi
  CCaptureRenderTarget **i; // rbx
  CCaptureRenderTarget *v7; // rcx

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 32) != v3 )
  {
    *((float *)this + 32) = v3;
    v5 = (CCaptureRenderTarget **)*((_QWORD *)this + 9);
    for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 8); i != v5; ++i )
    {
      v7 = *i;
      *((_DWORD *)v7 + 476) = *((_DWORD *)this + 32);
      CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(v7);
    }
  }
  return 0LL;
}
