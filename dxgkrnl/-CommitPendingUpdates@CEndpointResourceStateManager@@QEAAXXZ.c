void __fastcall CEndpointResourceStateManager::CommitPendingUpdates(CEndpointResourceStateManager *this)
{
  char *v1; // rsi
  char *v3; // rcx
  char *v4; // rbx
  void (__fastcall ***v5)(_QWORD); // rcx
  CEndpointResourceStateManager **v6; // rcx
  CEndpointResourceStateManager *v7; // rbx
  void (__fastcall ***v8)(_QWORD); // rcx

  v1 = (char *)this + 16;
  v3 = (char *)*((_QWORD *)this + 2);
  if ( v3 != v1 )
  {
    do
    {
      v4 = *(char **)v3;
      v5 = (void (__fastcall ***)(_QWORD))((unsigned __int64)(v3 - 8) & -(__int64)(v3 != 0LL));
      (**v5)(v5);
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
      v8 = (void (__fastcall ***)(_QWORD))((unsigned __int64)(v6 - 1) & -(__int64)(v6 != 0LL));
      (**v8)(v8);
      v6 = (CEndpointResourceStateManager **)v7;
    }
    while ( v7 != this );
  }
}
