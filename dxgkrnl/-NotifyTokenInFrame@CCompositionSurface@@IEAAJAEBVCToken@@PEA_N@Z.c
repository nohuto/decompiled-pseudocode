__int64 __fastcall CCompositionSurface::NotifyTokenInFrame(
        CCompositionSurface *this,
        const struct CToken *a2,
        bool *a3)
{
  int Buffer; // ebx
  __int64 v6; // r11
  struct CCompositionBuffer *v7; // r14
  struct CCompositionBuffer *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  *a3 = 0;
  Buffer = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 5), &v9);
  if ( Buffer >= 0 )
  {
    v7 = v9;
    Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, bool *))(*(_QWORD *)v9 + 128LL))(
               v9,
               v6,
               a3);
    if ( Buffer >= 0 && *a3 )
      CCompositionSurface::ReleaseOlderInactiveBuffers(this, v7);
  }
  return (unsigned int)Buffer;
}
