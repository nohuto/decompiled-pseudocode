/*
 * XREFs of ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x18009D43C
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF9C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x18009E75C (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE734 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1800AF120 (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<tson::ansistring_skip_tag &>>(
        tson::input_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v4) = 23;
    tson::input_archive::consume_expected_marker(this, v4, 2147944029LL);
    v5 = *(_QWORD *)this;
    v10 = 0;
    tson::read_buffer::consume<unsigned char>(v5, &v10);
    if ( v10 > 1u )
    {
      v6 = tson::input_archive::upgrade_string_size(this, v10);
      v7 = *(_QWORD *)this;
      v8 = (unsigned __int16)(v6 - 1) + *(_QWORD *)(*(_QWORD *)this + 8LL);
      if ( v8 > *(_QWORD *)(*(_QWORD *)this + 16LL) )
        *(_BYTE *)(v7 + 24) = 1;
      else
        *(_QWORD *)(v7 + 8) = v8;
    }
  }
  return this;
}
