/*
 * XREFs of ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C000C860
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 *     FindAdjacentMonitor @ 0x1C0168370 (FindAdjacentMonitor.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C000C8E8 (ExpandMonitorSpaceVertex.c)
 */

struct tagRECT *__fastcall ExpandedMonitorRect(
        struct tagRECT *__return_ptr retstr,
        struct tagMONITOR *a2,
        unsigned int a3)
{
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // si
  __int64 v7; // rax
  __int64 v8; // r8

  *retstr = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 28LL);
  if ( (a3 & 0xF) != 2 )
  {
    v5 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 40LL) + 62LL);
    v6 = (a3 >> 8) & 0x1FF;
    v7 = ExpandMonitorSpaceVertex(v6, v5, *(_QWORD *)&retstr->left);
    v8 = *(_QWORD *)&retstr->right;
    *(_QWORD *)&retstr->left = v7;
    *(_QWORD *)&retstr->right = ExpandMonitorSpaceVertex(v6, v5, v8);
  }
  return retstr;
}
