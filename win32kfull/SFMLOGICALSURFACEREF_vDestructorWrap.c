/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C026B310
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C001EDD8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C002D6F0 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 */

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
