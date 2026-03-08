/*
 * XREFs of ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x1800CC090
 * Callers:
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x1800CB370 (-Initialize@CInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180103758 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(CInputManager *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 (__fastcall *)(void *, const void *, int), CInputManager *, _QWORD *); // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  if ( *((_QWORD *)this + 9) )
    return 0LL;
  v2 = (_QWORD *)((char *)this + 64);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 64,
    *((_QWORD *)this + 4));
  v3 = *((_QWORD *)this + 4);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), CInputManager *, _QWORD *))(*(_QWORD *)v3 + 112LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v2,
    *v2);
  v5 = v4(v3, CInputManager::s_OnReceiveInputThreadMessage, this, v2 + 1);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x8Bu, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           L"EdgyNotificationEndpoint",
           *((_QWORD *)this + 9),
           0LL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x90u, 0LL);
  }
  return v7;
}
