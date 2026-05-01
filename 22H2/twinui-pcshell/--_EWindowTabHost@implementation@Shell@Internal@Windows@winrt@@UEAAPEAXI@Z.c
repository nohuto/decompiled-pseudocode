/*
 * XREFs of ??_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1800E8954
 * Callers:
 *     ??_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@WFA@EAAPEAXI@Z @ 0x180171470 (--_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E82C4 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::WindowTabHost *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::~WindowTabHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x348);
  return this;
}
