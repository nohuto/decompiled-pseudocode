/*
 * XREFs of ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x18009CE64
 * Callers:
 *     ??$?RV?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@1@V?$nvp@AEAG@1@V21@V?$nvp@AEAI@1@V?$nvp@AEAUstring_tag@tson@@@1@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x18009D234 (--$-RV-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_tag@tson@@@1@V-$nvp@AEAG@1@V21@V-$nvp@AEAI@1@V-$nvp.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE178 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800AF34C (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3FC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::string_tag &>(
        tson::output_archive *this,
        _OWORD *a2,
        __int64 a3)
{
  void *v4; // rdi
  unsigned __int64 v6[2]; // [rsp+20h] [rbp-28h]

  LOBYTE(a3) = 24;
  *(_OWORD *)v6 = *a2;
  v4 = *(void **)a2;
  LOBYTE(a2) = *(_QWORD *)a2 == 0LL;
  if ( (unsigned __int8)tson::output_archive::write_type(this, a2, a3) )
    tson::output_archive::write_string_bytes(this, v6[1], v4, 2 * v6[1]);
  return this;
}
