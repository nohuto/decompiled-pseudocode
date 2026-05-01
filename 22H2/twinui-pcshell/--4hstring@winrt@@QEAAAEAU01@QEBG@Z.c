/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x18009B9BC
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120FCC (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180257718 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18025693C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

HSTRING *__fastcall winrt::hstring::operator=(HSTRING *a1, const unsigned __int16 *a2)
{
  HSTRING *v3; // rax
  HSTRING v4; // rbx
  HSTRING v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)&v6, a2);
  if ( a1 != v3 )
  {
    v4 = *v3;
    *v3 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = v4;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return a1;
}
