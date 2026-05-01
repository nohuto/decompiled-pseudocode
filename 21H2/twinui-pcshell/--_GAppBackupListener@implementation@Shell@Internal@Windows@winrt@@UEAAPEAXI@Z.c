/*
 * XREFs of ??_GAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18011BF3C
 * Callers:
 *     ??_EAppBackupListener@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x180171850 (--_EAppBackupListener@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18011B4D8 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::~AppBackupListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x210);
  return this;
}
