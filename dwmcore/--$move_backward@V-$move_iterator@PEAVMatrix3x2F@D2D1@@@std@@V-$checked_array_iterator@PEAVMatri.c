/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1801F7358
 * Callers:
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x180081728 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180083C00 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x1800B2C5C (-reserve_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimiti.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  size_t v6; // r9
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v6 = a3 - (_QWORD)a2;
  v7 = a4 + 2;
  v8 = 0x5555555555555555LL * ((a3 - (__int64)a2) >> 3);
  if ( v8 < 0 )
  {
    if ( *v7 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v7 < (unsigned __int64)v8 )
    goto LABEL_6;
LABEL_3:
  v9 = *a4;
  *v7 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)memmove_0((void *)(*a4 + 24LL * *v7 - v6), a2, v6) - v9) >> 3);
  result = a1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
