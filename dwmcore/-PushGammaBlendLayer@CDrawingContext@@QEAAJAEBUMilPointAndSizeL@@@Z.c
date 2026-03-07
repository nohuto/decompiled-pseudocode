__int64 __fastcall CDrawingContext::PushGammaBlendLayer(struct IDeviceTarget **this, const struct MilPointAndSizeL *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct CLayer *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  struct CLayer *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = CGammaBlendLayer::Create(this[4], a2, &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xF3Bu, 0LL);
    v6 = v10;
  }
  else
  {
    v6 = v10;
    v7 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v10, 1, 0);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xF41u, 0LL);
    else
      v6 = 0LL;
  }
  if ( v6 )
    COffScreenRenderingLayer::`vector deleting destructor'(v6, 1);
  return v5;
}
