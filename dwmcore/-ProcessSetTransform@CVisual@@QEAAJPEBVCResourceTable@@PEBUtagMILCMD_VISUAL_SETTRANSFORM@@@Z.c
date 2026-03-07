__int64 __fastcall CVisual::ProcessSetTransform(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORM *a3)
{
  struct CResource *Resource; // rsi
  unsigned int v5; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xBBu)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x99Du, 0LL);
  }
  else if ( Resource == this[30] )
  {
    return 0;
  }
  else
  {
    v8 = CResource::RegisterNotifier((CResource *)this, Resource);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xAB2u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x9A1u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[30]);
      this[30] = Resource;
      CVisual::PropagateFlags((__int64)this, 5u);
      CVisual::OnOuterTransformChanged((CVisual *)this);
    }
  }
  return v10;
}
