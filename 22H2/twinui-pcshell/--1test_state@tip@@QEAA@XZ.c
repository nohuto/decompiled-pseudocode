/*
 * XREFs of ??1test_state@tip@@QEAA@XZ @ 0x1800A1560
 * Callers:
 *     ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A13E8 (--1-$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_nothrow@Utest_flag@tip@@@tip@@QEAAXXZ @ 0x1800AB9B8 (-clear@-$vector_nothrow@Utest_flag@tip@@@tip@@QEAAXXZ.c)
 *     ?clear@?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@QEAAXXZ @ 0x1800ABA3C (-clear@-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-Co.c)
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAAXXZ @ 0x1800ABABC (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_state::~test_state(LPVOID *this)
{
  tip::vector_nothrow<tip::test_flag>::clear(this + 14);
  tip::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>::clear(this + 11);
  tip::vector_nothrow<wil::StoredFailureInfo>::clear(this + 8);
  if ( *this )
    CoTaskMemFree(*this);
}
