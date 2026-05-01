/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V42@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@12200@Z @ 0x18009F8F8
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800A04D4 (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF30 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EFA0 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18009F110 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@@outpu.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10)
{
  char v10; // r10
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8

  v10 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v10;
  tson::output_archive::operator()<bool &>((__int64)this, *(char **)(a2 + 16), a3);
  v14 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v14;
  tson::output_archive::operator()<bool &>((__int64)this, *(char **)(a3 + 16), v15);
  tson::output_archive::process<tson::nvp<long &>>((__int64)this, a4, v16);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this, a5, v17);
  tson::output_archive::process<tson::nvp<long &>>((__int64)this, a6, v18);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this, a7, v19);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this, a8, v20);
  v21 = *a9;
  *((_BYTE *)this + 8) = *((_BYTE *)a9 + 8);
  *(_QWORD *)this = v21;
  tson::output_archive::operator()<bool &>((__int64)this, (char *)a9[2], v22);
  v23 = *a10;
  *((_BYTE *)this + 8) = *((_BYTE *)a10 + 8);
  *(_QWORD *)this = v23;
  return tson::output_archive::operator()<bool &>((__int64)this, (char *)a10[2], v24);
}
