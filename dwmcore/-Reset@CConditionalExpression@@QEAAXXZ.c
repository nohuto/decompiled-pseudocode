/*
 * XREFs of ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1802250C0
 * Callers:
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x180223FEC (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180224F4C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  *((_DWORD *)this + 95) = *((_DWORD *)this + 85);
  v1 = (_QWORD *)*((_QWORD *)this + 44);
  for ( i = (_QWORD *)*((_QWORD *)this + 43); i != v1; i += 2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 208LL))(*i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)i[1] + 208LL))(i[1]);
  }
}
