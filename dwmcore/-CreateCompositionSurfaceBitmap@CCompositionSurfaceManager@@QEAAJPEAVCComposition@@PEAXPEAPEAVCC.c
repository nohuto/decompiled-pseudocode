__int64 __fastcall CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
        CCompositionSurfaceManager *this,
        struct CComposition *a2,
        void *a3,
        struct CCompositionSurfaceBitmap **a4)
{
  int v6; // eax
  __int64 v7; // rcx
  struct CCompositionSurfaceInfo *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct CCompositionSurfaceInfo *v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = 0LL;
  v6 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(this, a3, &v13);
  v8 = v13;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1Cu, 0LL);
  }
  else
  {
    v10 = CCompositionSurfaceBitmap::Create(a2, v13, a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20u, 0LL);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
