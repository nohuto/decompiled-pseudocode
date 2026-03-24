/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1800CDBDC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180096030 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18019D384 (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expan.c)
 * Callees:
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v7; // r10
  bool v8; // cc
  void *v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 4;
  v8 = v7 <= 0;
  if ( v7 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v7 )
      goto LABEL_7;
    v8 = v7 <= 0;
  }
  if ( !v8 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
LABEL_7:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
    JUMPOUT(0x180146461LL);
  }
  v9 = (void *)(*a4 + 16LL * a4[2]);
  memmove_0(v9, a2, a3 - (_QWORD)a2);
  result = a1;
  a4[2] = ((__int64)v9 + v5 - *a4) >> 4;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
