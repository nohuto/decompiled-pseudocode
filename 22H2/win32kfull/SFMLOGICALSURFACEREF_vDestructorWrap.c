/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C02689F0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0079E0C (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00D5374 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACEREF_vDestructorWrap(__int64 a1)
{
  __int64 result; // rax
  Gre::Base *v3; // rcx
  int v4; // eax
  struct Gre::Base::SESSION_GLOBALS *v5; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
    if ( *(_DWORD *)(a1 + 40) == 1 )
    {
      v3 = *(Gre::Base **)(a1 + 32);
      v4 = *((_DWORD *)v3 + 61);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v4 & 0xFFFFFFEF;
        v5 = Gre::Base::Globals(v3);
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)(a1 + 32), 0LL, *((struct SfmState **)v5 + 809));
      }
      return bhLSurfDestroyLogicalSurfaceObject(*(HLSURF **)(a1 + 32), 1);
    }
  }
  return result;
}
