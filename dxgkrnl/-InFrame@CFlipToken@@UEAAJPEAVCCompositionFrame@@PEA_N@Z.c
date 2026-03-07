__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v6; // edx
  int CanReleaseToFrame; // edi
  int v8; // eax
  bool v10; // [rsp+30h] [rbp+8h] BYREF

  if ( CompositionSurfaceObject::IsVBlankVirtualizationDisabled(
         *((CompositionSurfaceObject **)this + 4),
         *((_QWORD *)this + 5)) )
  {
    v6 = *((_DWORD *)a2 + 13);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 12);
  }
  CanReleaseToFrame = CFlipToken::CanReleaseToFrame(this, v6, a3);
  if ( CanReleaseToFrame >= 0 && *a3 )
  {
    v10 = 0;
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged(this);
    CanReleaseToFrame = CompositionSurfaceObject::NotifyTokenInFrame(
                          *((CompositionSurfaceObject **)this + 4),
                          this,
                          &v10);
    if ( CanReleaseToFrame >= 0 )
    {
      *((_BYTE *)this + 88) = v10;
      v8 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 136LL))(this, *((unsigned int *)a2 + 12));
      if ( v8 )
        CompositionSurfaceObject::SetSyncRefreshCount(*((CompositionSurfaceObject **)this + 4), v8);
      CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 0);
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)CanReleaseToFrame;
}
