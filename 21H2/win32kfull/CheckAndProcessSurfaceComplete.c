/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x1C026CC10
 * Callers:
 *     <none>
 * Callees:
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0020C74 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0022038 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002297C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B550 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall CheckAndProcessSurfaceComplete(HLSURF a1)
{
  HSPRITE v2; // rbx
  struct DWMSPRITE *v3; // rcx
  _OWORD v4[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DWMSPRITE *v5; // [rsp+40h] [rbp-40h]
  _OWORD v6[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+70h] [rbp-10h]

  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v6);
  v7 = 0LL;
  v8 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v6, a1);
  if ( v7 )
  {
    v2 = *(HSPRITE *)(v7 + 296);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v4);
    v5 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v4, v2);
    v3 = v5;
    if ( v5 )
    {
      if ( *((_DWORD *)v5 + 29) == 3 )
        *((_DWORD *)v5 + 29) = 1;
      CheckAndProcessWindowResizeComplete(v3, 0, 0LL);
      if ( v5 )
        _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
    }
    v5 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v4);
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v6);
}
