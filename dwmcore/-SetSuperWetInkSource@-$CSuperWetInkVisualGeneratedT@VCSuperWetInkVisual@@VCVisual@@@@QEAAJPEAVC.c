__int64 __fastcall CSuperWetInkVisualGeneratedT<CSuperWetInkVisual,CVisual>::SetSuperWetInkSource(
        struct CResource **this,
        struct CContent *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[88] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x273Cu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[88]);
      this[88] = a2;
      CVisual::SetContent(this, a2);
    }
  }
  return v2;
}
