/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x18019F5E8
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x18019F6E0 (--_GCInputManager@@MEAAPEAXI@Z.c)
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x18027FCCC (--1CGlobalInputManager@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180103758 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CHitTestContext@@QEAA@XZ @ 0x18019F57C (--1CHitTestContext@@QEAA@XZ.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x1801AD8EC (-Stop@CMit@@QEAAXXZ.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CMit *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CInputManager::`vftable';
  v2 = (CMit *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CMit::Stop(v2);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v3 )
      (**v3)(v3, 1LL);
  }
  if ( *((_QWORD *)this + 9) )
    (*(void (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 5) + 48LL))(
      *((_QWORD *)this + 5),
      L"EdgyNotificationEndpoint",
      0LL);
  CInputManager::s_pInputManager = 0LL;
  CHitTestContext::~CHitTestContext((void **)this + 10);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 8,
    0LL,
    v4);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 6,
    0LL,
    v5);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
