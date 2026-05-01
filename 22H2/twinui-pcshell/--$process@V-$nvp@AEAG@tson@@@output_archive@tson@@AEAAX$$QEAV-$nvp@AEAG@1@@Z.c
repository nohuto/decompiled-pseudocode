/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18009EE24
 * Callers:
 *     ??$?RV?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@1@V?$nvp@AEAG@1@V21@V?$nvp@AEAI@1@V?$nvp@AEAUstring_tag@tson@@@1@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x18009D214 (--$-RV-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_tag@tson@@@1@V-$nvp@AEAG@1@V21@V-$nvp@AEAI@1@V-$nvp.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE158 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800ADB04 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3DC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<unsigned short &>>(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char result; // al
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  LOBYTE(a3) = 14;
  *(_QWORD *)a1 = v4;
  v7 = *(_WORD *)a2[2];
  v5 = v7;
  LOBYTE(v5) = v7 == 0;
  result = tson::output_archive::write_type(a1, v5, a3);
  if ( result )
    return tson::write_buffer::push_back(*(tson::write_buffer **)(a1 + 144), &v7, 2uLL);
  return result;
}
