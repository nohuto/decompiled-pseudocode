/*
 * XREFs of ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0062E78
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0062EA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
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
