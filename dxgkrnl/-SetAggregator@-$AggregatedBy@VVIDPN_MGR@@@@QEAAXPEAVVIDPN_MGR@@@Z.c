/*
 * XREFs of ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C0015D24
 * Callers:
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C001FA44 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C001FB08 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0181300 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01817A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AggregatedBy<VIDPN_MGR>::SetAggregator(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(_QWORD *)(a1 + 8) )
    result = WdLogSingleEntry0(1LL);
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
