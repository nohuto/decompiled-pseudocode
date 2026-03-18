/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x14000C9F0
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVHotKeyClient@@@Z @ 0x14000A468 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Deta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000735C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C33C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x14000CBB4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CC08 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  Microsoft::WRL::Wrappers::HString *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  int started; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v6 = -2147024809;
    v7 = 59LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !a4 )
  {
    v6 = -2147024809;
    v7 = 60LL;
    goto LABEL_27;
  }
  *(struct _GUID *)((char *)this + 24) = *a2;
  v8 = (MessageProxyReconnectAdapter *)((char *)this + 88);
  v9 = -1LL;
  do
    ++v9;
  while ( a3[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    goto LABEL_26;
  }
  v6 = Microsoft::WRL::Wrappers::HString::Set(v8, a3, v9);
  if ( v6 < 0 )
  {
LABEL_26:
    v7 = 63LL;
    goto LABEL_27;
  }
  *((_QWORD *)this + 6) = a4;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 9);
  v6 = CoreUICreate((char *)this + 72);
  if ( v6 < 0 )
  {
    v7 = 66LL;
    goto LABEL_27;
  }
  v15 = 0LL;
  v10 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v15);
  started = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, &v15);
  v6 = started;
  if ( started >= 0 )
  {
    started = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
    v6 = started;
    if ( started >= 0 )
    {
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 7);
      started = CoreUIFactoryCreate((char *)this + 56);
      v6 = started;
      if ( started >= 0 )
      {
        started = MessageProxyReconnectAdapter::AttemptPullProxy(this);
        v6 = started;
        if ( started >= 0 )
        {
          if ( *((_QWORD *)this + 8)
            || (started = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this), v6 = started, started >= 0) )
          {
            v6 = 0;
            goto LABEL_24;
          }
          v12 = 81LL;
        }
        else
        {
          v12 = 77LL;
        }
      }
      else
      {
        v12 = 75LL;
      }
    }
    else
    {
      v12 = 73LL;
    }
  }
  else
  {
    v12 = 72LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)started);
LABEL_24:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v15);
  return (unsigned int)v6;
}
