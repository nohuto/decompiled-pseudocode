__int64 __fastcall CVisual::ProcessSetColorTransform(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rdi
  __int64 v8; // rcx
  struct CResource *ColorTransform; // rbp
  int v10; // eax
  __int64 v11; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x1Au)) != 0LL )
  {
    ColorTransform = CVisual::GetColorTransform(this);
    if ( Resource != ColorTransform )
    {
      v10 = CResource::RegisterNotifier(this, Resource);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC82u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, ColorTransform);
        CVisual::SetColorTransform(this, Resource);
        CVisual::PropagateFlags((__int64)this, 4u);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xC7Au, 0LL);
  }
  return v4;
}
