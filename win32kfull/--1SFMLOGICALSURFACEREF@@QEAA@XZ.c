void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACE **this)
{
  SFMLOGICALSURFACE *v2; // rcx
  int v3; // eax
  struct Gre::Base::SESSION_GLOBALS *v4; // rax

  if ( *this )
  {
    _InterlockedDecrement((volatile signed __int32 *)*this + 3);
    if ( *((_DWORD *)this + 2) == 1 )
    {
      v2 = *this;
      v3 = *((_DWORD *)v2 + 61);
      if ( (v3 & 0x80u) != 0 && (v3 & 8) != 0 && (v3 & 0x10) != 0 )
      {
        *((_DWORD *)v2 + 61) = v3 & 0xFFFFFFEF;
        v4 = Gre::Base::Globals(v2);
        SFMLOGICALSURFACE::StopSfmStateTracking(*this, 0LL, *((struct SfmState **)v4 + 809));
      }
      bhLSurfDestroyLogicalSurfaceObject(*this, 1);
    }
  }
}
