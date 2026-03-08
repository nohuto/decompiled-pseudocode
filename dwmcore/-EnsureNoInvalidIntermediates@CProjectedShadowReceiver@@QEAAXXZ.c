/*
 * XREFs of ?EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ @ 0x18024817C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180247EC4 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180004C28 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowReceiver::EnsureNoInvalidIntermediates(CProjectedShadowReceiver *this)
{
  __int64 v2; // rcx
  int (__fastcall ***v3)(_QWORD); // rcx

  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    v3 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v2 + 8) + 8LL) + v2 + 8);
    if ( (**v3)(v3) < 0 )
      CProjectedShadowReceiver::InvalidateMaskContent(this);
  }
}
