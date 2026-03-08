/*
 * XREFs of ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x180272844
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18026B5D4 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CScalarForce::Initialize(__int64 a1, int a2, float a3, float a4, int a5)
{
  float v6; // xmm6_4
  struct IAccelerator *v8; // r9
  __int64 v9; // [rsp+30h] [rbp-38h]

  v6 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 40LL))(*(_QWORD *)(a1 + 104)) )
    a3 = a3 - (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
  v8 = *(struct IAccelerator **)(a1 + 104);
  HIDWORD(v9) = LODWORD(a3) & _xmm;
  LODWORD(v9) = a2;
  *(_QWORD *)(a1 + 84) = v9;
  *(_DWORD *)(a1 + 96) = a5;
  *(_DWORD *)(a1 + 92) = LODWORD(a4) & _xmm;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 16), v6, a4, v8, (const struct ForceThreshold *)(a1 + 84));
}
