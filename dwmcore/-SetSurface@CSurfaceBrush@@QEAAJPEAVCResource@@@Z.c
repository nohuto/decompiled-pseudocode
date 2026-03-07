__int64 __fastcall CSurfaceBrush::SetSurface(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // ebx
  unsigned int v6; // ecx
  struct CSurfaceBrush::CSurfaceRenderStrategy *CommonRenderStrategy; // rbp
  int v8; // eax
  unsigned int v9; // ecx
  struct CResource *v10; // rax

  v2 = 0;
  if ( a2 != this[13] )
  {
    CommonRenderStrategy = CSurfaceBrush::FindCommonRenderStrategy(a2);
    if ( CommonRenderStrategy )
    {
      if ( a2 && (v8 = CResource::RegisterNotifier((CResource *)this, a2), v2 = v8, v8 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x255u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
        v10 = *this;
        this[13] = a2;
        this[14] = CommonRenderStrategy;
        (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v10 + 9))(this, 0LL, this);
      }
    }
    else
    {
      v2 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x250u, 0LL);
    }
  }
  return v2;
}
