bool __fastcall CHolographicManager::AddHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  bool v5; // di
  CompositorTracing *v6; // rcx
  __int64 v7; // rcx
  unsigned int Ptr; // eax
  unsigned int v9; // r8d
  CHolographicInteropTaskQueue *v10; // rcx
  struct IUnknown *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  struct CHolographicViewer *v15; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v16[4]; // [rsp+68h] [rbp-30h]

  v15 = a2;
  v3 = *((_DWORD *)a2 + 20);
  *(_OWORD *)v16 = *(_OWORD *)((char *)a2 + 116);
  v5 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v4,
      (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicViewerAdd_(v6, v3, v16[3]);
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[28].Ptr;
  v9 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_13;
  }
  if ( v9 > HIDWORD(this[27].Ptr) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[25], 8, 1, &v15);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
      goto LABEL_13;
    }
  }
  else
  {
    *((_QWORD *)this[25].Ptr + Ptr) = v15;
    LODWORD(this[28].Ptr) = v9;
  }
  CMILRefCountImpl::AddReference((struct CHolographicViewer *)((char *)v15 + 8));
  v10 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v10 )
  {
    v11 = (struct IUnknown *)((char *)v15 + 64);
    if ( !v15 )
      v11 = 0LL;
    v5 = CHolographicInteropTaskQueue::PostMessageW(v10, 0x18u, v11, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  ReleaseSRWLockExclusive(this + 13);
  return v5;
}
