/*
 * XREFs of ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C33C
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x14000C9F0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x14000CD70 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000735C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C430 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x14000C5E8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x14000C630 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CD10 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  unsigned int RemoteProxy; // eax
  void *v3; // rdx
  unsigned int v4; // r8d
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  const char *v9; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0xAF,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 8) != 0LL,
    (bool)"Not expecting to pull a proxy when we have one",
    v9);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  ++*((_DWORD *)this + 10);
  RemoteProxy = MessageProxyReconnectAdapter::CreateRemoteProxy(this);
  v5 = RemoteProxy;
  if ( RemoteProxy )
  {
    if ( ((RemoteProxy + 2018375675) & 0xFFFFFFFB) != 0 )
    {
      wil::details::in1diag3::Log_Hr(retaddr, v3, v4, (const char *)RemoteProxy, v8);
    }
    else if ( *((_DWORD *)this + 10) >= MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
    {
      if ( MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
      {
        MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
        if ( v5 < 0 )
        {
          v6 = 218LL;
          goto LABEL_4;
        }
      }
    }
  }
  else
  {
    v5 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
    if ( v5 < 0 )
    {
      v6 = 201LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  return 0LL;
}
