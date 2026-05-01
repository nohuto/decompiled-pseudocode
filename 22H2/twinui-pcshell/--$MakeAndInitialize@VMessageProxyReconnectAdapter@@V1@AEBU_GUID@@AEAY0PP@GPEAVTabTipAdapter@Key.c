/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAVTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAVTabTipAdapter@KeyboardHosting@@@Z @ 0x1803C71DC
 * Callers:
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1803CFE60 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x1804D6890 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1804D6EE8 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[255],KeyboardHosting::TabTipAdapter *>(
        MessageProxyReconnectAdapter **a1,
        __int64 a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner **a4)
{
  MessageProxyReconnectAdapter *v7; // rax
  int v8; // edi
  MessageProxyReconnectAdapter *v9; // rbx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  *a1 = 0LL;
  v7 = (MessageProxyReconnectAdapter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v7);
    v11 = (__int64)v9;
    v8 = MessageProxyReconnectAdapter::RuntimeClassInitialize(v9, &GUID_4184362c_9bcb_410f_a461_0bb9001ee6c7, a3, *a4);
    if ( v8 >= 0 )
    {
      if ( v9 )
        (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v9 + 8LL))(v9);
      *a1 = v9;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
