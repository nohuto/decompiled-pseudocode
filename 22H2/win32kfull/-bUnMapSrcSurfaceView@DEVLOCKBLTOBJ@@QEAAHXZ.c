/*
 * XREFs of ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FE7A0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00B8014 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0273140 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v3; // r8d
  SURFACE *v4; // rcx
  unsigned int v5; // eax

  v1 = *((_QWORD *)this + 22);
  v3 = 1;
  if ( v1 && *((_BYTE *)this + 225) && (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 44) & 1) == 0 )
    {
      v4 = *(SURFACE **)(v1 + 496);
      if ( v4 )
      {
        v5 = SURFACE::bUnMap(v4, this, 0LL);
        v1 = *((_QWORD *)this + 22);
        v3 = v5;
      }
    }
    *(_DWORD *)(v1 + 44) &= ~1u;
  }
  return v3;
}
