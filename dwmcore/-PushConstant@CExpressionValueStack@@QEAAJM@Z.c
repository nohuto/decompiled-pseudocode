/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x18025D9E0
 * Callers:
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18023A3A4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180261720 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800C058C (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r8

  v3 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v4,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v3,
      0x1CBu,
      0LL);
  }
  else
  {
    v6 = *((unsigned int *)this + 4);
    *((_DWORD *)this + 4) = v6 + 1;
    v7 = *((_QWORD *)this + 3) + 80 * v6;
    *(float *)v7 = a2;
    *(_DWORD *)(v7 + 72) = 18;
    *(_BYTE *)(v7 + 76) = 1;
  }
  return v5;
}
