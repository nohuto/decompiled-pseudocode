/*
 * XREFs of ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C000634C
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0003C88 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0003D30 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00062F0 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01817A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContainedBy<DMMVIDPN>::SetContainer(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)(a1 + 8) = a2;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, *(_QWORD *)(a1 + 8));
    return 3221225485LL;
  }
}
