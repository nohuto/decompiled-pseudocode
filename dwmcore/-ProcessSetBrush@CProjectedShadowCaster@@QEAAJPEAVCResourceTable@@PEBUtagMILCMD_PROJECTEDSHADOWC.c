__int64 __fastcall CProjectedShadowCaster::ProcessSetBrush(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH *a3)
{
  struct CResource *Resource; // rsi
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x16u)) != 0LL )
  {
    if ( Resource == this[15] )
    {
      return 0;
    }
    else
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD5u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v8, 0x2Bu, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
        this[15] = Resource;
        CProjectedShadowCaster::RequestRedraw((CProjectedShadowCaster *)this);
      }
    }
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x27u, 0LL);
  }
  return v8;
}
