__int64 __fastcall CSurfaceBrush::ProcessSetSurface(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSURFACE *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // r9
  __int64 i; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  float v11[4]; // [rsp+30h] [rbp-28h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  for ( i = 0LL; i < 4; ++i )
    v11[i] = (float)*(int *)(v5 + 4 * i + 12);
  v7 = CSurfaceBrush::SetSurface(this, ResourceWithoutType);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x90u, 0LL);
  else
    CSurfaceBrush::SetSurfaceContentRect(this, v11);
  return v9;
}
