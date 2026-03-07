void __fastcall CVirtualMonitorCaptureRenderTarget::InitializeDeviceTransform(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CMILMatrix *a2)
{
  if ( *((_QWORD *)this + 12) )
    COffScreenRenderTarget::InitializeDeviceTransform(this, a2);
  else
    CMILMatrix::SetToIdentity(a2);
  CMILMatrix::Translate(
    a2,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 529)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 530)) ^ _xmm));
}
