/*
 * XREFs of ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F244
 * Callers:
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009D4D4 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 * Callees:
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x18009CFAC (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACEE0 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE158 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800AE4F8 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEE90 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<tip::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip::vector_nothrow<tip::test_flag> &>>(
        tson *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  __int64 v6; // rbx
  struct tson::output_archive *v7; // rsi
  __int64 v8; // rbx
  struct wil::StoredFailureInfo *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  struct tson::output_archive *v12; // rsi
  __int64 v13; // rbx
  struct tip::test_flag *v14; // r8
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v3;
  v6 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v15 = *(_QWORD *)(v6 + 16);
  tson::output_archive::operator()<tson::size_tag>((__int64)this, &v15);
  v7 = *(struct tson::output_archive **)v6;
  v8 = *(_QWORD *)v6 + 160LL * *(_QWORD *)(v6 + 16);
  while ( v7 != (struct tson::output_archive *)v8 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v7, v9);
    tson::output_archive::finishNode(this);
    v7 = (struct tson::output_archive *)((char *)v7 + 160);
  }
  tson::output_archive::finishNode(this);
  v10 = *a3;
  *((_BYTE *)this + 8) = *((_BYTE *)a3 + 8);
  *(_QWORD *)this = v10;
  v11 = a3[2];
  tson::output_archive::startNode(this);
  v15 = *(_QWORD *)(v11 + 16);
  tson::output_archive::operator()<tson::size_tag>((__int64)this, &v15);
  v12 = *(struct tson::output_archive **)v11;
  v13 = *(_QWORD *)v11 + 104LL * *(_QWORD *)(v11 + 16);
  while ( v12 != (struct tson::output_archive *)v13 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v12, v14);
    tson::output_archive::finishNode(this);
    v12 = (struct tson::output_archive *)((char *)v12 + 104);
  }
  tson::output_archive::finishNode(this);
}
