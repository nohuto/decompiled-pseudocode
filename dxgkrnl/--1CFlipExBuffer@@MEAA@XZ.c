void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  int v3; // edx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = *((_DWORD *)this + 96) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  if ( *((_QWORD *)this + 44) && *((_QWORD *)this + 43) )
    DxgkImmediateSignalSynchronizationObjectByReference();
  CFlipExBuffer::DisableCascadedSignaling(this);
  v3 = *((_DWORD *)this + 84);
  if ( v3 > 0 )
  {
    SignalPresentLimitSemaphore(*((struct _KSEMAPHORE **)this + 41), v3);
    *((_DWORD *)this + 84) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 46);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)this + 46) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 41);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = (void *)*((_QWORD *)this + 43);
  if ( v6 )
    ObfDereferenceObject(v6);
  CCompositionBuffer::~CCompositionBuffer(this);
}
