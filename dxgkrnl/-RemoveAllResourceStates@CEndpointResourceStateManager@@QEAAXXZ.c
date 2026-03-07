void __fastcall CEndpointResourceStateManager::RemoveAllResourceStates(CEndpointResourceStateManager *this)
{
  char *v1; // rsi
  char *v3; // rcx
  char *v4; // rbx
  __int64 v5; // rcx
  CEndpointResourceStateManager **v6; // rcx
  CEndpointResourceStateManager *v7; // rbx

  v1 = (char *)this + 16;
  v3 = (char *)*((_QWORD *)this + 2);
  if ( v3 != v1 )
  {
    do
    {
      v4 = *(char **)v3;
      v5 = (unsigned __int64)(v3 - 8) & -(__int64)(v3 != 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      v3 = v4;
    }
    while ( v4 != v1 );
  }
  v6 = *(CEndpointResourceStateManager ***)this;
  if ( *(CEndpointResourceStateManager **)this != this )
  {
    do
    {
      v7 = *v6;
      CEndpointResourceStateManager::RemovePoolBufferState(
        this,
        (struct CPoolBufferResourceState *)((unsigned __int64)(v6 - 1) & -(__int64)(v6 != 0LL)));
      v6 = (CEndpointResourceStateManager **)v7;
    }
    while ( v7 != this );
  }
}
