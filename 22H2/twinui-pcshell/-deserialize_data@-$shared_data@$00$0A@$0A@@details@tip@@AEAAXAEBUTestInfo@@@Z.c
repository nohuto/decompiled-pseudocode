/*
 * XREFs of ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF7C
 * Callers:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB8B0 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABBD4 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC118 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD0E8 (-is_running@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z @ 0x1800C1194 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x18009D41C (--$-RV-$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA.c)
 *     ??$?RV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@1@@Z @ 0x18009D4A0 (--$-RV-$nvp@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F188 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 *     ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x1800A0FA8 (--0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z.c)
 *     ??0read_buffer@tson@@QEAA@PEBD@Z @ 0x1800A10E8 (--0read_buffer@tson@@QEAA@PEBD@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDC4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?deserialize@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABF08 (-deserialize@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEAVinput_archive@tson@@@Z.c)
 */

void __fastcall tip::details::shared_data<1,0,0>::deserialize_data(__int64 a1, __int64 a2)
{
  bool v4; // zf
  _BYTE *v5; // rcx
  char v6; // al
  char v7; // [rsp+20h] [rbp-E0h] BYREF
  const char *v8; // [rsp+28h] [rbp-D8h] BYREF
  char v9; // [rsp+30h] [rbp-D0h]
  char *v10; // [rsp+38h] [rbp-C8h]
  const char *v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  const char *v14; // [rsp+58h] [rbp-A8h] BYREF
  char v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-98h]
  _BYTE v17[32]; // [rsp+70h] [rbp-90h] BYREF
  tson::read_buffer *v18; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+98h] [rbp-68h]
  char v20; // [rsp+B0h] [rbp-50h]

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
    goto LABEL_17;
  tson::read_buffer::read_buffer((tson::read_buffer *)v17, *(const char **)(a2 + 24));
  tson::input_archive::input_archive((tson::input_archive *)&v18, (struct tson::read_buffer *)v17, *(_BYTE *)(a1 + 33));
  if ( (*(_DWORD *)(a1 + 20) & 0x40000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 24) == 0LL;
    v8 = "name";
    v9 = 4;
    if ( v4 )
    {
      v10 = (char *)(a1 + 8);
      tson::input_archive::operator()<tson::nvp<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>> &>>(
        (__int64)&v18,
        (__int64)&v8);
      if ( *(_QWORD *)(a1 + 8) )
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v10 = &v7;
      tson::input_archive::operator()<tson::nvp<tson::ansistring_skip_tag &>>((tson::input_archive *)&v18, (__int64)&v8);
    }
  }
  v9 = 5;
  v8 = "flags";
  v12 = 6;
  v10 = (char *)(a1 + 120);
  v15 = 3;
  v11 = "errors";
  v13 = a1 + 72;
  v14 = "log";
  v16 = a1 + 96;
  tson::input_archive::process<tson::nvp<tip::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip::vector_nothrow<tip::test_flag> &>>(
    (tson *)&v18,
    (__int64)&v14,
    (__int64 *)&v11,
    (__int64 *)&v8);
  v5 = (_BYTE *)*((_QWORD *)v18 + 1);
  v6 = (unsigned __int64)v5 >= *((_QWORD *)v18 + 2) ? 0 : *v5;
  if ( v6 == 8 )
    tson::input_archive::consume_expected_marker(&v18);
  else
    tip::details::shared_data<1,0,0>::deserialize((__int64 *)a1, (__int64)&v18);
  if ( v19 < 0 || *((_BYTE *)v18 + 24) || v20 )
LABEL_17:
    *(_DWORD *)(a1 + 64) |= 0x80000u;
  else
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 16);
}
