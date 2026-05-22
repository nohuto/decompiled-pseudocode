/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BA@$$CBGPEAVHotkeyRegistrationForwarder@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BA@$$CBG$$QEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x18002DE08
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x18002DD50 (-RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18002DEC8 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x18002E3F0 (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x18002E424 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const (&)[16],HotkeyRegistrationForwarder *>(
        MessageProxyReconnectAdapter **a1,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner **a4)
{
  MessageProxyReconnectAdapter *v8; // rax
  MessageProxyReconnectAdapter *v9; // rax
  struct IMessageProxyReconnectAdapterOwner *v10; // r9
  MessageProxyReconnectAdapter *v11; // rbx
  int v12; // edi
  MessageProxyReconnectAdapter *v14; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (MessageProxyReconnectAdapter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v8);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach(&v14, v9);
    v10 = *a4;
    v11 = v14;
    v12 = MessageProxyReconnectAdapter::RuntimeClassInitialize(v14, a2, a3, v10);
    if ( v12 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
