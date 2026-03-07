__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetViewportAnimation(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v6; // eax
  __int64 v7; // rcx
  struct CResource *v8; // rcx

  v2 = 0;
  if ( a2 != this[21] )
  {
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4BCu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
      v8 = *this;
      this[21] = a2;
      (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v8 + 9))(this, 0LL, 0LL);
    }
  }
  return v2;
}
