/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C012E560
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0016DB8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C00BE60C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACEREF_vDestructorWrap(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  HLSURF *v4; // r9
  int v5; // eax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
    if ( *(_DWORD *)(a1 + 40) == 1 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      v4 = (HLSURF *)v3;
      v5 = *(_DWORD *)(v3 + 244);
      if ( (v5 & 0x80u) != 0 && (v5 & 8) != 0 && (v5 & 0x10) != 0 )
      {
        *(_DWORD *)(v3 + 244) = v5 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)(a1 + 32), 0LL, gpSfmState);
        v4 = *(HLSURF **)(a1 + 32);
      }
      return bhLSurfDestroyLogicalSurfaceObject(v4, 1, 0);
    }
  }
  return result;
}
