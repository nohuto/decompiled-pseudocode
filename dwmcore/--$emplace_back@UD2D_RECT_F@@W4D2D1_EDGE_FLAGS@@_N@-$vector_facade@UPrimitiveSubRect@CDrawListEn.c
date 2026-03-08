/*
 * XREFs of ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x1800B2C00
 * Callers:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B25E8 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x1800B2C5C (-reserve_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimiti.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        _QWORD *a1,
        __int128 *a2,
        int a3,
        char a4)
{
  __int64 result; // rax
  __int128 v8; // xmm0

  result = detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
             a1,
             0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3));
  v8 = *a2;
  *(_BYTE *)(result + 20) = a4;
  *(_OWORD *)result = v8;
  *(_DWORD *)(result + 16) = a3;
  return result;
}
