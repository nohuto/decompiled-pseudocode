/*
 * XREFs of WINRT_WindowsGetStringLen @ 0x180091604
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120FCC (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
UINT32 __stdcall WINRT_WindowsGetStringLen(HSTRING string)
{
  return WindowsGetStringLen(string);
}
