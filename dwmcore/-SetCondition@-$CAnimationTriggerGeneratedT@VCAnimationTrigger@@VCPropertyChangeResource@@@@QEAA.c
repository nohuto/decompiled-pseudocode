__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetCondition(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  struct CResource *v7; // rcx

  v2 = 0;
  if ( a2 != this[12] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xEE0u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
      v7 = *this;
      this[12] = a2;
      (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v7 + 9))(this, 0LL, 0LL);
    }
  }
  return v2;
}
