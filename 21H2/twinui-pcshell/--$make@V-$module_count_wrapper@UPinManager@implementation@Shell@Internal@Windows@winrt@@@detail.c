/*
 * XREFs of ??$make@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AUPinManager@Shell@Internal@Windows@0@XZ @ 0x180134240
 * Callers:
 *     ?CreateInstance@?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801389F0 (-CreateInstance@-$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@QEAA@XZ @ 0x180135354 (--0-$heap_implements@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>,>(
        __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x160uLL);
  memset_0(v5, 0, 0x160uLL);
  v2 = winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>(v5);
  v3 = 0LL;
  if ( v2 )
    v3 = v2 + 8;
  *a1 = v3;
  return a1;
}
