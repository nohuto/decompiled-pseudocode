char __fastcall CInputDest::HasDelegationThread(CInputDest *this)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 23) == 1 )
    return *(_QWORD *)(*((_QWORD *)this + 10) + 64LL) != 0LL;
  if ( *((_DWORD *)this + 23) == 2 )
  {
    v2 = *((_QWORD *)this + 10);
    if ( *(_QWORD *)(v2 + 264) || *(_QWORD *)(*(_QWORD *)(v2 + 16) + 1336LL) )
      return 1;
  }
  return v1;
}
