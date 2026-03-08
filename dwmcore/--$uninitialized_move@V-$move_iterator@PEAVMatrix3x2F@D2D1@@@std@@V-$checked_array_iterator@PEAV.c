/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1802B6B8C
 * Callers:
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x180081728 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180083C00 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  signed __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 3);
  if ( v4 < 0 )
  {
    if ( a4[2] >= (unsigned __int64)(0x5555555555555555LL * ((a3 - a2) >> 3)) )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v4 > 0 && a4[1] - a4[2] < (unsigned __int64)v4 )
    goto LABEL_8;
LABEL_3:
  v5 = *a4;
  v6 = *a4 + 24 * a4[2];
  while ( a2 != a3 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(a2 + 16);
    v6 += 24LL;
    a2 += 24LL;
  }
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * ((v6 - v5) >> 3);
  result = a1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
