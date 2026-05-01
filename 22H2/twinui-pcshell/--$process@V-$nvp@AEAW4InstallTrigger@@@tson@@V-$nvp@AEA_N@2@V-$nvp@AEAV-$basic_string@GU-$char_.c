/*
 * XREFs of ??$process@V?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAJ@2@V42@V52@V42@V42@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x18009F5AC
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1800A00F8 (--$serialize@Vinput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVinput_archive@tso.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x18009F6C0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V42@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@12200@Z @ 0x18009F82C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDC4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800ABE00 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800AD560 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE714 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<enum InstallTrigger &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
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
  int v14; // edi
  _DWORD *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  int v22; // [rsp+70h] [rbp+8h] BYREF

  v13 = *(_BYTE *)(a2 + 8);
  v14 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v13;
  v18 = *(_DWORD **)(a2 + 16);
  v22 = 0;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v19) = 18;
    tson::input_archive::consume_expected_marker(this, v19, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v22, 4uLL);
    v14 = v22;
  }
  *v18 = v14;
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  v20 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v20;
  tson::load_nothrow(this);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13);
}
