/*
 * XREFs of ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009D4F4
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9F4 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serializ.c)
 * Callees:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F264 (--$process@V-$nvp@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V-$nvp@AEAV-$vector_.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@Z @ 0x18009FE3C (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

tson *__fastcall tson::output_archive::operator()<tson::nvp<tip::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip::vector_nothrow<tip::test_flag> &>>(
        tson *this,
        __int64 a2)
{
  char v2; // r10

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  tson::output_archive::startNode(this);
  tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(this);
  tson::output_archive::finishNode(this);
  tson::output_archive::process<tson::nvp<tip::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip::vector_nothrow<tip::test_flag> &>>(this);
  return this;
}
