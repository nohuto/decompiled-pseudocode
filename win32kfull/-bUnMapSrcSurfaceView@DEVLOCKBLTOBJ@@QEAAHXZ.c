/*
 * XREFs of ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D50B8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00DEA84 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E7B0 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  SURFACE *v4; // rcx

  v2 = 1;
  v3 = *((_QWORD *)this + 18);
  if ( v3 && *((_BYTE *)this + 161) && (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
    {
      v4 = *(SURFACE **)(v3 + 496);
      if ( v4 )
        v2 = SURFACE::bUnMap(v4, this, 0LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 18) + 44LL) &= ~1u;
  }
  return v2;
}
