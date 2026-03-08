/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C001A8E0
 * Callers:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001A878 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C001A8B0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001AD78 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001ADA0 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C017F984 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 62);
  return v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0;
}
