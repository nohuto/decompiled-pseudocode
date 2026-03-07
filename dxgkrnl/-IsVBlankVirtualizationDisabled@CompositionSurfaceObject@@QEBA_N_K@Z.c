char __fastcall CompositionSurfaceObject::IsVBlankVirtualizationDisabled(CompositionSurfaceObject *this, __int64 a2)
{
  char v4; // bl
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    v6 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 40), a2, &v6) >= 0 )
      v4 = *((_BYTE *)v6 + 41);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return v4;
}
