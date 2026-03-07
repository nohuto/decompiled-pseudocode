__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSKYBOXBRUSH_SETSOURCE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CResource *v11; // rdx
  struct CResource *v12; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x21u)) != 0LL )
  {
    if ( Resource != this[11] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1EFu, 0LL);
      }
      else
      {
        v11 = this[11];
        if ( v11 )
          CResource::UnRegisterNotifierInternal((CResource *)this, v11);
        v12 = *this;
        this[11] = Resource;
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v12 + 9))(this, 0LL, 0LL);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x1E9u, 0LL);
  }
  return v4;
}
