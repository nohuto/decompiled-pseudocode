__int64 __fastcall CDrawingContext::GetTransparentBlackEffectInput(
        CDrawingContext *a1,
        __int64 a2,
        const struct D2D_SIZE_F *a3)
{
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 48) = 0LL;
  EffectInput::Reset((struct EffectInput *)a2);
  CDrawingContext::SetEffectInputToTransparentBlack(a1, a3, (struct EffectInput *)a2);
  return a2;
}
