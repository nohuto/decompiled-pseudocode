/*
 * XREFs of ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9F4
 * Callers:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC138 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC294 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z @ 0x1800ACA2C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AEBD0 (-start@-$shared_data@$00$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AED20 (-start@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x18009D178 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009D4F4 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x18009D63C (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x1800A1054 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x1800ACDD4 (-finish@output_archive@tson@@QEAAJXZ.c)
 *     ?serialize@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE990 (-serialize@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEAVoutput_archive@tson@@W4serialize_opti.c)
 */

__int64 __fastcall tip::details::shared_data<1,0,0>::serialize_data(
        __int64 a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  _BYTE *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v12; // [rsp+30h] [rbp-D0h]
  const char *v13; // [rsp+38h] [rbp-C8h] BYREF
  char v14; // [rsp+40h] [rbp-C0h]
  __int128 v15; // [rsp+48h] [rbp-B8h]
  _BYTE *v16; // [rsp+58h] [rbp-A8h]
  const char *v17; // [rsp+60h] [rbp-A0h]
  char v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  tson::write_buffer *v20[20]; // [rsp+80h] [rbp-80h] BYREF

  if ( a3 )
  {
    v6 = (_BYTE *)(a1 + 33);
    tson::output_archive::output_archive((tson::output_archive *)v20, a2, *(_BYTE *)(a1 + 33));
    if ( (a3 & 4) != 0 && *v6 )
    {
      BYTE8(v11) = 7;
      *(_QWORD *)&v11 = "version";
      v12 = v6;
      tson::output_archive::operator()<tson::nvp<unsigned char &>>((__int64)v20, (__int64 *)&v11, v7);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 20) & 0x40000) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 8);
        if ( !v8 )
          v8 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)&v11 = v8;
        if ( v8 )
        {
          v9 = -1LL;
          do
            ++v9;
          while ( *(_BYTE *)(v8 + v9) );
          *((_QWORD *)&v11 + 1) = v9;
        }
        else
        {
          v11 = 0uLL;
        }
        LOBYTE(v12) = 0;
        v13 = "name";
        v15 = v11;
        v14 = 4;
        v16 = v12;
        tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(
          (tson::output_archive *)v20,
          (__int64)&v13,
          v7);
      }
      BYTE8(v11) = 5;
      *(_QWORD *)&v11 = "flags";
      v18 = 6;
      v12 = (_BYTE *)(a1 + 120);
      v14 = 3;
      v17 = "errors";
      v19 = a1 + 72;
      v13 = "log";
      *(_QWORD *)&v15 = a1 + 96;
      tson::output_archive::operator()<tson::nvp<tip::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip::vector_nothrow<tip::test_flag> &>>(
        (tson *)v20,
        (__int64)&v13);
    }
    tip::details::shared_data<1,0,0>::serialize((__int64 *)a1, (__int64)v20, a3);
    if ( (int)tson::output_archive::finish(v20) >= 0 )
      return *((_QWORD *)a2 + 258);
    *(_DWORD *)(a1 + 64) |= 0x100000u;
  }
  return 0LL;
}
