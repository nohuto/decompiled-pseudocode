__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  __int64 v7; // rcx
  struct CResource *Resource; // rsi
  struct CResource **v9; // rax
  struct CResource **v10; // rdi
  struct CResource *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
  {
    if ( !*((_QWORD *)this + 89) )
      return v4;
    CLayerVisual::ClearTreeEffect(this);
    goto LABEL_12;
  }
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x39u);
  if ( !Resource )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x31u, 0LL);
    return v4;
  }
  v9 = (struct CResource **)*((_QWORD *)this + 89);
  if ( !v9 )
  {
    v9 = (struct CResource **)DefaultHeap::AllocClear(0x10uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v9[1] = 0LL;
    *v9 = 0LL;
    *((_QWORD *)this + 89) = v9;
  }
  if ( *v9 != Resource )
  {
    CResource::UnRegisterNotifierInternal(this, *v9);
    v10 = (struct CResource **)*((_QWORD *)this + 89);
    if ( *v10 != Resource )
    {
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
      v11 = *v10;
      *v10 = Resource;
      if ( v11 )
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = CResource::RegisterNotifier(this, Resource);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3Fu, 0LL);
      return v4;
    }
    CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(this);
LABEL_12:
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return v4;
}
