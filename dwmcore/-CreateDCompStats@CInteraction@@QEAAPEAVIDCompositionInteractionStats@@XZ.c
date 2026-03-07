struct IDCompositionInteractionStats *__fastcall CInteraction::CreateDCompStats(CInteraction *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx

  v1 = (char *)this + 1728;
  v3 = *((_QWORD *)this + 216);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0LL);
    v4 = *(_QWORD *)v1;
    if ( *(_QWORD *)v1 )
    {
      *(_QWORD *)v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 56);
    if ( v6 )
    {
      v7 = *(_QWORD *)v1;
      if ( *(_QWORD *)v1 )
      {
        *(_QWORD *)v1 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      DCompositionCreateInteractionStats(v6, v1);
    }
  }
  return *(struct IDCompositionInteractionStats **)v1;
}
