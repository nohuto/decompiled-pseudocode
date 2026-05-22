/*
 * XREFs of ?OnDisconnected@HotkeyRegistrationForwarder@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800BB4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::OnDisconnected(
        HotkeyRegistrationForwarder *this,
        struct IMessageProxy *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, struct IMessageProxy **); // rsi
  void (__fastcall *v5)(_QWORD, GUID *, struct IMessageProxy **); // rbx
  __int64 v6; // rcx
  struct IMessageProxy *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 6);
  if ( v2 )
  {
    v8 = 0LL;
    v5 = **v2;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v8);
    v5(v2, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v8);
    if ( v8 == a2 )
    {
      v6 = *((_QWORD *)this + 6);
      if ( v6 )
      {
        *((_QWORD *)this + 6) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v8);
  }
  return 0LL;
}
