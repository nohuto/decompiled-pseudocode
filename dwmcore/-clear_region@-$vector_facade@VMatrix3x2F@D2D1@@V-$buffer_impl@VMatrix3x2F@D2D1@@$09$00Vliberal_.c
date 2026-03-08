/*
 * XREFs of ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008164C
 * Callers:
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800816B0 (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180091110 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801F6FD0 (--$move@V-$move_iterator@PEAUPrimitiveSubRect@CDrawListEntryBuilder@@@std@@V-$checked_array_iter.c)
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = a2;
  v6 = a3 + a2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v4) >> 3);
  if ( v6 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v9 = v4 + 8 * ((a1[1] - v4) >> 3);
    if ( v6 == v8 )
      goto LABEL_3;
  }
  if ( v5 && (!v4 || v5 < 0 || v8 < v5) )
    _invalid_parameter_noinfo_noreturn();
  v11[0] = v4;
  v11[1] = v8;
  v11[2] = v5;
  ((void (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::move<std::move_iterator<CDrawListEntryBuilder::PrimitiveSubRect *>,stdext::checked_array_iterator<CDrawListEntryBuilder::PrimitiveSubRect *>>)(
    v12,
    v4 + 24 * v6,
    v9,
    v11);
LABEL_3:
  result = -24 * a3;
  a1[1] += -24 * a3;
  return result;
}
