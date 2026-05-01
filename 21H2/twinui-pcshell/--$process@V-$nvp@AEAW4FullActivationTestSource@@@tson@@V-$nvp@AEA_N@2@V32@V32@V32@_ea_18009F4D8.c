/*
 * XREFs of ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F4D8
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800A02C8 (--$serialize@Voutput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVoutput_archive@tson@.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF50 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEAI@2@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAI@1@00$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18009F754 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE134 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  char v15; // r10
  char v18; // dl
  __int64 v19; // r8

  v15 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v15;
  tson::output_archive::saveValue(this, **(_DWORD **)(a2 + 16));
  v18 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v18;
  tson::output_archive::operator()<bool &>((__int64)this, *(char **)(a3 + 16), v19);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
           this,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}
