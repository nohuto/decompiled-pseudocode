/*
 * XREFs of ?reserve_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUAlign16Chunk@CDrawListEntryBuilder@@_K0@Z @ 0x1801F8374
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005D950 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801F82FC (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801AE444 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801F818C (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expan.c)
 */

char *__fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v6; // rbp
  char *v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  char *v13; // r8
  char *v14; // rcx
  _OWORD *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD v19[4]; // [rsp+20h] [rbp-48h] BYREF
  char v20[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = (char *)*a1;
  v7 = (char *)a1[1];
  v8 = (v7 - (_BYTE *)*a1) >> 4;
  v9 = v8 - a2;
  v10 = (__int64)*a1 + 16 * v8;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_16;
  v11 = (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = 16 * a3;
  v13 = &v7[-16 * v11];
  if ( v7 != v13 )
  {
    v14 = v7 - 16;
    v15 = (_OWORD *)(v12 + v10);
    v16 = a3;
    if ( v10 )
    {
      while ( v16 )
      {
        --v16;
        --v15;
        if ( v16 >= a3 )
          break;
        *v15 = *(_OWORD *)v14;
        if ( v14 == v13 )
          goto LABEL_12;
        v14 -= 16;
      }
    }
LABEL_16:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_12:
  if ( v9 <= a3 )
  {
    v17 = 16 * a2;
  }
  else
  {
    if ( v8 && (!v6 || v8 < 0) )
      goto LABEL_16;
    v17 = 16 * a2;
    v19[1] = v8;
    v19[2] = v8;
    v19[0] = v6;
    std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      (__int64)v20,
      &v6[v17],
      (__int64)&v6[16 * (v8 - a3)],
      v19);
  }
  a1[1] = (char *)a1[1] + v12;
  return &v6[v17];
}
