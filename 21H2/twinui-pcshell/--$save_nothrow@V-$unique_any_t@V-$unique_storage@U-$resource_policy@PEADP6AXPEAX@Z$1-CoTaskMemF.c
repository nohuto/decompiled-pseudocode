/*
 * XREFs of ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@Z @ 0x18009FE3C
 * Callers:
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009D4F4 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 * Callees:
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x18009CFCC (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800AF34C (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3FC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        tson::output_archive *this,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  void **v6; // rbx
  __int64 v7; // r14
  _BYTE *v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = *(_QWORD *)(a2 + 16);
  tson::output_archive::operator()<tson::size_tag>((__int64)this, &v10);
  v6 = *(void ***)v5;
  v7 = *(_QWORD *)v5 + 8LL * *(_QWORD *)(v5 + 16);
  while ( v6 != (void **)v7 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
    }
    else
    {
      v9 = 0LL;
    }
    LOBYTE(v4) = 23;
    LOBYTE(v3) = v8 == 0LL;
    if ( (unsigned __int8)tson::output_archive::write_type(this, v3, v4) )
      tson::output_archive::write_string_bytes(this, v9, v8, v9);
    ++v6;
  }
}
