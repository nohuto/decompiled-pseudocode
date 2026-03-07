SFMLOGICALSURFACEREF *__fastcall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this, HLSURF *a2)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 1;
  if ( a2 )
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(this, *a2);
  return this;
}
