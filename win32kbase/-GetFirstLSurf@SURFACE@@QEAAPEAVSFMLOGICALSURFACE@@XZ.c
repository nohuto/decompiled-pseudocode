struct SFMLOGICALSURFACE *__fastcall SURFACE::GetFirstLSurf(SURFACE *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax

  v1 = (char *)this + 624;
  if ( this != (SURFACE *)-624LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v1, 0LL);
  }
  v3 = (_QWORD *)((char *)this + 232);
  v4 = 0LL;
  v5 = (_QWORD *)*v3;
  if ( *v3 && v5 != v3 )
    v4 = v5 - 6;
  if ( v1 )
  {
    ExReleasePushLockSharedEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
  return (struct SFMLOGICALSURFACE *)v4;
}
