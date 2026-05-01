/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V42@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@12200@Z @ 0x18009F84C
 * Callers:
 *     ??$process@V?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAJ@2@V42@V52@V42@V42@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x18009F5CC (--$process@V-$nvp@AEAW4InstallTrigger@@@tson@@V-$nvp@AEA_N@2@V-$nvp@AEAV-$basic_string@GU-$char_.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EF5C (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x18009F6E0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800AD580 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10)
{
  char v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax

  tson::input_archive::process<tson::nvp<bool &>>((__int64 *)this, a2);
  tson::input_archive::process<tson::nvp<bool &>>((__int64 *)this, a3);
  tson::input_archive::process<tson::nvp<long &>>((__int64)this, a4);
  v13 = *(_BYTE *)(a5 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a5;
  *((_BYTE *)this + 24) = v13;
  tson::load_nothrow(this);
  tson::input_archive::process<tson::nvp<long &>>((__int64)this, a6);
  v14 = *a7;
  *((_BYTE *)this + 24) = *((_BYTE *)a7 + 8);
  *((_QWORD *)this + 2) = v14;
  tson::load_nothrow(this);
  v15 = *a8;
  *((_BYTE *)this + 24) = *((_BYTE *)a8 + 8);
  *((_QWORD *)this + 2) = v15;
  tson::load_nothrow(this);
  tson::input_archive::process<tson::nvp<bool &>>((__int64 *)this, a9);
  return tson::input_archive::process<tson::nvp<bool &>>((__int64 *)this, a10);
}
