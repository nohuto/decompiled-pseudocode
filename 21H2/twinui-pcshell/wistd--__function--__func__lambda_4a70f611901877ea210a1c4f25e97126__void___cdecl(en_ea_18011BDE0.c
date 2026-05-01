/*
 * XREFs of wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::_scalar_deleting_destructor_ @ 0x18011BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl_enum_wil::RegistryChangeKind__::_scalar_deleting_destructor_(
        char *a1,
        char a2)
{
  __int64 *v4; // rcx

  v4 = (__int64 *)(a1 + 40);
  if ( *v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
  *(_QWORD *)a1 = &wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
