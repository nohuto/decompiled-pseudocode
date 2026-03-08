/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@Z @ 0x180116808
 * Callers:
 *     ??$move@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x180116890 (--$move@V-$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V-$checked_array_iterator@PEAVPlane.c)
 *     ??$move_backward@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x180116930 (--$move_backward@V-$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V-$checked_array_iterator@.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x180116A9C (--$uninitialized_move@V-$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V-$checked_array_iter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 >= (unsigned __int64)-a2 )
      return *a1 + 160LL * *v2;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 160LL * *v2;
}
