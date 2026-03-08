/*
 * XREFs of ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01C0154
 * Callers:
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C01C0BAC (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C0D10 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01BEF10 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 */

__int64 __fastcall CCD_STORE::ForTopology(
        __int64 a1,
        int (*a2)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *),
        __int64 a3,
        char a4)
{
  struct _STRING *v4; // rbx
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v10; // r8

  v4 = (struct _STRING *)(a1 + 8);
  v5 = 0LL;
  v6 = *(unsigned __int16 *)(a1 + 8);
  if ( (_WORD)v6 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      a1 = *(char *)(v5 + v10);
      if ( (((_BYTE)a1 - 94) & 0xDF) == 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        return CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
                 a1,
                 v4,
                 (int (__fastcall *)(_BYTE *, __int64))a2,
                 a3,
                 a4);
    }
    WdLogSingleEntry2(2LL, (unsigned int)v5, *(char *)(v5 + v10));
  }
  return CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
           a1,
           v4,
           (int (__fastcall *)(_BYTE *, __int64))a2,
           a3,
           a4);
}
