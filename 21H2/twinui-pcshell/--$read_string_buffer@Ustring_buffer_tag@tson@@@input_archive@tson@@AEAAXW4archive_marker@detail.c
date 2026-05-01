/*
 * XREFs of ??$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_buffer_tag@1@@Z @ 0x18009FBF8
 * Callers:
 *     ??$process@V?$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V?$nvp@AEAG@2@V12@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@0@Z @ 0x18009F07C (--$process@V-$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V-$nvp@AEAG@2@V12@V-$nvp@AEAI@2@V-$nvp@.c)
 * Callees:
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x18009E75C (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800ABE20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE734 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1800AF120 (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 */

char __fastcall tson::input_archive::read_string_buffer<tson::string_buffer_tag>(
        tson::input_archive *this,
        unsigned __int8 a2,
        __int64 a3)
{
  _WORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // ax
  tson::read_buffer *v11; // rcx
  _WORD *v12; // rdx
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int8 v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  LOBYTE(v5) = tson::input_archive::search(this);
  if ( (_BYTE)v5 )
  {
    LOBYTE(v6) = 24;
    tson::input_archive::consume_expected_marker(this, v6, 2147944029LL);
    v7 = *(_QWORD *)this;
    v19 = 0;
    tson::read_buffer::consume<unsigned char>(v7, &v19);
    if ( v19 > 1u )
    {
      v8 = tson::input_archive::upgrade_string_size(this, v19);
      v9 = *(_QWORD *)(a3 + 8);
      v10 = v8 - 1;
      v11 = *(tson::read_buffer **)this;
      v12 = *(_WORD **)a3;
      v13 = v10;
      if ( v10 >= v9 )
      {
        v15 = v9 - 1;
        tson::read_buffer::consume_n(v11, v12, 2 * v15);
        v5 = *(_WORD **)a3;
        *(_WORD *)(2 * v15 + *(_QWORD *)a3) = 0;
        v16 = *(_QWORD *)this;
        v17 = *(_QWORD *)(*(_QWORD *)this + 8LL) + 2 * (v13 - v15);
        if ( v17 > *(_QWORD *)(*(_QWORD *)this + 16LL) )
          *(_BYTE *)(v16 + 24) = 1;
        else
          *(_QWORD *)(v16 + 8) = v17;
      }
      else
      {
        v14 = 2LL * v10;
        tson::read_buffer::consume_n(v11, v12, v14);
        v5 = *(_WORD **)a3;
        *(_WORD *)(v14 + *(_QWORD *)a3) = 0;
      }
    }
    else
    {
      v5 = *(_WORD **)a3;
      **(_WORD **)a3 = 0;
    }
  }
  return (char)v5;
}
