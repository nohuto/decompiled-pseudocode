/*
 * XREFs of ?Unhide@CVisual@@QEAAXXZ @ 0x1800414C8
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FD0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800A5C90 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::Unhide(CVisual *this)
{
  if ( (*((_DWORD *)this + 22))-- == 1 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 256LL);
}
