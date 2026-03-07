__int64 __fastcall CVectorShape::SetTransform(CVectorShape *this, struct CComponentTransform2D *a2)
{
  unsigned int v3; // ebx
  struct CResource *v4; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 9);
  if ( a2 != v4 )
  {
    if ( a2 )
    {
      v6 = CResource::RegisterNotifier(this, a2);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Du, 0LL);
        return v3;
      }
      v4 = (struct CResource *)*((_QWORD *)this + 9);
    }
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 9) = a2;
    (*(void (__fastcall **)(CVectorShape *, __int64))(*(_QWORD *)this + 72LL))(this, 2LL);
  }
  return v3;
}
