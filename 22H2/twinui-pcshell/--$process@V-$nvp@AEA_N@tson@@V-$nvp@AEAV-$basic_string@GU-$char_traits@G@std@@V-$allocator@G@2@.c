/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEAI@2@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAI@1@00$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18009F9D0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEAI@2@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAI@1@00$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18009F734 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF30 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EEE4 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EFA0 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18009F110 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@@outpu.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9)
{
  char v9; // r10
  __int64 v13; // r8
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8

  v9 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v9;
  tson::output_archive::operator()<bool &>((__int64)this, *(char **)(a2 + 16), a3);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this, a3, v13);
  v14 = *(_BYTE *)(a4 + 8);
  *(_QWORD *)this = *(_QWORD *)a4;
  *((_BYTE *)this + 8) = v14;
  tson::output_archive::operator()<bool &>((__int64)this, *(char **)(a4 + 16), v15);
  tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)this, a5, v16);
  v17 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v17;
  tson::output_archive::operator()<bool &>((__int64)this, (char *)a6[2], v18);
  v19 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v19;
  tson::output_archive::operator()<bool &>((__int64)this, (char *)a7[2], v20);
  tson::output_archive::process<tson::nvp<long &>>((__int64)this, a8, v21);
  v22 = *a9;
  *((_BYTE *)this + 8) = *((_BYTE *)a9 + 8);
  *(_QWORD *)this = v22;
  return tson::output_archive::operator()<bool &>((__int64)this, (char *)a9[2], v23);
}
