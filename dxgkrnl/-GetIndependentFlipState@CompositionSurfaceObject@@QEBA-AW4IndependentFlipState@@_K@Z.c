__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipState(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(a1 + 48)) >= 0 )
  {
    v6 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(a1 + 40), a2, &v6) >= 0 )
      v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 192LL))(v6);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 48));
  }
  return v4;
}
