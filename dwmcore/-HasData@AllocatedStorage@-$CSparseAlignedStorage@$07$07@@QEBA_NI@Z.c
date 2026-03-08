/*
 * XREFs of ?HasData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBA_NI@Z @ 0x1800D6F20
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::HasData(_DWORD *a1, char a2)
{
  return (__ROR4__(1, a2) & *a1) != 0;
}
