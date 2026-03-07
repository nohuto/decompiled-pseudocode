void __fastcall CEndpointResourceStateManager::DestroyAllResourceStates(CEndpointResourceStateManager *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rcx

  while ( *(CEndpointResourceStateManager **)this != this )
  {
    v2 = (*(_QWORD *)this - 8LL) & -(__int64)(*(_QWORD *)this != 0LL);
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  }
  v3 = (_QWORD *)((char *)this + 16);
  while ( (_QWORD *)*v3 != v3 )
  {
    v4 = (*v3 - 8LL) & -(__int64)(*v3 != 0LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
  }
}
