/*
 * XREFs of GrepSfmRemoveSurfaces @ 0x1C01333C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0016DB8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00BDE38 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C00BE60C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00BEA74 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0169E84 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

struct SfmState *GrepSfmRemoveSurfaces()
{
  struct SfmState *result; // rax
  char *v1; // rcx
  char *v2; // rsi
  SFMLOGICALSURFACE *v3; // rdi
  HLSURF v4; // rbx
  int v5; // eax
  HLSURF *v6; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+48h] [rbp-10h]

  result = gpSfmState;
  v1 = (char *)gpSfmState + 40;
  v2 = (char *)*((_QWORD *)gpSfmState + 5);
  while ( v2 != v1 )
  {
    v3 = (SFMLOGICALSURFACE *)(v2 - 32);
    v2 = *(char **)v2;
    v4 = *(HLSURF *)v3;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v7);
    v8 = 0LL;
    v9 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v7, v4);
    if ( v8 )
    {
      v5 = *((_DWORD *)v3 + 61);
      if ( (v5 & 0x10) != 0 )
        *((_DWORD *)v3 + 61) = v5 & 0xFFFFFFEF;
      else
        *((_DWORD *)v3 + 62) = 0;
      SFMLOGICALSURFACE::StopSfmStateTracking(v3, 0LL, gpSfmState);
      v6 = (HLSURF *)v8;
      if ( v8 )
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      v8 = 0LL;
      bhLSurfDestroyLogicalSurfaceObject(v6, 1, 0);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v7);
    result = gpSfmState;
    v1 = (char *)gpSfmState + 40;
  }
  return result;
}
