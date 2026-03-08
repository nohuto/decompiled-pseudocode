/*
 * XREFs of ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0014A78
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00149D0 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax

  v2 = *((_QWORD *)this + 18);
  if ( !v2 )
    return 1LL;
  if ( !*((_BYTE *)this + 161) )
    return 1LL;
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 496);
  if ( !v3 )
    return 1LL;
  v4 = SURFACE::Map(v3, this);
  if ( v4 != 2 )
  {
    if ( v4 == 1 )
      *((_DWORD *)this + 28) |= 0x80u;
    return 1LL;
  }
  return 0LL;
}
