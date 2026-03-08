/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x1C0269D30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002968C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C002A404 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002D794 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026821C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall CheckAndProcessSurfaceComplete(HLSURF a1)
{
  HSPRITE v1; // rdx
  volatile signed __int32 *v2; // rbx
  SFMLOGICALSURFACE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  struct DWMSPRITE *v5; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v3, a1);
  if ( v3 )
  {
    v1 = (HSPRITE)*((_QWORD *)v3 + 37);
    v5 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v5, v1);
    v2 = (volatile signed __int32 *)v5;
    if ( v5 )
    {
      if ( *((_DWORD *)v5 + 29) == 3 )
        *((_DWORD *)v5 + 29) = 1;
      CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v2, 0, 0LL);
      if ( v2 )
        _InterlockedDecrement(v2 + 3);
    }
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(&v3);
}
