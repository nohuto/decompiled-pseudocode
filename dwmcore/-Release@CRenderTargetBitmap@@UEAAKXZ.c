__int64 __fastcall CRenderTargetBitmap::Release(CRenderTargetBitmap *this)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CRenderTargetBitmap *)((char *)this + 8));
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)this + 32LL))(this);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)this;
      --*v2;
      (*(void (__fastcall **)(CRenderTargetBitmap *, __int64))(v5 + 24))(this, 1LL);
    }
  }
  return v3;
}
