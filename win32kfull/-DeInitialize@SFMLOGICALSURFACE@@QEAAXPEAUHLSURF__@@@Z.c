void __fastcall SFMLOGICALSURFACE::DeInitialize(SFMLOGICALSURFACE *this, HLSURF a2)
{
  Gre::Base *v4; // rcx
  HLSURF v5; // rdx
  int v6; // r8d
  HDEV *v7; // rbx
  struct SURFACE *v8; // rsi

  SfmTokenArray::DeInitialize((SFMLOGICALSURFACE *)((char *)this + 216));
  v7 = (HDEV *)((char *)this + 24);
  if ( *((_DWORD *)Gre::Base::Globals(v4) + 798) )
    *v7 = 0LL;
  *(_QWORD *)this = a2;
  v8 = SFMLOGICALSURFACE::OwnsSurfaceCleanup(this, v5, v6);
  if ( v8 )
  {
    SFMLOGICALSURFACE::SetShape(this, *v7, 0LL);
    SFMLOGICALSURFACE::CleanupShape(this, v8);
  }
  if ( *v7 )
  {
    SpNotifyLSurface(*v7, a2, 0, 0, 0LL);
    *v7 = 0LL;
  }
  SFMLOGICALSURFACE::CleanupRegions(this);
}
