/*
 * XREFs of ??$move@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x180116890
 * Callers:
 *     ?clear_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801170A8 (-clear_region@-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCach.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@Z @ 0x180116808 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@std@@.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *> &,__int64>(
                 a4,
                 0xCCCCCCCCCCCCCCCDuLL * ((a3 - (__int64)a2) >> 5));
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)((__int64)v8 + v5 - *a4) >> 5);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
