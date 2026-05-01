/*
 * XREFs of ??$process@V?$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ApiType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1801344E8
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180134704 (--$serialize@Vinput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVinput_arc.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDC4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800ABE00 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800AD560 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE714 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<enum PinManagerTipTests::ApiType &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // r10
  int v9; // edi
  _DWORD *v13; // r14
  __int64 v14; // rax
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v8 = *(_BYTE *)(a2 + 8);
  v9 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v8;
  v13 = *(_DWORD **)(a2 + 16);
  v16 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v16, 4uLL);
    v9 = v16;
  }
  *v13 = v9;
  v14 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v14;
  tson::load_nothrow(this, (_QWORD *)a3[2]);
  return tson::input_archive::process<tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
           this,
           a4,
           a5,
           a6,
           a7,
           a8);
}
