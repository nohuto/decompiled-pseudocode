/*
 * XREFs of ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A0DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180148E1C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A0644 (-FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@.c)
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A19F8 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::OnDisconnected(HotKeyProcessor *this, struct IMessageProxy *a2)
{
  int RegisteredClient; // ebx
  ULONG_PTR v5; // rdi
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  struct HotkeyClientRegistration *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  RegisteredClient = HotKeyProcessor::FindRegisteredClient((HotKeyProcessor *)((char *)this - 8), a2, &v8);
  if ( RegisteredClient >= 0 )
  {
    RegisteredClient = HotKeyProcessor::RemoveClientRegistration((HotKeyProcessor *)((char *)this - 8), v8);
    if ( RegisteredClient >= 0 )
      goto LABEL_8;
    v5 = 953LL;
  }
  else
  {
    v5 = 952LL;
  }
  if ( RegisteredClient == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v5);
  FailFastWithHR(RegisteredClient, retaddr, v5);
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  return (unsigned int)RegisteredClient;
}
