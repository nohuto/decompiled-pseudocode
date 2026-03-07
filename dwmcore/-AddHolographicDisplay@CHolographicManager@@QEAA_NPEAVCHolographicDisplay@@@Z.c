bool __fastcall CHolographicManager::AddHolographicDisplay(RTL_SRWLOCK *this, struct CHolographicDisplay *a2)
{
  unsigned int v2; // ebp
  const struct _GUID *v3; // rbx
  __int64 v5; // rcx
  bool v6; // di
  CompositorTracing *v7; // rcx
  __int64 v8; // rcx
  unsigned int Ptr; // eax
  unsigned int v10; // r8d
  CHolographicInteropTaskQueue *v11; // rcx
  struct IUnknown *v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  struct CHolographicDisplay *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v2 = *((_DWORD *)a2 + 22);
  v3 = (const struct _GUID *)((char *)a2 + 92);
  v6 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v5,
      (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicDisplayAdd_(v7, v2, v3);
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[17].Ptr;
  v10 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_13;
  }
  if ( v10 > HIDWORD(this[16].Ptr) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[14], 8, 1, &v16);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
      goto LABEL_13;
    }
  }
  else
  {
    *((_QWORD *)this[14].Ptr + Ptr) = v16;
    LODWORD(this[17].Ptr) = v10;
  }
  CMILRefCountImpl::AddReference((struct CHolographicDisplay *)((char *)v16 + 8));
  v11 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v11 )
  {
    v12 = (struct IUnknown *)((char *)v16 + 72);
    if ( !v16 )
      v12 = 0LL;
    v6 = CHolographicInteropTaskQueue::PostMessageW(v11, 6u, v12, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  ReleaseSRWLockExclusive(this + 13);
  return v6;
}
