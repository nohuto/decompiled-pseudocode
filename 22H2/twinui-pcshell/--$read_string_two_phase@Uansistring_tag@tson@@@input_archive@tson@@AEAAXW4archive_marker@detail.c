/*
 * XREFs of ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x18009FCC4
 * Callers:
 *     ??$?RAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@input_archive@tson@@QEAAAEAV01@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009CE9C (--$-RAEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 * Callees:
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x18009E73C (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDC4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800ABE00 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE714 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1800AF100 (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD064 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

char __fastcall tson::input_archive::read_string_two_phase<tson::ansistring_tag>(
        tson::input_archive *this,
        unsigned __int8 a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  if ( *(_BYTE *)(a3 + 16) )
  {
    v8 = *(void **)a3;
    if ( !*(_QWORD *)a3 || (v9 = *(_QWORD *)(a3 + 8)) == 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(this);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v8, v9 - 1);
    v5 = *(_QWORD *)(a3 + 8);
    *(_BYTE *)(*(_QWORD *)a3 + v5 - 1) = 0;
  }
  else
  {
    *(_BYTE *)(a3 + 16) = 1;
    LOBYTE(v5) = tson::input_archive::search(this);
    if ( (_BYTE)v5 )
    {
      LOBYTE(v6) = 23;
      tson::input_archive::consume_expected_marker(this, v6, 2147944029LL);
      v7 = *(_QWORD *)this;
      v11 = 0;
      tson::read_buffer::consume<unsigned char>(v7, &v11);
      LOWORD(v5) = tson::input_archive::upgrade_string_size(this, v11);
      *(_QWORD *)(a3 + 8) = (unsigned __int16)v5;
    }
  }
  return v5;
}
