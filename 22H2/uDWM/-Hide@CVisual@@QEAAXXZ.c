/*
 * XREFs of ?Hide@CVisual@@QEAAXXZ @ 0x180040C20
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FD0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800A5C90 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800A7240 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::Hide(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 22);
  if ( !v1 )
  {
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 256LL);
    v1 = *((_DWORD *)this + 22);
  }
  *((_DWORD *)this + 22) = v1 + 1;
}
