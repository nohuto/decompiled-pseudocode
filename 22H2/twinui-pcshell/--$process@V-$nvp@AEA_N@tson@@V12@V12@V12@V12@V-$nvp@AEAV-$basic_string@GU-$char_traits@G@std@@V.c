/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEAI@2@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAI@1@00$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18009F734
 * Callers:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F4B8 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@_ea_18009F4B8.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF30 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEAI@2@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAI@1@00$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18009F9D0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char v13; // r10
  char v17; // dl
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8

  v13 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v13;
  tson::output_archive::operator()<bool &>((__int64)this, *(char **)(a2 + 16), a3);
  v17 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v17;
  tson::output_archive::operator()<bool &>((__int64)this, *(char **)(a3 + 16), v18);
  v19 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v19;
  tson::output_archive::operator()<bool &>((__int64)this, (char *)a4[2], v20);
  v21 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v21;
  tson::output_archive::operator()<bool &>((__int64)this, (char *)a5[2], v22);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
           this,
           a9,
           a10,
           a11,
           a12,
           a13);
}
