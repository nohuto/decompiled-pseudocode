/*
 * XREFs of ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F3E0
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18009FED8 (--$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EEA0 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EF5C (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@@Z @ 0x18009F36C (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x18009F6E0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800AD580 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v18; // rax

  tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>>((__int64)this, a2);
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  tson::input_archive::process<tson::nvp<bool &>>(this, a4);
  tson::input_archive::process<tson::nvp<bool &>>(this, a5);
  tson::input_archive::process<tson::nvp<bool &>>(this, a6);
  tson::input_archive::process<tson::nvp<bool &>>(this, a7);
  tson::input_archive::process<tson::nvp<bool &>>(this, a8);
  v18 = *a9;
  *((_BYTE *)this + 24) = *((_BYTE *)a9 + 8);
  *((_QWORD *)this + 2) = v18;
  tson::load_nothrow(this);
  tson::input_archive::process<tson::nvp<bool &>>(this, a10);
  tson::input_archive::process<tson::nvp<unsigned int &>>((__int64)this, a11);
  tson::input_archive::process<tson::nvp<bool &>>(this, a12);
  tson::input_archive::process<tson::nvp<bool &>>(this, a13);
  tson::input_archive::process<tson::nvp<long &>>((__int64)this, a14);
  return tson::input_archive::process<tson::nvp<bool &>>(this, a15);
}
