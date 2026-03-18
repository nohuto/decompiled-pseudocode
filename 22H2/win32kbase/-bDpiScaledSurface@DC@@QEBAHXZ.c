/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C005FDE0
 * Callers:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0038B60 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0038B88 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C005FD78 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C005FDB0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0152204 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 62);
  return v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0;
}
