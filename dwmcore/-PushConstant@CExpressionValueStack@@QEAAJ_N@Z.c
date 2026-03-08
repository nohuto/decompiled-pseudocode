/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x18025DA68
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800C058C (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, char a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx

  v4 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v5,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v4,
      0x1BAu,
      0LL);
  }
  else
  {
    v7 = *((unsigned int *)this + 4);
    *((_DWORD *)this + 4) = v7 + 1;
    v8 = *((_QWORD *)this + 3) + 80 * v7;
    *(_DWORD *)(v8 + 72) = 17;
    *(_BYTE *)v8 = a2;
    *(_BYTE *)(v8 + 76) = 1;
  }
  return v6;
}
