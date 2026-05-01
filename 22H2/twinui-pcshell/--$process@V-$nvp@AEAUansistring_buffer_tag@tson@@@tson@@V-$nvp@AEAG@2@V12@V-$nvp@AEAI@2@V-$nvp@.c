/*
 * XREFs of ??$process@V?$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V?$nvp@AEAG@2@V12@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@0@Z @ 0x18009F05C
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800AD624 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18009EDC0 (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EE80 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x18009FAFC (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_buffer_tag@1@@Z @ 0x18009FBD8 (--$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_buffer_tag &>,tson::nvp<tson::ansistring_buffer_tag &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  char v7; // r10
  char v11; // dl
  __int64 v12; // rax
  __int64 v13; // rax

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
  tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(this);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a3);
  v11 = *(_BYTE *)(a4 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a4;
  *((_BYTE *)this + 24) = v11;
  tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(this);
  tson::input_archive::process<tson::nvp<unsigned int &>>((__int64)this, a5);
  v12 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v12;
  tson::input_archive::read_string_buffer<tson::string_buffer_tag>(this);
  v13 = *a7;
  *((_BYTE *)this + 24) = *((_BYTE *)a7 + 8);
  *((_QWORD *)this + 2) = v13;
  return tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(this);
}
