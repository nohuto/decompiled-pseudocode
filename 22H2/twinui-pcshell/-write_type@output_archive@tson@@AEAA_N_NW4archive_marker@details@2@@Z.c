/*
 * XREFs of ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3DC
 * Callers:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x18009CD70 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x18009CE44 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF30 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x18009D06C (--$-RV-$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x18009D158 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x18009D33C (--$-RV-$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18009EE24 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EEE4 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EFA0 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18009F110 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@@outpu.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@Z @ 0x18009FE1C (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE114 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE158 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ??$process@V?$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@@Z @ 0x1800D36B4 (--$process@V-$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAH@1@@Z.c)
 * Callees:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x18009FAA8 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800AF1F8 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 */

char __fastcall tson::output_archive::write_type(tson::write_buffer **a1, char a2, char a3)
{
  char v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  if ( !tson::output_archive::write_name((tson::output_archive *)a1, a2) )
    return 0;
  tson::write_buffer::push_back<unsigned char>(a1[18], &v5);
  return 1;
}
