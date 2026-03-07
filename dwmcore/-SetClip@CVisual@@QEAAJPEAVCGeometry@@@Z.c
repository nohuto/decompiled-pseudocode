__int64 __fastcall CVisual::SetClip(struct CResource **this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  char v5; // bp
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( a2 != this[31] )
  {
    v5 = 0;
    if ( a2 )
      v5 = (*(__int64 (__fastcall **)(struct CGeometry *))(*(_QWORD *)a2 + 200LL))(a2);
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA94u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      this[31] = a2;
      if ( !v5 )
      {
        CVisual::PropagateFlags((__int64)this, 5u);
        CVisual::OnTransformChanged((CVisual *)this);
        CVisual::OnClipChanged((CVisual *)this);
      }
    }
  }
  return v3;
}
