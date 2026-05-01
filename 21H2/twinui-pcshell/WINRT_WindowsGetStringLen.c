/*
 * XREFs of WINRT_WindowsGetStringLen @ 0x180091624
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18012113C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
UINT32 __stdcall WINRT_WindowsGetStringLen(HSTRING string)
{
  return WindowsGetStringLen(string);
}
