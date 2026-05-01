/*
 * XREFs of ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800ADB24
 * Callers:
 *     ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x18009D35C (--$-RV-$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18009EE44 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EF04 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EFC0 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE134 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE178 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800AF218 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800AF34C (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ??$process@V?$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@@Z @ 0x1800D36D4 (--$process@V-$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAH@1@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800ADED8 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     memcpy_s_1 @ 0x1800AF734 (memcpy_s_1.c)
 */

bool __fastcall tson::write_buffer::push_back(void **this, const void *a2, rsize_t a3)
{
  bool result; // al

  if ( (_BYTE *)this[260] - (_BYTE *)this[259] >= a3
    || (result = tson::write_buffer::reserve((tson::write_buffer *)this, a3)) )
  {
    memcpy_s_1(this[259], (_BYTE *)this[260] - (_BYTE *)this[259], a2, a3);
    this[259] = (char *)this[259] + a3;
    return 1;
  }
  return result;
}
