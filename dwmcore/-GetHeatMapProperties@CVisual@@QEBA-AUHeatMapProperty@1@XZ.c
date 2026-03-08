/*
 * XREFs of ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x1801D2BF4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetHeatMapProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 4) & 0x40000000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x2000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v4 = *(_DWORD *)(i + 20);
    *(_OWORD *)a2 = *(_OWORD *)(i + 4);
    *(_DWORD *)(a2 + 16) = v4;
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_OWORD *)(a2 + 4) = 0LL;
  }
  return a2;
}
