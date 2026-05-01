/*
 * XREFs of ??$?4U?$pair@Uhstring@winrt@@U12@@std@@$0A@@?$pair@Uhstring@winrt@@U12@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x180116CD0
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120FCC (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

HSTRING *__fastcall std::pair<winrt::hstring,winrt::hstring>::operator=<std::pair<winrt::hstring,winrt::hstring>,0>(
        HSTRING *a1,
        HSTRING *a2)
{
  HSTRING v4; // rbx
  HSTRING *v5; // rsi
  HSTRING v6; // rbx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = v4;
  }
  v5 = a2 + 1;
  if ( a1 + 1 != v5 )
  {
    v6 = *v5;
    *v5 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
    a1[1] = v6;
  }
  return a1;
}
