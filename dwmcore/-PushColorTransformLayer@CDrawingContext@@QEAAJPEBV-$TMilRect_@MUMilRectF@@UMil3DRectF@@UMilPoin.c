__int64 __fastcall CDrawingContext::PushColorTransformLayer(
        struct IDeviceTarget **this,
        __int64 a2,
        struct CColorTransformResource *a3)
{
  CColorSpaceLayer *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct CLayer *v14; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v16);
  v6 = AlignRectFToPointAndSizeL(&v16, v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xE5Eu, 0LL);
  }
  else
  {
    v9 = CColorTransformLayer::Create(this[4], (const struct MilPointAndSizeL *)v15, a3, &v14);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xE63u, 0LL);
      v3 = v14;
    }
    else
    {
      v3 = v14;
      v11 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v14, 1, 1);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xE69u, 0LL);
      else
        v3 = 0LL;
    }
  }
  if ( v3 )
    CColorSpaceLayer::`vector deleting destructor'(v3, 1);
  return v8;
}
