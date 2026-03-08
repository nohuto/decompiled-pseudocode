/*
 * XREFs of ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180224B14
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180224590 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180224F4C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18022448C (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::IsAnyConditionSatisfied(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // bl
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // ecx
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // rcx
  bool v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = *((_DWORD *)this + 95);
  v10 = 0;
  v11 = *((_DWORD *)this + 85);
  if ( v9 != v11 )
    goto LABEL_10;
  v12 = 0;
  if ( !((__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4) )
  {
LABEL_8:
    v9 = *((_DWORD *)this + 95);
    v11 = *((_DWORD *)this + 85);
    if ( v9 == v11 )
    {
      v9 = *((_DWORD *)this + 84);
      *((_DWORD *)this + 95) = v9;
    }
LABEL_10:
    if ( a4 )
    {
      if ( v9 != *((_DWORD *)this + 84) && v9 != v11 || *((_QWORD *)this + 46) )
        v4 = 1;
      *a4 = v4;
    }
    return v10;
  }
  while ( 1 )
  {
    v13 = CConditionalExpression::CalculateConditionValue(this, v12, a2, a3, &v16);
    v10 = v13;
    if ( v13 < 0 )
      break;
    if ( v16 )
    {
      *((_DWORD *)this + 95) = v12;
      goto LABEL_8;
    }
    if ( ++v12 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4) )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x21Au, 0LL);
  return v10;
}
