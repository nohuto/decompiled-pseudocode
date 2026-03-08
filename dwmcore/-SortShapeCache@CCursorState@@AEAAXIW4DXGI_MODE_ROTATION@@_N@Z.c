/*
 * XREFs of ?SortShapeCache@CCursorState@@AEAAXIW4DXGI_MODE_ROTATION@@_N@Z @ 0x180277F3C
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x180278244 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180275578 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 */

void __fastcall CCursorState::SortShapeCache(CCursorState *this, int a2, enum DXGI_MODE_ROTATION a3, char a4)
{
  __int64 *v4; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  enum DXGI_MODE_ROTATION v7; // [rsp+60h] [rbp+18h] BYREF
  char v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6 = a2;
  v4 = (__int64 *)*((_QWORD *)this + 28);
  v5[0] = &v8;
  v5[1] = &v6;
  v5[2] = &v7;
  std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
    *((__int64 **)this + 27),
    v4,
    ((__int64)v4 - *((_QWORD *)this + 27)) >> 4,
    (__int64)v5);
}
