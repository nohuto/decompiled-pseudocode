__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  char v2; // di
  unsigned int v5; // ebp
  struct CResource *v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  struct CResource *v9; // rcx

  v2 = 0;
  v5 = 0;
  if ( a2 != this[32] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v6 = this[32];
    if ( v6 && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 56LL))(v6, 182LL) )
      CSuperWetInkManager::UnregisterSuperWetInkVisual(
        *((CSuperWetInkManager **)g_pComposition + 32),
        (struct CVisual *)this);
    v7 = CResource::RegisterNotifier((CResource *)this, a2);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x20Du, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[32]);
      this[32] = a2;
      if ( a2 && (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 182LL) )
        CSuperWetInkManager::RegisterSuperWetInkVisual(
          *((CSuperWetInkManager **)g_pComposition + 32),
          (struct CVisual *)this);
      v9 = this[32];
      if ( v9 )
        v2 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v9 + 240LL))(v9);
      *((_BYTE *)this + 102) ^= (*((_BYTE *)this + 102) ^ (32 * v2)) & 0x20;
      CVisual::UpdateBackdropBlurFlag((CVisual *)this);
      CVisual::PropagateFlags(this, 21LL);
    }
  }
  return v5;
}
