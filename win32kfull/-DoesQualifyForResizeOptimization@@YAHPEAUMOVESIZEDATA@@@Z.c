/*
 * XREFs of ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1C01EA548
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

__int64 __fastcall DoesQualifyForResizeOptimization(struct MOVESIZEDATA *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // r9
  __int64 v5; // rdx

  if ( IsTopLevelWindow(*((_QWORD *)a1 + 2)) && *(_DWORD *)(v3 + 200) >= (int)v2 )
  {
    v4 = *(_QWORD **)(v1 + 40);
    v5 = v4[11] - v4[13];
    if ( !v5 )
      v5 = v4[12] - v4[14];
    if ( v5 && v4[21] == v2 )
      LODWORD(v2) = 1;
  }
  return (unsigned int)v2;
}
