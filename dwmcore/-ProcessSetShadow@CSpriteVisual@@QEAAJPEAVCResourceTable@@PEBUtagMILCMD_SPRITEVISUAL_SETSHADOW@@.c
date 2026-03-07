__int64 __fastcall CSpriteVisual::ProcessSetShadow(
        CSpriteVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVISUAL_SETSHADOW *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  CDropShadow *DropShadow; // rax
  int v10; // eax
  __int64 v11; // rcx
  struct CResource *v12; // rax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x37u)) != 0LL )
  {
    if ( Resource != CSpriteVisual::GetDropShadow(this) )
    {
      CVisual::ClearContentTreeDataCaches(this);
      if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
      {
        DropShadow = CSpriteVisual::GetDropShadow(this);
        CDropShadow::RemoveVisualFromCache(DropShadow, this);
      }
      v10 = CResource::RegisterNotifier(this, Resource);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x63u, 0LL);
      }
      else
      {
        if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
        {
          v12 = CSpriteVisual::GetDropShadow(this);
          CResource::UnRegisterNotifierInternal(this, v12);
        }
        CSpriteVisual::SetDropShadow(this, Resource);
        CVisual::PropagateFlags((__int64)this, 5u);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x53u, 0LL);
  }
  return v4;
}
