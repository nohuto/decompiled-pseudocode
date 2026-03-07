__int64 __fastcall COcclusionContext::GetDestinationRect(__int64 a1, __int64 a2)
{
  CMILMatrix *TopByReference; // rax
  struct MilRectF *v5; // r9
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v7 = 0LL;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 32));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, v5);
  CBaseClipStack::Clip(a1 + 144, a2, &v7);
  return a2;
}
