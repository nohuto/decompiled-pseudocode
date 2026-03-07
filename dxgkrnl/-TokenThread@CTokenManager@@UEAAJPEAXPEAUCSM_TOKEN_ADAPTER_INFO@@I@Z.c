__int64 __fastcall CTokenManager::TokenThread(
        CTokenManager *this,
        void *a2,
        struct CSM_TOKEN_ADAPTER_INFO *a3,
        unsigned int a4)
{
  int v7; // ebx
  struct DXGGLOBAL *Global; // rax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  Handle = 0LL;
  v7 = CTokenManager::ValidateUserEvent(a2, &v11);
  if ( v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v7 = (*(__int64 (__fastcall **)(HANDLE *))(*((_QWORD *)Global + 38069) + 440LL))(&Handle);
    if ( v7 >= 0 )
      v7 = CTokenManager::ProcessTokens(this, v11, Handle, a3, a4);
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v11 )
    ObCloseHandle(v11, 0);
  return (unsigned int)v7;
}
