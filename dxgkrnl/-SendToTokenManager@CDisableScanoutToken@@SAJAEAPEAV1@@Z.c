__int64 __fastcall CDisableScanoutToken::SendToTokenManager(struct CDisableScanoutToken **a1)
{
  int SessionTokenManager; // esi
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  SessionTokenManager = 0;
  if ( *a1 )
  {
    v5 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v5);
    if ( SessionTokenManager >= 0 )
    {
      v3 = v5;
      (*(void (__fastcall **)(__int64, struct CDisableScanoutToken **))(*(_QWORD *)v5 + 88LL))(v5, a1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
    if ( *a1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1);
      if ( *a1 )
        (**(void (__fastcall ***)(_QWORD, __int64))*a1)(*a1, 1LL);
      *a1 = 0LL;
    }
  }
  return (unsigned int)SessionTokenManager;
}
