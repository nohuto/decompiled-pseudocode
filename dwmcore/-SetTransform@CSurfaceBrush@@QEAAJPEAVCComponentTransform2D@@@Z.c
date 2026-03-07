__int64 __fastcall CSurfaceBrush::SetTransform(struct CResource **this, struct CComponentTransform2D *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct CResource *v7; // rcx

  v2 = 0;
  if ( a2 != this[15] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x101u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
      v7 = *this;
      this[15] = a2;
      (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v7 + 9))(this, 0LL, this);
    }
  }
  return v2;
}
