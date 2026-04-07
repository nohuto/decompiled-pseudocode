/*
 * XREFs of ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180011170
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180010CBC (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::OnTick(CAnimationEngine::CTransitionVisualSet *this)
{
  double v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 4) + 152LL))(*((_QWORD *)this + 4), &v2) >= 0 )
    *((double *)this + 7) = v2 + *((double *)this + 7);
}
