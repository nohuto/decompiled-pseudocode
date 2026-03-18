/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CC08
 * Callers:
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000C6C0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x14000C9F0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x14000C630 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StartConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  const char *v6; // [rsp+30h] [rbp-8h]
  const char *v7; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x117,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 8) != 0LL,
    (bool)"Not expecting a valid proxy yet",
    v6);
  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x118,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 10) != 0LL,
    (bool)"Not expecting an existing timer",
    v7);
  *((_DWORD *)this + 10) = 0;
  v2 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 10);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), MessageProxyReconnectAdapter *, char *))(*(_QWORD *)v2 + 136LL))(
         v2,
         MessageProxyReconnectAdapter::s_AttemptPullProxy,
         this,
         (char *)this + 80);
  if ( v3 < 0 )
  {
    v4 = 287LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v3);
    return 0LL;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 80LL))(
         *((_QWORD *)this + 10),
         10000000LL,
         10000000LL);
  if ( v3 < 0 )
  {
    v4 = 291LL;
    goto LABEL_5;
  }
  return 0LL;
}
