/*
 * XREFs of ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180214B60
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CAE80 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionForce::CExpressionForce(__int64 a1, float a2, float a3, __int64 a4, int a5)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &CExpressionForce::`vftable'{for `IAccelerator'};
  *(_QWORD *)(a1 + 8) = &CExpressionForce::`vftable'{for `IScalarForce'};
  *(_QWORD *)(a1 + 16) = &CExpressionForce::`vftable'{for `CMILRefCountBase'};
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 104) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_DWORD *)(a1 + 112) = a5;
  result = a1;
  *(float *)(a1 + 140) = a2;
  *(float *)(a1 + 144) = a3;
  *(_BYTE *)(a1 + 136) = 0;
  return result;
}
