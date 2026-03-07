bool __fastcall CompositionSurfaceObject::GetEarlyTokenSync(CompositionSurfaceObject *this, unsigned __int64 a2)
{
  bool v4; // bl
  _DWORD v6[36]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    memset(v6, 0, sizeof(v6));
    if ( (int)CCompositionSurface::GetBufferAttributes(
                (CompositionSurfaceObject *)((char *)this + 40),
                a2,
                (struct CSM_BUFFER_ATTRIBUTES *)v6) >= 0 )
      v4 = (v6[34] & 0x200) != 0;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return v4;
}
