__int64 __fastcall CD2DGenericInk::Create(
        struct CD2DResourceManager *a1,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        CD2DResourceManager ***a3)
{
  CD2DGenericInk *v6; // rax
  __int64 v7; // rcx
  CD2DGenericInk *v8; // rax
  CD2DResourceManager **v9; // rbx
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CD2DGenericInk *)operator new(0x80uLL);
  if ( v6 && (v8 = CD2DGenericInk::CD2DGenericInk(v6, a1, a2), (v9 = (CD2DResourceManager **)v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CD2DGenericInk *)((char *)v8 + 8));
    CD2DResourceManager::AddResource(v9[3], (struct CD2DResource *)v9);
    v10 = 0;
    *a3 = v9;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v10;
}
