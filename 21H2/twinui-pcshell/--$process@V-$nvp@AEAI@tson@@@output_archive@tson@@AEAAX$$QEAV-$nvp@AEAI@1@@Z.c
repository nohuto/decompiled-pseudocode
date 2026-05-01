/*
 * XREFs of ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EF04
 * Callers:
 *     ??$?RV?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@1@V?$nvp@AEAG@1@V21@V?$nvp@AEAI@1@V?$nvp@AEAUstring_tag@tson@@@1@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x18009D234 (--$-RV-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_tag@tson@@@1@V-$nvp@AEAG@1@V21@V-$nvp@AEAI@1@V-$nvp.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEAI@2@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAI@1@00$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18009F9F0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800BEF00 (--$serialize@Voutput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800ADB24 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3FC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<unsigned int &>>(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char result; // al
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  LOBYTE(a3) = 16;
  *(_QWORD *)a1 = v4;
  v7 = *(_DWORD *)a2[2];
  v5 = v7;
  LOBYTE(v5) = v7 == 0;
  result = tson::output_archive::write_type(a1, v5, a3);
  if ( result )
    return tson::write_buffer::push_back(*(tson::write_buffer **)(a1 + 144), &v7, 4uLL);
  return result;
}
