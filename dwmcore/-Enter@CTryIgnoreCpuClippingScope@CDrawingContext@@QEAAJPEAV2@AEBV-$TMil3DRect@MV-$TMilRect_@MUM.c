__int64 __fastcall CDrawingContext::CTryIgnoreCpuClippingScope::Enter(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const struct CMILMatrix *TopByReference)
{
  CMatrixStack *v5; // rsi
  int v6; // ebx
  __int64 v7; // r9
  const struct CMILMatrix *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF

  v5 = (CMatrixStack *)(a2 + 400);
  v6 = 0;
  v7 = a3;
  if ( !TopByReference )
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a2 + 400));
  if ( (unsigned __int8)CDrawingContext::DoesCpuClipFullyContainRect(a2, v7, TopByReference) )
  {
    v17 = 0LL;
    v11 = CMatrixStack::GetTopByReference(v5);
    LOBYTE(v12) = 1;
    LOBYTE(v13) = 1;
    v14 = CDrawingContext::PushClippingScope(a2, 0LL, v13, v12, v11, &v17);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1A37u, 0LL);
    }
    else
    {
      v6 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, (__int64)&v17, D2D1_ANTIALIAS_MODE_PER_PRIMITIVE, 1);
      if ( v6 >= 0 )
      {
        *a1 = a2;
      }
      else
      {
        CDrawingContext::PopClippingScope((CDrawingContext *)a2, 0);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v6, 0x1A44u, 0LL);
      }
    }
  }
  return (unsigned int)v6;
}
