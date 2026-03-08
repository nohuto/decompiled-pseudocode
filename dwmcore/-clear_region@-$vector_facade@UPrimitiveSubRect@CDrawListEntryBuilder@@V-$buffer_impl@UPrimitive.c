/*
 * XREFs of ?clear_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E81BC
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x18005CBF0 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?clear@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801F7F88 (-clear@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801F6FD0 (--$move@V-$move_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@std@@V-$checked_array_iter.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r10
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v5) >> 3);
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v3 = 24 * a3;
  result = (a1[1] - v5) >> 3;
  v8 = v5 + 8 * result;
  if ( a3 != v6 )
  {
LABEL_5:
    v9[2] = 0LL;
    v9[0] = v5;
    v9[1] = v6;
    result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<CDrawListEntryBuilder::PrimitiveSubRect *>,stdext::checked_array_iterator<CDrawListEntryBuilder::PrimitiveSubRect *>>)(
               v10,
               v3 + v5,
               v8,
               v9);
  }
  a1[1] -= v3;
  return result;
}
