SFMLOGICALSURFACE *__fastcall SFMLOGICALSURFACEREF_vDestructorWrap(__int64 a1)
{
  SFMLOGICALSURFACE *result; // rax
  Gre::Base *v3; // rcx
  int v4; // eax
  struct Gre::Base::SESSION_GLOBALS *v5; // rax

  result = *(SFMLOGICALSURFACE **)a1;
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)result + 3);
    if ( *(_DWORD *)(a1 + 8) == 1 )
    {
      v3 = *(Gre::Base **)a1;
      v4 = *((_DWORD *)v3 + 61);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v4 & 0xFFFFFFEF;
        v5 = Gre::Base::Globals(v3);
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)a1, 0LL, *((struct SfmState **)v5 + 809));
      }
      return (SFMLOGICALSURFACE *)bhLSurfDestroyLogicalSurfaceObject(*(HLSURF **)a1, 1);
    }
  }
  return result;
}
