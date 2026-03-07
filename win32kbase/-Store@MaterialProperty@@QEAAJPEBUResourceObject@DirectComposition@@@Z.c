__int64 __fastcall MaterialProperty::Store(MaterialProperty *this, const struct DirectComposition::ResourceObject *a2)
{
  NTSTATUS v3; // esi
  void *v4; // rcx

  v3 = 0;
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
  {
    v3 = ObReferenceObjectByPointer(a2, 3u, ExCompositionObjectType, 0);
    if ( v3 < 0 )
      *((_QWORD *)this + 2) = 0LL;
  }
  return (unsigned int)v3;
}
