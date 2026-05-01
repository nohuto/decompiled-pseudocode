/*
 * XREFs of ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x18009D63C
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE178 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9F4 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serializ.c)
 * Callees:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x18009CD90 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(
        tson::output_archive *a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 8) = a3;
  tson::output_archive::operator()<tson::ansistring_tag &>(a1, (_OWORD *)(a2 + 16), a3);
  return a1;
}
