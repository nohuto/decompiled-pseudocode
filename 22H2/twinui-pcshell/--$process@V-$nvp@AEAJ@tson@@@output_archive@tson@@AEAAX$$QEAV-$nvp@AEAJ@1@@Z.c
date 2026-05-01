/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EFA0
 * Callers:
 *     ??$?RV?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@1@V?$nvp@AEAG@1@V21@V?$nvp@AEAI@1@V?$nvp@AEAUstring_tag@tson@@@1@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x18009D214 (--$-RV-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_tag@tson@@@1@V-$nvp@AEAG@1@V21@V-$nvp@AEAI@1@V-$nvp.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V42@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@12200@Z @ 0x18009F8F8 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char__ea_18009F8F8.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEAI@2@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAI@1@00$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18009F9D0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE158 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ??$process@V?$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ApiType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1801345B0 (--$process@V-$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V-$nvp@AEAV-$basic_string_ea_1801345B0.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800ADB04 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3DC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<long &>>(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char result; // al
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  LOBYTE(a3) = 17;
  *(_QWORD *)a1 = v4;
  v7 = *(_DWORD *)a2[2];
  v5 = v7;
  LOBYTE(v5) = v7 == 0;
  result = tson::output_archive::write_type(a1, v5, a3);
  if ( result )
    return tson::write_buffer::push_back(*(tson::write_buffer **)(a1 + 144), &v7, 4uLL);
  return result;
}
