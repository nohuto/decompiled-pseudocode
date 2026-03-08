/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x180116A9C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180117154 (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@Z @ 0x180116808 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@std@@.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rbx
  _OWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = (_OWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *> &,__int64>(
                   a4,
                   0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 5));
  while ( v4 != a3 )
  {
    *v8 = *(_OWORD *)v4;
    v8[1] = *((_OWORD *)v4 + 1);
    v8[2] = *((_OWORD *)v4 + 2);
    v8[3] = *((_OWORD *)v4 + 3);
    v8[4] = *((_OWORD *)v4 + 4);
    v8[5] = *((_OWORD *)v4 + 5);
    v8[6] = *((_OWORD *)v4 + 6);
    v8[7] = *((_OWORD *)v4 + 7);
    v8[8] = *((_OWORD *)v4 + 8);
    v8[9] = *((_OWORD *)v4 + 9);
    v8 += 10;
    v4 += 160;
  }
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v8 - *a4) >> 5);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
