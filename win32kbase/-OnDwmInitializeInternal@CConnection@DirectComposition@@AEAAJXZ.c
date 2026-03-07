__int64 __fastcall DirectComposition::CConnection::OnDwmInitializeInternal(DirectComposition::CConnection *this)
{
  DirectComposition::CPushLockCriticalSection *v1; // rdi
  unsigned int v3; // ebx
  DirectComposition::CConnection *v4; // rcx
  const struct DirectComposition::ResourceObject *v5; // rdx

  v1 = (DirectComposition::CConnection *)((char *)this + 304);
  v3 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 304, 0LL);
  *((_BYTE *)v1 + 8) = 1;
  v5 = (const struct DirectComposition::ResourceObject *)*((_QWORD *)this + 35);
  if ( v5 )
    v3 = DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(v4, v5, (const struct tagRECT *)this + 18);
  DirectComposition::CPushLockCriticalSection::Release(v1);
  return v3;
}
