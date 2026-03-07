bool __fastcall CKernelSensorThread::DeactivateInputProcessing(CKernelSensorThread *this)
{
  bool v2; // bl

  v2 = CInputThreadBase::DeactivateInputProcessing(this);
  if ( v2 )
    CKernelSensorThread::DestroyEventHandles(this);
  return v2;
}
