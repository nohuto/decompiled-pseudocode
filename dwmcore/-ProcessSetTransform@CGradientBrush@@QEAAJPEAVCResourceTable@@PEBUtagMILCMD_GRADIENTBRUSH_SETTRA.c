__int64 __fastcall CGradientBrush::ProcessSetTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CResource *v11; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x1Du)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xB4u, 0LL);
  }
  else if ( Resource != this[27] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xBAu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[27]);
      v11 = *this;
      this[27] = Resource;
      (*((void (__fastcall **)(struct CResource **, __int64, struct CResource **))v11 + 9))(this, 6LL, this);
    }
  }
  return v4;
}
