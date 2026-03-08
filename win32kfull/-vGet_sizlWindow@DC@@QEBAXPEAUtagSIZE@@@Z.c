/*
 * XREFs of ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0305468
 * Callers:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004DAE8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008C7B8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vGet_sizlWindow(DC *this, struct tagSIZE *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    v4 = *(_QWORD *)(v3 + 532);
  else
    v4 = *(_QWORD *)(v3 + 512);
  *v2 = v4;
}
