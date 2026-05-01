/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804D7404
 * Callers:
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1804D70C0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1804D7278 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18020DC58 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
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
    279LL,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 8) != 0LL,
    (bool)"Not expecting a valid proxy yet",
    v6);
  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    280LL,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 10) != 0LL,
    (bool)"Not expecting an existing timer",
    v7);
  *((_DWORD *)this + 10) = 0;
  v2 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
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
