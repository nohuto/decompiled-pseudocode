/*
 * XREFs of ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800B4B04
 * Callers:
 *     ??_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z @ 0x1800AF1A0 (--_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800B5048 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 */

void __fastcall KeyboardOverriderDispatcher::~KeyboardOverriderDispatcher(KeyboardOverriderDispatcher *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx

  *(_QWORD *)this = &KeyboardOverriderDispatcher::`vftable'{for `IRemoteKeyboardOverriderCallback'};
  *((_QWORD *)this + 1) = &KeyboardOverriderDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  KeyboardOverriderDispatcher::DestroyOverriderProxy(this);
  v2 = *((_QWORD *)this + 100);
  if ( v2 )
  {
    *((_QWORD *)this + 100) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 99);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 98);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 97);
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 96);
    if ( !v3 )
      break;
    v4 = v3 - 1;
    *((_QWORD *)this + 96) = v4;
    if ( !v4 )
      *((_QWORD *)this + 95) = 0LL;
  }
  v5 = *((_QWORD *)this + 94);
  while ( v5 )
  {
    --v5;
    v6 = *(void **)(*((_QWORD *)this + 93) + 8 * v5);
    if ( v6 )
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x128);
  }
  v7 = (void *)*((_QWORD *)this + 93);
  if ( v7 )
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 94)));
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  v8 = (void *)*((_QWORD *)this + 92);
  *((_QWORD *)this + 92) = 0LL;
  std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x10);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 56);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 55);
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 7);
    if ( !v9 )
      break;
    v10 = v9 - 1;
    *((_QWORD *)this + 7) = v10;
    if ( !v10 )
      *((_QWORD *)this + 6) = 0LL;
  }
  v11 = *((_QWORD *)this + 5);
  while ( v11 )
  {
    --v11;
    v12 = *(void **)(*((_QWORD *)this + 4) + 8 * v11);
    if ( v12 )
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x170);
  }
  v13 = (void *)*((_QWORD *)this + 4);
  if ( v13 )
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 5)));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v14 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)0x10);
  *((_DWORD *)this + 5) = -1073741823;
}
