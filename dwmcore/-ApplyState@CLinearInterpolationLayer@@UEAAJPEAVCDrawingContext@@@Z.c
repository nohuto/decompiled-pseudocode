__int64 __fastcall CLinearInterpolationLayer::ApplyState(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _DWORD v9[14]; // [rsp+30h] [rbp-38h] BYREF

  v3 = CExternalLayer::ApplyState(this, a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x3Cu, 0LL);
  }
  else
  {
    v9[0] = 3;
    v9[1] = -16777215;
    v9[4] = 1;
    v6 = CDrawingContext::PushRenderOptionsInternal((__int64)a2, 0LL, (const struct MilRenderOptions *)v9, 0);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x47u, 0LL);
  }
  return v5;
}
