__int64 __fastcall CInputManager::EnsureRenderThreadCanSendInputThreadMessages(
        CInputManager *this,
        __int64 a2,
        unsigned __int64 a3)
{
  wil::details **v5; // rbx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, const wchar_t *, _QWORD, wil::details **); // rdi
  unsigned __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  if ( *((_QWORD *)this + 7) )
    return 0LL;
  v5 = (wil::details **)((char *)this + 48);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 6,
    *((wil::details **)this + 4),
    a3);
  v6 = *((_QWORD *)this + 5);
  v7 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, wil::details **))(*(_QWORD *)v6 + 24LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v5,
    *v5,
    v8);
  v9 = v7(v6, L"EdgyConfigurationEndpoint", 0LL, v5 + 1);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF2u, 0LL);
  return v11;
}
