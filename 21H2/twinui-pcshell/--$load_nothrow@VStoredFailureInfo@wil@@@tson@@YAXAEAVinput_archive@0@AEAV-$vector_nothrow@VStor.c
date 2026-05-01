/*
 * XREFs of ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@Z @ 0x18009ED24
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F1A8 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18009CDE4 (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAAXXZ @ 0x1800ABADC (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1800ACEA8 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800AD644 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800ADABC (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800AEE84 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::load_nothrow<wil::StoredFailureInfo>(tson *this, __int64 a2)
{
  __int64 i; // rbx
  struct wil::StoredFailureInfo *v5; // r8
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF
  volatile signed __int32 *v7[2]; // [rsp+B0h] [rbp-18h] BYREF
  __int64 v8; // [rsp+E0h] [rbp+18h] BYREF

  v8 = 0LL;
  tson::input_archive::operator()<tson::size_tag &>((__int64)this, &v8);
  tip::vector_nothrow<wil::StoredFailureInfo>::clear(a2);
  for ( i = v8; i; --i )
  {
    v7[0] = 0LL;
    v7[1] = 0LL;
    memset_0(v6, 0, sizeof(v6));
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)v6, v5);
    tson::input_archive::finishNode(this);
    tip::vector_nothrow<wil::StoredFailureInfo>::push_back(a2, v6);
    wil::details::shared_buffer::reset(v7);
  }
}
