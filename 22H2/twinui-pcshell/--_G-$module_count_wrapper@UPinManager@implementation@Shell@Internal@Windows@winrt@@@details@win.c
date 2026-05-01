/*
 * XREFs of ??_G?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAAPEAXI@Z @ 0x1801370D4
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@WDA@EAAPEAXI@Z @ 0x1801716F0 (--_E-$heap_implements@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x180135C20 (--1-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winr.c)
 */

winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PinManager *Block,
        char a2)
{
  winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
